//
// Created by garen_lee on 2025/4/15.
/**
  ******************************************************************************
  * @file           : L129_sumNumbers.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/15
  ******************************************************************************
  */
//

#include "L129_sumNumbers.h"

int L129_sumNumbers::dfs(TreeNode* root, int sum) {
    if (!root) {
        return 0;
    }
    sum = sum * 10 + root->val;
    if (!root->left && !root->right) {
        return sum;
    }
    return dfs(root->left, sum) + dfs(root->right, sum);
}

int L129_sumNumbers::sumNumbers(TreeNode* root) {
    return dfs(root, 0);
}

void L129_sumNumbers::test() {
    vector<int> nums = {1, 2, 3};
    TreeNode* root = create_treenode(nums, true);
    int result = sumNumbers(root);
    cout << "result: " << result << endl;
    nums = {4, 9, 0, 5, 1};
    root = create_treenode(nums, true);
    result = sumNumbers(root);
    cout << "result: " << result << endl;
}