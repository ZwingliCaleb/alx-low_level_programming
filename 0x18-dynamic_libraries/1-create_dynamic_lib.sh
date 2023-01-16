#!/bin/bash
gcc -fPIC -g -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -W1,-soname,liball.so -o liball.so *.o -lc
