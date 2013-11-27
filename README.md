# mruby on Bare-metal Raspberry Pi

This is a sample project to use mruby on Bare-metal (without OSs such as Linux) Raspberry Pi.

cf. http://www.slideshare.net/yamanekko/rubyconf2013

## What we need

We need some tools:

- Eclipse CDT
- GNU toolchain for ARM
- PC (we use OS X, but you may use it on Linux and Windows)
- armjtag (https://github.com/dwelch67/raspberrypi/tree/master/armjtag) when you want to use JTAG debugger

## How to Build

### creating mruby project

- menu "Window" -> "Open Perspective" -> "Other..." -> "Git Repository Exploring" and press OK button
- In "Git Repositories" view, press "Clone a Git Repository and add the clone to this view" button
- In "Source Git Repository" Dialog, input "https://github.com/yamanekko/mruby.git" as URL, press Next button
- In "Branch Selection", check "master" and "rubyconf", and press Next button
- In "Local Destination", input (non-existing) directory name as "Directory", "rubyconf" as "Initial branch", and press Finish button
- menu "Window" -> "Open Perspective" -> "Other..." -> "C/C++"
- menu "File" -> "New" -> "Makefile Project with Existing Code"
- In "Import Existing Code", input project name as "Project Name", choose the directory as "Exising Code Loation", check C and C++ as "Languages", choose "Cross GCC" as "Toolchain for Indexer Settings", and press Finish button

## Build mruby

- open "build_config.rb" file
- modify the line ``cc.command='/opt/gnuarm/bin/arm-none-eabi-gcc'`` in build_config.rb. (If you use arm-none-eabi-gcc in MacPorts, use ``cc.command='/opt/local/bin/arm-none-eabi-gcc'``.)
- modify the line ``archiver.command='/opt/gnuarm/bin/arm-none-eabi-ar'`` in build_config.rb. (If MacPorts, use ``archiver.command='/opt/local/bin/arm-none-eabi-ar'``.)
- remove line "MRuby::CrossBuild.new('STM32F4') do" and following lines.
- save build_config.rb ("File" -> "Save")
- "Project" -> "Build Project"


### create raspberrypi project

- menu "File" -> "Import..."
- In "Select" dialog, "Git" -> "Project from Git" and press Next button
- In "Select Repository Source" dialog, "Clone URL" and press Next button
- In "Source Git Repository" dialog, input ``https://github.com/yamanekko/raspberrypi.git`` as URL and press Next button
- In "Branch Selection" dialog, check "master" and press Next button
- In "Local Destination" dialog, input directory name as "Directory", choose "master" as "Initial branch" and press Next button
- In "Select a wizard to use for importing projects" dialog, choose "Use the New project wizard  Import as general projects" as "Wizard for project import" and press Next button
- In "Select a wizard" dialog, choose "Make Project with Existing Code" in "C/C++" and press Next button
- In "Import Existing Code" dialog, input project name as "Project Name", input directory name created earlier as "Exising Code Loation", check "C" and "C++" as "Languages", choose "Cross GCC" as "Toolchain for Indexer Settings" and press Finish button


### Build RaspberryPi repository

- open Makefile
- set "ARMGNU" and "LIB" (If MacPorts, use ``ARMGNU = /opt/local/bin/arm-none-eabi`` and ``LIB = -L /opt/local/arm-none-eabi/lib/fpu/ -L/opt/local/lib/gcc/arm-none-eabi/4.7.2/fpu/``)
- set "INCDIR" and "ULIBDIR" (If mruby project and raspberrypi project is in the same directory, use ``INCDIR = ../<mruby project dir>/include/`` and ``ULIBDIR = ../<mruby project dir>/build/rs/lib``)
-  save Makefile ("File" -> "Save")
- Build the project ("Projec" -> "Build Project")

### Execute on Raspberry Pi

- copy kernel.img to SD card
- insert SD card into Raspberry Pi
- power on

### Execute on Raspberry Pi with JTAG debugger

(TBD)




