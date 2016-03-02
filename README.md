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

UPDATE:
Package for ubuntu 14.04 is gcc-arm-none-eabi

TO FLASH TO A BLACK JAGUAR:
The 2Can has a default IP address of 10.0.0.10.
Get a Windows laptop setup with ethernet on 10.0.0.9 or something.
Download the compiled firmware from github or the repo.
StellarisWare/boards/rdk-bdc24/qs-bdc24/gcc/qs-bdc24.bin

Add http://10.0.0.10 as a trusted site in Internet Explorer
Add http://10.0.0.10 as an exception in Java.

Go to http://10.0.0.10 in Internet Explorer
To the "node update".  Make sure the java applet loads in the bottom of the page.
Select "jaguar" and the qs-bdc24.bin file

If it works, the version will be 6969.




