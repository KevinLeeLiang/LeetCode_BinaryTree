//
// Created by garen_lee on 2025/3/31.
/**
  ******************************************************************************
  * @file           : L114_flatten.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/31
  ******************************************************************************
  */
//

#include "L114_flatten.h"

void L114_flatten::flatten(TreeNode* root) {
    if (!root) {
        return;
    }
    flatten(root->left);
    flatten(root->right);
    TreeNode* temp = root->right;
    root->right = root->left;
    root->left = nullptr;
    while (root->right) {
        root = root->right;
    }
    root->right = temp;
}

void L114_flatten::test() {
    vector<int> nums = {1, 2, 3, 4, -1, 6};
    TreeNode* root = create_treenode(nums, true);
    flatten(root);
    cout << print_tree(root) << endl;
}