# C++ Classroom Code Repository

This repository contains C++ code written during classroom sessions. The code covers various topics and examples to help understand C++ programming concepts.


## Getting Started

Follow the instructions below to set up your environment and start working with the code in this repository.

### 1. Clone the Repository

To clone this repository to your local machine, open a terminal or Git command console and run:

```bash
git clone https://github.com/Angi-1401/iupsm-cpp-classroom.git
cd iupsm-cpp-classroom
```
### 2. Install MingGW-64 with MSYS2

MinGW-w64 is a compiler for Windows that supports C++ development. Follow these steps to install it:

1. Download and install MSYS2 from [the official MSYS2 website](https://www.msys2.org).

2. Open the MSYS2 terminal and update the package database:

```bash
pacman -Syu
```

3. Close and reopen the MSYS2 terminal, then install MinGW-w64 toolchain with the following command:

```bash
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```

4. Add the MinGW-w64 bin directory to your PATH:
- Open the Start menu and search for "Environment Variables".
- Click "Edit the system environment variables".
- In the "System variables" section, find the "Path" variable and click "Edit".
- In the "Variable value" field, add the path to the MinGW-w64 bin directory, typically `C:\msys64\mingw64\bin`.
- Click "OK" to save the changes.

5. Verify the installation by running the following command in a terminal:

```bash
g++ --version
```

### 3. Install VS Code and C/C++ extensions

1. Download and install VS Code from [the official VS Code website](https://code.visualstudio.com).

2. Open VS Code and install the following extensions:
- C/C++: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools

### 4. Build and Run C++ Code

1. Open a terminal or Git command console and navigate to the root directory of the repository.

2. Run the code using the play button found in the top-right corner of VS Code.

3. The code will be compiled and executed in the terminal.

## License

This repository is for educational purposes and does not include a specific license. Feel free to use the code for learning and personal projects. :)