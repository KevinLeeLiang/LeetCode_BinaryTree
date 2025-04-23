//
// Created by garen_lee on 2025/4/22.
/**
  ******************************************************************************
  * @file           : L145_postorderTraversal.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/22
  ******************************************************************************
  */
//

#include "L145_postorderTraversal.h"

void L145_postorderTraversal::dfs(TreeNode* root, vector<int>& res) {
    if (!root) return;
    dfs(root->left, res);
    dfs(root->right, res);
    res.push_back(root->val);
}

vector<int> L145_postorderTraversal::postorderTraversal(TreeNode* root) {
    if (!root) return {};
    vector<int> res;
    dfs(root, res);
    return res;
}

void L145_postorderTraversal::test() {
    vector<int>nums = {1, -1, 2, 3};
    TreeNode* root = create_treenode(nums, true);
    vector<int> res =  postorderTraversal(root);
    print_vector(res);
    nums = {1,2,3,4,5,-1,8,-1,-1,6,7,9};
    root = create_treenode(nums, true);
    res =  postorderTraversal(root);
    print_vector(res);
    nums = {};
    root = create_treenode(nums, true);
    res =  postorderTraversal(root);
    print_vector(res);
    nums = {1};
    root = create_treenode(nums, true);
    res =  postorderTraversal(root);
    print_vector(res);
}