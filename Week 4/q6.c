// Count the number of internal (non-leaf) nodes in a BSTree

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int bstCountInternal(struct node *t) {
    if (t == NULL) {
        return 0;
    }

    // Is a leaf node
    if ((t->left == NULL) && (t->right == NULL)) {
        return 0;
    }

    // Not a leaf node
    return 1 + bstCountInternal(t->left) + bstCountInternal(t->right);
}
