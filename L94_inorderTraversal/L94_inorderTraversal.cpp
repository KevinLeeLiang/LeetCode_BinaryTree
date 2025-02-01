//
// Created by garen-lee on 2025/2/1.
/**
  ******************************************************************************
  * @file           : L94_inorderTraversal.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/1
  ******************************************************************************
  */
//

#include "L94_inorderTraversal.h"

void dfs(TreeNode *root, vector<int> &ans) {
    if (!root)
        return;
    dfs(root->left, ans);
    ans.push_back(root->val);
    dfs(root->right, ans);
}
vector<int> L94_inorderTraversal::inorderTraversal(TreeNode *root) {
    if (!root) return {};
    vector<int> ans;
    dfs(root, ans);
    return ans;
}

void L94_inorderTraversal::test() {
    vector<int>vals, ans;
    TreeNode* root;
    vals = {1, -1, 2, 3};
    root = create_treenode(vals, true);
    ans = inorderTraversal(root);
    print_vector(ans);
    vals = {};
    root = create_treenode(vals, true);
    ans = inorderTraversal(root);
    print_vector(ans);
    vals = {1};
    root = create_treenode(vals, true);
    ans = inorderTraversal(root);
    print_vector(ans);
}