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

- XXX `sed` notes
  According to the [Apple OSS releases][aossrel] page, MacOS 10.12 (2016,
  "Sierra") uses the `text_cmds-97` version of
  [apple-oss-distributions/text_cmds][text_cmds].

Zsh is not included in this repo because most systems already have a
current version of Zsh. (On Debian, install this with `apt install zsh`.)

### Installation

Building with `./Test` will install the programs into `bin/` in this
repo. You have several options for using them:

1. In the project using these, add this proejct's `…/bin` directory to the
   path used by your test code.

2. For "global" access for your user, in `~/.local/bin/`, symlink the
   program names to the programs in this project's `bin/` directory, or
   simply copy `bin/*` to `~/.local/bin/`.

3. For "global" access on the whole system, copy `bin/*` to
   `/usr/local/bin/` (or similar), and ensure that the permissions are set
   so that the files are world-readable and -executable.

Notes
-----

### Bash 3

The committed `y.tab.*` are buggy, so we `touch parse.y` to force them
to be regnerated. That causes `git status` constantly to indicate that
the files (or subodule) are changed, which is annoying so we mark them
with `git update-index --assume-unchanged` to suppress this. Keep this
in mind if you're forking of your own private version of Bash 3.



<!-------------------------------------------------------------------->
[aossrel]: https://opensource.apple.com/releases/
[bash-un]: https://github.com/bminor/bash.git
[text_cmds]: https://github.com/apple-oss-distributions/text_cmds/tree/text_cmds-97
