//
// Created by garen_lee on 2025/3/17.
/**
  ******************************************************************************
  * @file           : L110_isBalanced.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/17
  ******************************************************************************
  */
//

#include "L110_isBalanced.h"

int L110_isBalanced::getDepth(TreeNode *root) {
    if (!root) {
        return 0;
    }
    return max(getDepth(root->left), getDepth(root->right)) + 1;
}

bool L110_isBalanced::isBalanced(TreeNode *root) {
    if (!root) {
        return true;
    }
    return abs(getDepth(root->left) - getDepth(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

void L110_isBalanced::test() {
    vector<int> vals = {3, 9, 20, -1, -1, 15, 7};
    TreeNode *root = create_treenode(vals, true);
    cout << isBalanced(root) << endl;
    vals = {1, 2, 2, 3, 3, -1, -1, 4, 4};
    root = create_treenode(vals, true);
    cout << isBalanced(root) << endl;
    vals = {};
    root = create_treenode(vals, true);
    cout << isBalanced(root) << endl;
}