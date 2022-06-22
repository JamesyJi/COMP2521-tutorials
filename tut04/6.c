int BSTreeCountInternal(BSTree t) {
	if (t == NULL) {
		return 0;
	} else if (t->left == NULL && t->right == NULL) {
		// NOT AN INTERNAL NODE!!!
        return 0;
	} else {
        // JUST DELEGATE TO THE SUBTREES
        // LITERALLY EVERY BST FUNCTION YOU ARE JUST DELEGATING TO THE SUBTREES
		int l = BSTreeCountInternal(t->left);
		int r = BSTreeCountInternal(t->right);
		return 1 + l + r;
	}
}