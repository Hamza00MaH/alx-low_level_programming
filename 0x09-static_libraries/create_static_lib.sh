#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c|ar liball.a *.o
