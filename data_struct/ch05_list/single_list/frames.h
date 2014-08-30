#ifndef FRAMES_H
#define FRAMES_H

#include <stdlib.h>
#include "list.h"

int alloc_frame(List *frames);
int free_frame(List *frames, int frame_number);

#endif
