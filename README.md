StellarisWare
=============

Black Jaguar Firmware

To compile you need to install arm-none-eabi-gcc and related tools. 

I used this link to install tool chain:
https://pixhawk.ethz.ch/imu_toolchain/sourcery

Here are some other links that I haven't tried:
http://eliaselectronics.com/stm32f4-tutorials/setting-up-the-stm32f4-arm-development-toolchain/
https://launchpad.net/gcc-arm-embedded/+download

You also might try to install package "arm-none-eabi-gcc-linux".  It might be in some distros.

To flash firmware to device you need to use a 2CAN ethernet to can bridge or a custom made serial cable with BDC-COM software.
