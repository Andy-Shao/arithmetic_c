#ifndef SET_H
#define SET_H

#include <stdio.h>
#include "../../ch05_list/single_list/list.h"

//Implement sets as linked lists.
typedef List Set;

//Public interface
void set_int(Set *set, int (*match)(const void *key1, const void *key2), void (*destroy)(void *data));
#define set_destroy list_destroy
int set_insert(Set *set, const void *data);
int set_remove(Set *set, void **data);
int set_union(Set *set, const Set *set1, const Set *set2);
int set_intersection(Set *seti, const Set *set1, const Set *set2);
int set_difference(Set *setd, const Set *set1, const Set *set2);
int set_is_member(const Set *set, const void *data);
int set_is_subset(const Set *set1, const Set *set2);
int set_is_equal(const Set *set1, const Set *set2);
#define set_size(set) ((set)->size)

#endif
