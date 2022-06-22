typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

int BSTreeCountOdds(BSTree t);

int BSTreeCountOdds(BSTree t) {
	if (t == NULL) {
		return 0;
	}
	
	int isThisNodeOdd = 0;
	if (t->value % 2 == 1) {
		isThisNodeOdd = 1;
	}

	return isThisNodeOdd
	+ BSTreeCountOdds(t->left)
	+ BSTreeCountOdds(t->right);
}