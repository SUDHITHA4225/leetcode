class Solution {
public:
    long long dfs(TreeNode* node, long long currentNumber) {
        if (!node) return 0; 
        currentNumber = currentNumber * 10 + node->val;
        if (!node->left && !node->right) {
            return currentNumber;
        }
        return dfs(node->left, currentNumber) + dfs(node->right, currentNumber);
    }
    int sumNumbers(TreeNode* root) {
        long long result = dfs(root, 0); 
        if (result > INT_MAX) {
            return INT_MAX;
        }
        return (int) result; 
    }
};