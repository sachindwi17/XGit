![XGit](./assets/xgit-logo.png)
> A Simple git client, provides flexibility to committers.

<span style="color: purple;"><b>Technologies:</b> C++, Shell Script, CMake</span>

## What is the need of XGit
- The Git only have CLI, command directive mode.
- The Git is not easy to use for beginners.
- The Git is not easy to use for non-technical people, becouse it use technical terms.
- The XGit solve all the above problem with the terminal interactive interface.
- Backward compatible, with most of Os.
- Redefined the complex technical terms with simple one.

## Essential components requirements and tools
- C++: The XGit is written in C++.
- Shell Script: The XGit is using shell script for some of the tasks not possible with C++. [BOOK](https://www.amazon.com/Learn-Shell-Script-Suryapratap-Suryavanshi-ebook/dp/B09V2ZG7FK/ref=sr_1_1?crid=1V906P2U0GURO&keywords=learn+shell+script&qid=1664270508&qu=eyJxc2MiOiIyLjA2IiwicXNhIjoiMC4wMCIsInFzcCI6IjAuMDAifQ%3D%3D&sprefix=learn+shell+scri%2Caps%2C753&sr=8-1)
- CMake: The XGit is using CMake for building the project. [LINK](https://github.com/Kitware/CMake/releases/download/v3.24.2/cmake-3.24.2-windows-x86_64.msi)
- Git: The XGit is use base layer Git for version controling. [LINK](https://git-scm.com/downloads)
- GCC MinGW-64: The XGit is using GCC MinGW-64 for compiling the C++ code. [LINK](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe)

## References
<b>1. Video</b>: [What is git(English)](https://www.youtube.com/watch?v=2sjqTHE0zok&t=716s)<br>
<b>2. Video</b>: [What is git(Hindi)](https://www.youtube.com/watch?v=QhqVRuRBA9w)<br>
<b>3. Video</b>: [What is git and GitHub](https://www.youtube.com/watch?v=ZoOdwgxmw4U)<br>
<b>4. Article</b>: [What are git and GitHub](http://ryanheathcote.com/git/build-your-own-vcs)<br>
<b>5. GitHub</b>: [GitHub Repository](https://github.com/anurag97/Mygit)<br>

## Compile & Run

How to manage files and directories.
```sh
.
├── LICENSE  # License file.
├── README.md # Documentation file.
├── assets # Contain all assests files.
│   └── ___.__
├── main.cpp # Main source code file.
├── CMakeLists.txt # Contain all cmake related code.
├── src
│   ├── headers # Contain all headers related to the codebase.
│   │   └── ______.h
│   └── lib # Contains all libs related to the codebase.
│       └── ______.lib
└── build # Output folder contain all binary files for final software.
```

### Download Release:
- [Windows](./release/xgit.exe)
- [Linux](./release/xgit)
- [MacOs](./release/xgit)

### Compilation and Installation <span style="color: green;">[CROSS PLATFORM]</span>:
```sh
# Run this script to compile and install the software in any platform.
./setup.sh
```

### For compile with CMake:
```sh
cmake -G "MinGW Makefiles" -S . -B ./build
```

For build with CMake:
```sh
cmake --build .\build\
```

For run:
```sh
.\build\xgit
```

### For compile with bash:
```sh
./setup.sh
```

### How to Install the XGit to your system:
- For Windows:
    ```sh
    mv ./build/xgit.exe c:/windows/system32
    ```
- For Linux:
    ```sh
    sudo mv ./build/xgit /usr/bin
    ```

## Code Style
| Code Implementation | Code Style |
| -- | -- |
| Class & Packages | PascalCase |
| Namespace | lower_snake_case |
| Constant | CONSTANT_CASE |
| Function | camelCase |

For more: [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html), [Google Shell Script Style Guide](https://google.github.io/styleguide/shellguide.html)

## Comments
Comments should be self, described and for every piece of code that can do a task for a specific reason, there must be a elevrative comments. Comments documenting declarations should be full sentences, even if that seems a little redundant. This approach makes them format well when extracted into good documentation. Comments should begin with the name of the thing being described and end in a period.
