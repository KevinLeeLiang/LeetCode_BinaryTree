//
// Created by garen_lee on 2025/3/24.
/**
  ******************************************************************************
  * @file           : L112_hasPathSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/24
  ******************************************************************************
  */
//

#include "L112_hasPathSum.h"

bool L112_hasPathSum::hasPathSum(TreeNode* root, int targetSum) {
    if (root == nullptr) {
        return false;
    }
    if (root->left == nullptr && root->right == nullptr) {
        return root->val == targetSum;
    }
    return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
}

void L112_hasPathSum::test() {
    vector<int>nums = {5,4,8,11,-1,13,4,7,2,-1,-1,-1,1};
    TreeNode* root = create_treenode(nums, true);
    cout << hasPathSum(root, 22) << endl;
    nums = {1,2,3};
    root = create_treenode(nums, true);
    cout << hasPathSum(root, 5) << endl;
    nums = {};
    root = create_treenode(nums, true);
    cout << hasPathSum(root, 0) << endl;
}