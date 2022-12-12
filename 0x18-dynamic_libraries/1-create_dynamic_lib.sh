#!/bin/bash
gcc -Wall -Wexta -Werror -pedantic -std=gnu89 -fPIC -c *.c
gcc -shared -o liball.so *.o
