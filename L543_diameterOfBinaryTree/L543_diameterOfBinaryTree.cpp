//
// Created by garen_lee on 2025/7/8.
/**
  ******************************************************************************
  * @file           : L543_diameterOfBinaryTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/8
  ******************************************************************************
  */
//

#include "L543_diameterOfBinaryTree.h"

int L543_diameterOfBinaryTree::depth(TreeNode *rt) {
    if (!rt) return 0;
    int L = depth(rt->left);
    int R = depth(rt->right);
    ans = max(ans, L + R + 1);
    return max(L, R) + 1;
}

int L543_diameterOfBinaryTree::diameterOfBinaryTree(TreeNode *root) {
    ans = 1;
    depth(root);
    return ans - 1;
}

void L543_diameterOfBinaryTree::test() {
    vector<int> vec = {1, 2, 3, 4, 5};
    TreeNode* root = create_treenode(vec, true);
    cout << diameterOfBinaryTree(root) << endl;
    vec = {1, 2};
    root = create_treenode(vec, true);
    cout << diameterOfBinaryTree(root) << endl;
}