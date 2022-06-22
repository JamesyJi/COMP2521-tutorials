typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

int BSTreeNumNodes(BSTree t);

// Count number of nodes in the tree
int BSTreeNumNodes(BSTree t) {
	if (t == NULL) {
		return 0;
	}

	// this is one node
	// count number of nodes in left and right subtrees too!
	return 1 + BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right);
}
