#!/bin/bash
gcc -Wall -Wexta -Werror -pedantic -std=gnu89 -fPIC -c *.c -shared -o liball.so
