#!/bin/sh

gcc ../../ch05_list/single_list/list.c ../set/set.c cover.c main.c
./a.out
rm a.out
