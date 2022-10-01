#!/bin/bash

# for fixing script run issue
sed -i -e 's/\r$//' setup.sh

# remove old build directory
rm -rf build

# Firstly run the following command to make cmkae cashed files.
if [[ "$OSTYPE" == "linux-gnu" ]]; then
    cmake -S . -B ./build
else
    cmake -G "MinGW Makefiles" -S . -B ./build
fi

# Secondly run the following command to build the project.
cmake --build ./build/ --config Release

# copy the last build file and paste into release folder.
if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    # Linux
    cp ./build/xgit ./release/xgit
    cp ./release/xgit /usr/bin
fi
if [[ "$OSTYPE" == "darwin"* ]]; then
    # Mac OSX
    cp ./build/xgit ./release/xgit
    cp ./release/xgit /usr/bin
fi
if [[ "$OSTYPE" == "cygwin" ]]; then
    # POSIX compatibility layer and Linux environment emulation for Windows
    cp ./build/xgit.exe ./release/xgit.exe
    cp ./release/xgit.exe c:/windows/system32
fi
if [[ "$OSTYPE" == "msys" ]]; then
    # Lightweight shell and GNU utilities compiled for Windows (part of MinGW)
    cp ./build/xgit.exe ./release/xgit.exe
    cp ./release/xgit.exe c:/windows/system32
fi
if [[ "$OSTYPE" == "win32" ]]; then
    cp ./build/xgit.exe ./release/xgit.exe
    cp ./release/xgit.exe c:/windows/system32
fi

# print success message to console and wait for enter press.
echo -e "\e[32mBuild successfull. Press enter to exit.\e[0m"
read
