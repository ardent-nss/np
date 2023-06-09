# np

The script I use to make a new C++ project. `np` stands for "New Project". Designed for use with VSCode.

It's only for my own niche use cases so don't expect it to be useful for you, but go ahead and try it out if you want to, I guess. (For starters, it only supports C++23 with the GNU GCC compiler and a Linux environment. But if you know what you're doing then go ahead and modify it so it fits your needs.)

## Basic overview

1. Enter a computer-friendly short name for your project such as `my_new_project`
2. The script will create a directory named what you entered in the last line. It will create source, binary, and object subdirectories to place files in.
3. The template source file is copied into the source directory. It's a simple Hello World file.
4. The build scripts and Makefile are copied into the root directory of the created project. The build script works for Linux arm64 and x86_64 by default, but you can add more architectures and platforms if you know what you're doing.
5. For VSCode users, it adds a build & debug target to `tasks.json` and `launch.json` for both supported architectures so you can build and run your new project with a push of a button without going to a terminal! (It will open a new terminal though, LOL. The point is that you won't have to execute the build script manually and error reporting is a bit tidier.)

Remember that the `_conv` variants of the build targets in the Makefile are only there so that if you add external dependencies in the future, you can just add the library files to corresponding variables and reconfigure the build scripts so they build the extra libraries from source automatically before compilation. Therefore if somebody  is building the project without specifing the `_conv` variant of the build target, you can assume all the required libraries and headers are already present elsewhere in the system.

###### Everything in this repository is public domain :)
