# np
np is a build system for C/C++, made from scratch in Bash. Under early development; see the [planning pages](https://github.com/HackerDaGreat57/np/blob/main/_planning/np.pdf) (please note that the planned feature list could change at any time). Also see [#1](https://github.com/HackerDaGreat57/np/issues/1) (and [#2](https://github.com/HackerDaGreat57/np/issues/2), if you can help out with that).

## Features/goals
`np` aims to help you automate the tedious parts of C/C++ software development. Its architecture is designed to allow easy management and compilation of large projects, while still letting you have full control over the entire process.

It can be used anywhere that C or C++ code is present, because all the script does is handle the compilation of that code and maybe some external libraries, and that's it. The possibility to specify custom commands that are executed before and after compiling individual source code files, build configurations, and configuration groups, as well as the possibility to override the entire compilation and linking process completely, give the user the same level of control as if they were writing a custom build script from scratch.

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
  - If your terminal outputs the raw escape sequences and causes inconveniences then uncomment line 5 in the script
  - (Modern terminals should automatically remove escape sequences which it can't display, FYI.)

###### Everything in this repository is public domain, but I'd appreciate it if you gave credit to me for my work :)