#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 0-isupper.c 1-isdigit.c 2-strchr.c 3-islower.c 4-isalpha.c 5-strstr.c 6-abs.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

