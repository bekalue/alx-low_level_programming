#!/bin/bash
gcc -c -fPIC -Werror -Wall -Wextra -pedantic -std=gnu89 *.c
gcc -shared *.o -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
