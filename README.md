coreboot README
===============

CTF - Missing onboard PCI device

## Payload

EDK2 payload

## Target

Odroid H4+

## Problem

The eMMC device is missing in lspci.

## Task

Fix the mainboard code in `src/mainboard/hardkernel/odroid-h4` and make the PCI device appear in
GNU/Linux.
