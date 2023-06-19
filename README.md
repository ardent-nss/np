# np

np is a build system for C/C++, made from scratch in Bash. Under early development; see the [planning pages](https://github.com/HackerDaGreat57/np/blob/main/_planning/np.pdf) (please note that the planned feature list could change at any time). Also see [#1](https://github.com/HackerDaGreat57/np/issues/1) (and [#2](https://github.com/HackerDaGreat57/np/issues/2), if you can help out with that).

## Dependencies/requirements
These are the versions of tools that I developed this script with, but earlier versions may work as well (no guarantee).
* A relatively modern terminal that supports 24-bit true color (optional; if you don't have this then uncomment line 5 in the script)
* bash 5.2
* fmt 9.1
* tput
* base64 9.1
* jq 1.6
* sed 4.9

## Help!! My terminal can't handle all the fancy formatting escape sequences in your script.

Run the script with the `-f` option. Make sure it's the *first* argument, or it might not work. Also, I would seriously consider upgrading/changing my terminal if I were you in this situation.

###### Everything in this repository is public domain, but I'd appreciate it if you gave credit to me for my work :)
