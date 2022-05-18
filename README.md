# Simple Shell Project
This is a simple UNIX command interperter based on bash an sh, done as a group by Adam Keino and Jesica Ogindo

# Overview
This repository holds all the code necessary for our custom simple shell to run. Our shell currently handles the executions of executables found in the environmental variable PATH, with or without their full paths. Sample commands that our shell supports include ls (/bin/ls), pwd, echo, which, whereis, etc.
# Environment
- Launguage: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc
- Style guidelines: Betty style

# Files

_realloc.c ------------------------- helper function handles reallocation

strcat.c -------------------------- concatenates two strings

_strcmp.c -------------------------- compares if two strings match_strcpy.c -------------------------- copies a string

_strdup.c -------------------------- duplicates a string

_str_tok.c -------------------------- (custom) tokenizes user's command input and returns array

c_str_tok.c ------------------------- tokenizes PATH to include ":" as Null, checks current dir

get_line.c ------------------------- (custom) reads user's typed input into buffer

_which.c --------------------------- appends command to PATHs, fleshes paths out, returns match

_cd.c ------------------------------ changes directories

linked_lists.c --------------------- adds and deletes nodes; prints and frees linked list

get_env.c -------------------------- finds and returns copy of environmental variable

env_linked_list.c ------------------ prints and creates linked list of envrionmental variables

set_unset_env.c -------------------- finds environment variable index node, sets and unsets

free_double_ptr -------------------- frees double pointers (user's command, arrays)

_execve.c -------------------------- executes and frees command, then exits program

_exit.c --------------------------- handles if user types exit or exit(value)

*int_to_string.c -------------------- converts int to string to write error messages

*print_error.c ---------------------- prints special error messages for certain fails

*prompt.c --------------------------- handles outline of shell's reprompting and executing

*non_interactive.c ------------------ handles output when shell is called outside of shell


# More infomation


## Builtins

- ***exit** - exits shell (Usage: exit [status])
- ***env** - prints environmental variables (Usage: env)
- ***setenv** - creates or modifies an environmental variable (Usage: setenv name value)
- ***unsetenv** - removes an envrionmental variable (Usage: unsetenv name value)
- ***cd** - changes directories (Usage: cd [-][~][path])

## Functions and system calls used
> read, signal, malloc, free, getcwd, chdir, access, execve, wait, write, exit

## Description of what each file shows:

*man_3_shell ------------------------ custom manpage for our simple shell

*main.c ----------------------------- holds entrance into program

*shell.h ---------------------------- holds prototypes of functions spread across all files

# Authors & Copyrights
- Jesica Ogindo \<jesica-akeyo\>
- Adam Keino \<adamkeino\>


