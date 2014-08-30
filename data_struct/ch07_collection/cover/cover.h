#ifndef COVER_H
#define COVER_H

#include "../set/set.h"

//Define a structure for subsets identified by a key.
typedef struct KSet_{
    void *key;
    Set set;
}KSet;

//public interface
int cover(Set *members, Set *subsets, Set *covering);

#endif
