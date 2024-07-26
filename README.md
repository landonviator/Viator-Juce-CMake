# Viator-Juce-CMake

This project serves as a template for developing JUCE plugins with CMake. It includes automated unit testing and a GitHub Actions build pipeline for continuous integration. Designed for easy customization, it allows developers to quickly adapt and extend it for their specific plugin development needs.

## Getting the Project

Clone the project to your Git directory with the following command:

```bash
git clone --recurse-submodules https://github.com/landonviator/Viator-Juce-CMake.git
```

This ensures that the project is downloaded with the GoogleTest and Juce submodules. You'll then want to checkout the submodules and update them.

```bash
git submodule update --init
```

## Installing CMake

If you don't have CMake, you'll need to install it on your machine for your platform.

### MacOS

We'll first install Homebrew, a package manager for MacOS. You can either run the following command or download it from [this](https://brew.sh/) link.

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

Then, we use Homebrew to install CMake and another dependency.

```bash
brew install cmake gtk+3
```

### Windows

You'll need to install Chocolatey, a Windows package manager. You may already have it on your machine from installing other software, but you can follow [this](https://chocolatey.org/install) link to install it explicitly.

Then, we use Chocolatey to install CMake.

```bash
choco install cmake
```

### Linux

```bash
sudo apt-get update
sudo apt-get install -y build-essential cmake libgtk-3-dev libwebkit2gtk-4.0-dev
sudo apt-get install -y libasound2-dev
```

### Install Notes

If any of these methods don't work for you to install CMake, just go to [this](https://cmake.org/download/) link to install it from an executable.

## Building the Project

Initialize the CMake project and create a build folder with the following command:

```bash
cmake -S . -B build
```

Compile the project:

```bash
cmake --build build
```

This should compile the project and create build artifacts in cmake-build-debug that you could move to your plugin folder and load in a DAW or host.

To run the test suite, run the command:

```bash
GTEST_COLOR=1 ctest --test-dir build --output-on-failure -j12
```
