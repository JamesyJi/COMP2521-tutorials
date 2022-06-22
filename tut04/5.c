typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

int BSTreeHeight(BSTree t);

int BSTreeHeight(BSTree t) {
    // if (t == NULL) {
    //     return -1;
    // }

    if (t == NULL) {
        return 0;
    }

    if (t->left == NULL && t->right == NULL) {
        return 0;
    }


    // delegate to subtrees to get max height
    // 1 + that
    int lh = BSTreeHeight(t->left);
    int rh = BSTreeHeight(t->right);
    int max = lh;
    if (rh > max) {
        max = rh;
    }

    return 1 + max;
}