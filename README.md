# Simple_Shell

## Table of contents
- Description
- File Structure
- Requirements
- Installation
- Usage
- Example of use
- Bugs
- Authors
- License

## Description
simple_shell is a command line interpreter, 
or shell, in the tradition of the first Unix shell written by Ken Thompson in 1971. This shell is intentionally minimalistic, yet includes the basic functionality of a traditional Unix-like command line user interface. Standard functions and system calls employed in simple_shell include: access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.
## Requirements
simple_shell is designed to run in the Ubuntu 14.04 LTS linux environment and to be compiled using the GNU compiler collection v. gcc 4.8.4 with flags-Wall, -Werror, -Wextra, and -pedantic.

## Usage
The simple_shell is designed to execute commands in a similar manner to sh, however with more limited functionality. The development of this shell is ongoing. The below features will be checked as they become available (see man page for complete information on usage):
### Features
- [X] uses the PATH
- [X] implements builtins
- [X] handles command line arguments
- [X] custom strtok function
- [X] uses exit status
- [X] shell continues upon Ctrl+C(^C)
- [X] handdles comments(#)
- [X] handles;
- [X] custom getline type fuction
- [X] handles && and ||
- [X] aliases
- [X] variable replacement
