//
// Created by garen_lee on 2025/8/5.
/**
  ******************************************************************************
  * @file           : L606_tree2str.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/5
  ******************************************************************************
  */
//

#include "L606_tree2str.h"

string L606_tree2str::tree2str(TreeNode* root) {
    if (root == nullptr) {
        return "";
    }
    if (root->left == nullptr && root->right == nullptr) {
        return to_string(root->val);
    }
    if (root->right == nullptr) {
        return to_string(root->val) + "(" + tree2str(root->left) + ")";
    }
    return to_string(root->val) + "(" + tree2str(root->left) + ")" + "(" + tree2str(root->right) + ")";
}

void L606_tree2str::test() {
    vector<int> vec = {1, 2, 3, 4};
    TreeNode* root = create_treenode(vec, true);
    cout << tree2str(root) << endl;
    vec = {1, 2, 3, -1, 4};
    root = create_treenode(vec, true);
    cout << tree2str(root) << endl;
}