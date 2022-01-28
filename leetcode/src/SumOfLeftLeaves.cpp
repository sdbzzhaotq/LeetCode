#include "Solution.h"

bool Solution_Sum_Left_Leaves::isLeaf(TreeNode* node) {
	return (!node->left) && (!node->right);
}

int Solution_Sum_Left_Leaves::DeepFirstSearch(TreeNode* node) {
	return 0;
}

int Solution_Sum_Left_Leaves::sumOfLeftLeaves_Recusion(TreeNode* root) {
	if (!root) { return 0; }

	int sum = 0;
	if (root->left != nullptr) {
		if (root->left->left == nullptr && root->left->right == nullptr) {
			sum = root->left->val;
		}
	}
	return sum + sumOfLeftLeaves_Recusion(root->left) + sumOfLeftLeaves_Recusion(root->right);
}
