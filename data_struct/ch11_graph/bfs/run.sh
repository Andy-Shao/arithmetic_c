#!/bin/sh

gcc ../../ch05_list/single_list/list.c ../../ch07_collection/set/set.c ../graph/graph.c ../../ch06_stack_queue/queue/queue.c bfs.c main.c
./a.out
rm a.out
