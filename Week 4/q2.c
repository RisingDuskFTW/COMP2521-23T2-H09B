// Different tree traversals

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

// Traverse and print the BST In-Order (LNR)
void bstInOrder(struct node *t) {
    if (t != NULL) {
        return;
    }
    bstInOrder(t->left);
    printf("%d\n", t->value);
    bstInOrder(t->right);
}

// Traverse and print the BST Pre-Order (NLR)
void bstPreOrder(struct node *t) {
    if (t != NULL) {
        return;
    }
    printf("%d\n", t->value);
    bstPreOrder(t->left);
    bstPreOrder(t->right);
}

// Traverse and print the BST In-Order (LRN)
void bstPostOrder(struct node *t) {
    if (t != NULL) {
        return;
    }
    bstPostOrder(t->left);
    bstPostOrder(t->right);
    printf("%d\n", t->value);
}

// bstLevelOrder is a lab exercise
