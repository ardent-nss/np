# np

np is a build system for C/C++, made from scratch in Bash.

Currently the project is in very early development. The speed of development of this project is variable, as it's influenced by my fluctuating amount of free time. But I'll hit the afterburners during mostly July 29 - August 15, as I will have practically nothing else to do during that time.

## As of July 16, the Git commit history is very messy.

Please literally bear with me here, as I don't have the mental capacity to come up with a productive commit message when I *just* need to mark a point in development. I promise I will clean this up later.

## Features/goals

`np` aims to help you automate the tedious parts of C/C++ software development. Its architecture is designed to allow easy management and compilation of large projects, while still letting you have full control over the entire process.

It can be used anywhere that C or C++ code is present, because all the script does is handle the compilation of that code and maybe some external libraries, and that's it. The possibility to specify custom commands that are executed before and after compiling individual source code files, build configurations, and configuration groups, as well as the possibility to override the entire compilation and linking process completely, give the user the same level of control as if they were writing a custom build script from scratch.

This project is also *smart* and makes advanced compilation features very easy to implement compared to how you'd do it in a conventional Makefile. For example, multithreaded compilation and selective recompilation (recompiling only changed source files) are a lot more straightforward in np than they are in GNU Make.

This project is in the public domain, so everybody has the freedom to use, extend, customize, and distribute the code even in commercial settings. All I ask of anyone who distributes the project to not claim it as their own work and not attempt to disguise nasty viruses inside the otherwise perfectly innocent code.

## Dependencies/requirements

These are the versions of tools that I developed this script with, but other versions may work as well (no guarantee). **All of the dependencies *should* come preinstalled with most Linux distros, and they should be installable on older UNIXes and LAWs (Linux-Alongside-Windows environments like msys2, cygwin, and WSL2).**

* `bash` 5.2
* `fmt` 9.1
* `tput`
* `base64` 9.1
* `jq` 1.6
* `sed` 4.9
* **Optional:** A relatively modern terminal that supports 24-bit true color
  - If your terminal outputs the raw escape sequences and causes inconveniences then uncomment line 5 in the script or always run the script with `-f` as the first argument.
  - (Modern terminals should automatically remove escape sequences which they can't display, FYI.)

## Contributing

Take a look at issue [#2](https://github.com/HackerDaGreat57/np/issues/2) and get yourself a sweet spot on [CONTRIBUTORS.md](https://github.com/HackerDaGreat57/np/blob/main/CONTRIBUTORS.md)!

## History

Once upon a time, I created a script named `np`, for "New Project". It basically created a new C++ project by copying a template Makefile into a directory of my choice so I could develop freely, allocating all of my mental capacity to the project itself rather than its build system. But it derailed pretty fast and I eventually ended up with tons of tiny scripts that did trivial things just because Make couldn't do them reliably by itself. I never ended up figuring out multithreaded compilation without a dirty hack whose reliability was variable, and I just didn't like the experience overall.

That's when I got sick and tired of Make and decided to create np.

###### Everything in this repository is public domain, but I'd appreciate it if you gave credit to me for my work :)
