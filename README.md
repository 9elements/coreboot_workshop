coreboot README
===============

CTF - Malfunctioning UART

## Problem

There's no serial output on UART0

## Payload

-

## Target

Odroid H4+

## Task

Fix the mainboard code in `src/mainboard/hardkernel/odroid-h4` by using the 'flash console':

* Enable flash console in Kconfig (CONFIG_CONSOLE_SPI_FLASH)
* Build
* Flash and run the generated coreboot.rom
* Read back the coreboot.rom
* Extract the CONSOLE region from the binary that you just read: ./build/cbfstool PATH-TO-COREBOOT-BINARY read -r CONSOLE -f ./console.log
* Read the log
* Fix the non-working serial console
