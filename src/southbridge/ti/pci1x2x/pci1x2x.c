/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2010 Marc Bertens <mbertens@xs4all.nl>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#include <device/device.h>
#include <device/pci.h>
#include <device/pci_ids.h>
#include <device/pci_ops.h>
#include <console/console.h>
#include "chip.h"

static void ti_pci1x2y_init(struct device *dev)
{

	printk(BIOS_INFO, "Init of Texas Instruments PCI1x2x PCMCIA/CardBus controller\n");
	struct southbridge_ti_pci1x2x_config *conf = dev->chip_info;

	if (conf) {
		/* Cache Line Size (offset 0x0C) */
		pci_write_config8(dev, 0x0C, conf->clsr);
		/* CardBus latency timer (offset 0x1B) */
		pci_write_config8(dev, 0x1B, conf->cltr);
		/* Bridge control (offset 0x3E) */
		pci_write_config16(dev, 0x3E, conf->bcr);
	}
	/*
	 * Enable change sub-vendor ID. Clear the bit 5 to enable to write
	 * to the sub-vendor/device ids at 40 and 42.
	 */
	pci_write_config32(dev, 0x80, 0x10);
	pci_write_config32(dev, 0x40, PCI_VENDOR_ID_NOKIA);

	if (conf) {
		/* Now write the correct value for SCR. */
		/* System control (offset 0x80) */
		pci_write_config32(dev, 0x80, conf->scr);
		/* Multifunction routing */
		pci_write_config32(dev, 0x8C, conf->mrr);
	}
	/* Set the device control register (0x92) accordingly. */
	pci_write_config8(dev, 0x92, pci_read_config8(dev, 0x92) | 0x02);
}

struct device_operations southbridge_ti_pci1x2x_pciops = {
	.read_resources   = NULL, //pci_dev_read_resources,
	.set_resources    = pci_dev_set_resources,
	.enable_resources = pci_dev_enable_resources,
	.init             = ti_pci1x2y_init,
	.scan_bus         = 0,
};

static const struct pci_driver ti_pci1225_driver __pci_driver = {
	.ops    = &southbridge_ti_pci1x2x_pciops,
	.vendor = PCI_VENDOR_ID_TI,
	.device = PCI_DEVICE_ID_TI_1225,
};

static const struct pci_driver ti_pci1420_driver __pci_driver = {
	.ops    = &southbridge_ti_pci1x2x_pciops,
	.vendor = PCI_VENDOR_ID_TI,
	.device = PCI_DEVICE_ID_TI_1420,
};

static const struct pci_driver ti_pci1510_driver __pci_driver = {
	.ops    = &southbridge_ti_pci1x2x_pciops,
	.vendor = PCI_VENDOR_ID_TI,
	.device = PCI_DEVICE_ID_TI_1510,
};

static const struct pci_driver ti_pci1520_driver __pci_driver = {
	.ops    = &southbridge_ti_pci1x2x_pciops,
	.vendor = PCI_VENDOR_ID_TI,
	.device = PCI_DEVICE_ID_TI_1520,
};

struct chip_operations southbridge_ti_pci1x2x_ops = {
	CHIP_NAME("TI PCI1x2x Cardbus controller")
};
