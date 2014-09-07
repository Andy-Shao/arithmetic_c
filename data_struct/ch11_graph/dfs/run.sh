#!/bin/sh

gcc ../../ch05_list/single_list/list.c ../../ch07_collection/set/set.c ../graph/graph.c dfs.c main.c
./a.out
rm a.out
