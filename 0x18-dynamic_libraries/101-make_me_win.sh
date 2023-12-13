#!/bin/bash


wget -O /tmp/liball.so https://github.com/Edmund15/alx-low_level_programming/raw/master/0x18-dynamic_libraries/liball.so

echo -e '#include <stdlib.h>\n#include <stdio.h>\n\nint rand(void) { return 6; }\n' > /tmp/rand_override.c
gcc -shared -o /tmp/rand_override.so /tmp/rand_override.c

LD_PRELOAD=/tmp/liball.so:/tmp/rand_override.so ./gm 9 8 10 24 75 9


