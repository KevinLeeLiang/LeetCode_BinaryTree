//
// Created by garen_lee on 2025/5/6.
/**
  ******************************************************************************
  * @file           : L226_invertTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/6
  ******************************************************************************
  */
//

#include "L226_invertTree.h"

TreeNode* L226_invertTree::invertTree(TreeNode* root) {
    if (!root)
        return root;
    TreeNode* left = invertTree(root->left);
    TreeNode* right = invertTree(root->right);
    root->left = right;
    root->right = left;
    return root;
}

void L226_invertTree::test() {
    vector<int> vec = {4, 2, 7, 1, 3, 6, 9};
    TreeNode* root = create_treenode(vec, true);
    TreeNode* res = invertTree(root);
    cout << print_tree(res) << endl;
    vec = {2, 1, 3};
    root = create_treenode(vec, true);
    res = invertTree(root);
    cout << print_tree(res) << endl;
}