#!/bin/bash
gcc -c -fPIC -Wall -Wextra -Werror -pedantic -std=gnu89 *.c
gcc -shared *.o -o liball.so
