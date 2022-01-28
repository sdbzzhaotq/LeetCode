#include "Solution.h"

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

int Solution_Sum_Left_Leaves::sumOfLeftLeaves_Stack(TreeNode* root) {
	if (!root) { return 0; }

	std::stack<TreeNode*> st;
	st.push(root);

	int sum = 0;
	while (!st.empty()) {
		TreeNode* node = st.top();
		st.pop();
		if ((node->left != nullptr) && (node->left->left == nullptr) && (node->left->right == nullptr)) {
			sum = sum + node->left->val;
		}
		if (node->left) { st.push(node->left); }
		if (node->right) { st.push(node->right); }
	}
	return sum;
}

bool Solution_Sum_Left_Leaves::isLeaf(TreeNode* node) {
	return !node->left && !node->right;
}

int Solution_Sum_Left_Leaves::DeepFirstSearch(TreeNode* node) {
	int sum = 0;
	if (node->left) {
		sum += isLeaf(node->left) ? node->left->val : DeepFirstSearch(node->left);
	}
	if (node->right/* && !isLeaf(node->right)*/) {
		sum += DeepFirstSearch(node->right);
	}

	return sum;
}

int Solution_Sum_Left_Leaves::sumOfLeftLeaves_DFS(TreeNode* root) {
	return root ? DeepFirstSearch(root) : 0;
}

int Solution_Sum_Left_Leaves::sumOfLeftLeaves_BFS(TreeNode* root) {
	return 0;
}