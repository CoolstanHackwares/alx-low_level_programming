#!/bin/bash
gcc -c *.c
gcc -shared -fPIC -o liball.so *.o
