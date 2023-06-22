// Find the height of a BST, given the root node

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int max(int x, int y);

int bstHeight(struct node *t) {
    if (t == NULL) {
        return 0;
    }

    int leftHeight = bstHeight(t->left);
    int rightHeight = bstHeight(t->right);

    return 1 + max(leftHeight, rightHeight);
}

// Find the maximum of two numbers
int max(int x, int y) {
    // Using if condition
    if (x > y) {
        return x;
    } else {
        return y;
    }

    // Using ternary operator
    return (x > y) ? x : y;
}
