#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic
ar -rc liball.a *.o
ranlib liball.a
