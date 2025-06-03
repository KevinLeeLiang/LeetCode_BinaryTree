//
// Created by garen_lee on 2025/6/3.
/**
  ******************************************************************************
  * @file           : L337_rob.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/3
  ******************************************************************************
  */
//

#include "L337_rob.h"

void L337_rob::dfs(TreeNode* node) {
    if (!node) {
        return ;
    }
    dfs(node->left);
    dfs(node->right);
    f[node] = node->val + g[node->left] + g[node->right];
    g[node] = max(f[node->left], g[node->left]) + max(f[node->right], g[node->right]);
}

int L337_rob::rob(TreeNode *root) {
    dfs(root);
    return max(f[root], g[root]);
}

void L337_rob::test() {
    vector<int> nums = {3, 2, 3, -1, 3, -1, 1};
    TreeNode *root = create_treenode(nums, true);
    cout << rob(root) << endl;
    nums = {3, 4, 5, 1, 3, -1, 1};
    root = create_treenode(nums, true);
    cout << rob(root) << endl;
}