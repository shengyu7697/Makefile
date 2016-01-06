#!/bin/bash

if [ ! -f Makefile ]; then
    cp ../Makefile ./
fi
make && ./a.out
