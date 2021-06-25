# firmwares
This repository is a place to store all our hex files for our keyboards. Also included are the files needed to compile the firmware with QMK.

## How to just download our firmware
* navigate your way to one of the hex files.
  * for example the dactyl manuform 5x6 vial firmware you'd navigate to [keyboards/handwired/dactyl_manuform/5x6/handwired_dactyl_manuform_5x6_ohkeycaps_via.hex](keyboards/handwired/dactyl_manuform/5x6/handwired_dactyl_manuform_5x6_ohkeycaps_via.hex)
* right click on the _**raw**_ button and save link as
* save the file to your device

## How to flash
Our recommended way of flashing the keyboard is to use [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases). 
We already have the eeprom flashed for you with left and right hand. Please follow their tutorial for specific advice as it is much more comprehensive and covers many common problems

## How to compile
the files and folders we have laid out match the qmk layout. copy `*.c;*.h;*.mk` files from the keyboard you want to build into that same folder in the [QMK repository](https://github.com/qmk/qmk_firmware) and run the make command.
You'll want to follow their guildlines and documentation on how to compile.
