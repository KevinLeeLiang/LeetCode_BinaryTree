//
// Created by garen_lee on 2025/7/8.
/**
  ******************************************************************************
  * @file           : L538_convertBST.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/8
  ******************************************************************************
  */
//

#include "L538_convertBST.h"

TreeNode *L538_convertBST::convertBST(TreeNode *root) {
    if (root) {
        convertBST(root->right);
        sum += root->val;
        root->val = sum;
        convertBST(root->left);
    }
    return root;
}

void L538_convertBST::test() {
    vector<int> nums = {4, 1, 6, 0, 2, 5, 7, -1, -1, -1, 3, -1, -1, 8};
    sum = 0;
    TreeNode *root = create_treenode(nums, true);
    TreeNode *ans = convertBST(root);
    cout << print_tree(ans) << endl;
    nums = {0, -1, 1};
    sum = 0;
    root = create_treenode(nums, true);
    ans = convertBST(root);
    cout << print_tree(ans) << endl;
    nums = {1, 0, 2};
    sum = 0;
    root = create_treenode(nums, true);
    ans = convertBST(root);
    cout << print_tree(ans) << endl;
    nums = {3, 2, 4, 1};
    sum = 0;
    root = create_treenode(nums, true);
    ans = convertBST(root);
    cout << print_tree(ans) << endl;
}