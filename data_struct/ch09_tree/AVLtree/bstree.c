#include <stdlib.h>
#include <string.h>
#include "bistree.h"

static void destroy_right(BisTree *tree, BiTreeNode *node);

static void rotate_left(BiTreeNode **node){
	BiTreeNode *left, *grandchild;

	left = bitree_left(*node);
	if(((AvlNode *)bitree_data(left))->factor == AVL_LFT_HEAVY){
		//Perform an LL rotation.
		bitree_left(*node) = bitree_right(left);
		bitree_right(left) = *(node);
		((AvlNode *)bitree_data(*node))->factor = AVL_BALANCED;
		((AvlNode *)bitree_data(left))->factor = AVL_BALANCED;
		*node = left;
	} else {
		//Perform an LR rotation.
		grandchild = bitree_right(left);
		bitree_right(left) = bitree_left(grandchild);
		bitree_left(grandchild) = left;
		bitree_left(*node) = bitree_right(grandchild);
		bitree_right(grandchild) = *node;

		switch(((AvlNode *)bitree_data(grandchild))->factor){
		case AVL_LFT_HEAVY:
			((AvlNode *)bitree_data(*node))->factor = AVL_RGT_HEAVY;
			((AvlNode *)bitree_data(left))->factor = AVL_BALANCED;
			break;
		case AVL_BALANCED:
			((AvlNode *)bitree_data(*node))->factor = AVL_BALANCED;
			((AvlNode *)bitree_data(left))->factor = AVL_BALANCED;
			break;
		case AVL_RGT_HEAVY:
			((AvlNode *)bitree_data(*node))->factor = AVL_BALANCED;
			((AvlNode *)bitree_data(left))->factor = AVL_LFT_HEAVY;
			break;
		}

		((AvlNode *)bitree_data(grandchild))->factor = AVL_BALANCED;
		*node = grandchild;
	}
	return;
}

void bistree_init(BisTree *tree, int (*compare)(const void *key, const void *key2), void (*destroy)(void *data)){
	return;
}
void bistree_destroy(BisTree *tree){
	return;
}
int bistree_insert(BisTree *tree, const void *data){
	return 0;
}
int bistree_remove(BisTree *tree, void *data){
	return 0;
}
static void destroy_right(BisTree *tree, BiTreeNode *node){
	return;
}
