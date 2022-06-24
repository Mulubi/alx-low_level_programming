#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc liblib.a *.o
ranlib lilblib.a
