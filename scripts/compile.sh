#!/bin/bash

#
# For a more explained usage of this script, visit [my guide](https://github.com/ColeyG/wiki/blob/master/main/gba-dev.md)
# You can also pass -r after to instantly run the program via retroarch so long as a core is passed to the configuration.
# Config defaults are passed in 'example-config.config' and can be overwritten in by copying it and naming it 'config.config'.
#

. config/example-config.config

if [ -f config/config.config ]; then
  . config/config.config
fi

run=0

arm-none-eabi-gcc -c src/main.c -mthumb-interwork -fno-strict-aliasing -mthumb -O2 -o bin/main.o
arm-none-eabi-gcc bin/main.o -mthumb-interwork -mthumb -specs=gba.specs -o bin/main.elf
arm-none-eabi-objcopy -v -O binary bin/main.elf bin/main.gba

while getopts 'r' opt; do
  case $opt in
    r) retroarch -L "${gba_core}" "bin/main.gba" ;;
  esac
done
