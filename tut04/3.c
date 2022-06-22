typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

int BSTreeNumNodes(BSTree t);


int BSTreeNumNodes(BSTree t) {
	if (t == NULL) {
		return 0;
	}

	return 1 + BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right);
}
