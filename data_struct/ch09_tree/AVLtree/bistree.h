#ifndef BISTREE_H
#define BISTREE_H

#include "../bitree/bitree.h"

//Define balance factors for AVL tree.
#define		AVL_LFT_HEAVY	1
#define		AVL_BALANCED	0
#define		AVL_RGT_HEAVY	-1

//Define a structure for nodes in AVL trees.
typedef struct AvlNode_{
	void *data;
	int hidden;
	int factor;
}AvlNode;

//Implement binarry search tree as binary trees.
typedef BiTree BisTree;

//Public Interface
void bistree_init(BisTree *tree, int (*compare)(const void *key, const void *key2), void (*destroy)(void *data));
void bistree_destroy(BisTree *tree);
int bistree_insert(BisTree *tree, const void *data);
int bistree_remove(BisTree *tree, void *data);
#define bistree_size(tree) ((tree)->size)

#endif
