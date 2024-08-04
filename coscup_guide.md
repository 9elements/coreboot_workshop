coreboot docker
----------------
Docker is good to ensure predictable build environment. To use coreboot docker, please run this command line on your terminal:

```console
$ docker pull ghcr.io/9elements/firmware-action/coreboot_24.05
$ git clone https://review.coreboot.org/coreboot
$ cd coreboot
$ docker run -it -e CPUS=32 -e NUM_CPUS=32 -v $(pwd):/mnt/coreboot -w /mnt/coreboot ghcr.io/9elements/firmware-action/coreboot_24.05
```
Note: if using Arm Macbook: --platform linux/amd64  

Task 1: Build coreboot (without payload)
----------------------------------------
```console
$ make menuconfig
goto mainboard > mainboard model > q35  
goto payload > Don’t add a payload
$ make -j
```
run QEMU x86 Q35 on 64bit
### exit docker
```console
$ exit
$ qemu-system-x86_64 -bios build/coreboot.rom -serial stdio -M q35
```
Task 2: Build coreboot (with payload)
----------------------------------------
### edk2 payload
enter coreboot docker again
```console
$ docker run -it -e CPUS=32 -e NUM_CPUS=32 -v $(pwd):/mnt/coreboot -w /mnt/coreboot ghcr.io/9elements/firmware-action/coreboot_24.05
$ make menuconfig
goto: payload > payload to add > edk2 payload
$ make
```
run QEMU x86 Q35 on 64bit
### exit docker
```console
$ exit
$ qemu-system-x86_64 -bios build/coreboot.rom -serial stdio -M q35
```

### Linuxboot payload
enter coreboot docker again
```console
$ docker run -it -e CPUS=32 -e NUM_CPUS=32 -v $(pwd):/mnt/coreboot -w /mnt/coreboot ghcr.io/9elements/firmware-action/coreboot_24.05
$ make menuconfig
goto: payload > payload to add > a linux payload
$ make
add linux path and filename (download the linuxboot payload pre-built binary from github)
```
run QEMU x86 Q35 on 64bit
### exit docker
```console
$ exit
$ qemu-system-x86_64 -bios build/coreboot.rom -serial stdio -M q35
```

