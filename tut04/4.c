typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

int BSTreeCountOdds(BSTree t);

int BSTreeCountOdds(BSTree t) {
	// Null node is not odd...
	if (t == NULL) {
		return 0;
	}

	// Should we count this node?
	int isThisNodeOdd = 0;
	if (t->value % 2 == 1) {
		isThisNodeOdd = 1;
	}

	// How many odd nodes are in the left and right subtree?
	return isThisNodeOdd
	+ BSTreeCountOdds(t->left)
	+ BSTreeCountOdds(t->right);
}