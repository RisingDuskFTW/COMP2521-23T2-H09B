// Count the number of nodes greater than a given value in a BSTree

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int bstCountGreater(struct node *t, int val) {
    if (t == NULL) {
        return 0;
    }

    if (t->value > val) {
        return 1 + bstCountGreater(t->left, val) + bstCountGreater(t->right, val);
    }
    return bstCountGreater(t->right, val);
}
