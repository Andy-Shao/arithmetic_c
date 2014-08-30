#ifndef PAGE_H
#define PAGE_H

#include "clist.h"

typedef struct Page_{
    int number;
    int reference;
}Page;

//Public interface
int replace_page(CListElmt **current);

#endif
