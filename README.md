shell-compat-utils: Aids for Compatibility Testing of Scripts
==============================================================

This builds programs that can help with testing compatibility of scripts
written on GNU/Linux systems with MacOS and BSD. The top-level `Test`
script builds all code and adds symlinks to `bin/` for each program with a
name that reflects its version.

### Programs

- `bash3`: Bash version 3.2.48, from the [unofficial mirror Git
  repo][bash-un] commit `f3b6bd19` ("Imported from ../bash-3.2.48.tar.gz.")
  This is probably similar to the latest version of Bash available on
  MacOS, which never upgraded to Bash 4.x but instead switched the default
  user shell to Zsh.

Zsh is not included in this repo because most systems already have a
current version of Zsh. (On Debian, install this with `apt install zsh`.)



<!-------------------------------------------------------------------->
[bash-un]: https://github.com/bminor/bash.git
