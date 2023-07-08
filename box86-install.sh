#!/bin/bash
sudo apt update
sudo apt install build-essential mono-runtime gcc-arm-linux-gnueabihf git cmake -y
cd
git clone https://github.com/ptitSeb/box86
cd box86
mkdir build; cd build; cmake .. -DRPI4ARM64=1 -DCMAKE_BUILD_TYPE=RelWithDebInfo
make -j4
sudo make install