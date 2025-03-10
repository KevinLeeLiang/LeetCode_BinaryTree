//
// Created by garen-lee on 2025/3/10.
/**
  ******************************************************************************
  * @file           : L107_levelOrderBottom.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/10
  ******************************************************************************
  */
//

#include "L107_levelOrderBottom.h"

vector<vector<int>> L107_levelOrderBottom::levelOrderBottom(TreeNode *root) {
    if (root == nullptr) {
        return {};
    }
    vector<vector<int>> res;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++) {
            TreeNode *node = q.front();
            q.pop();
            level.push_back(node->val);
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        res.push_back(level);
    }
    reverse(res.begin(), res.end());
    return res;
}

void L107_levelOrderBottom::test() {
    vector<int> nums = {3, 9, 20, -1, -1, 15, 7};
    TreeNode* root = create_treenode(nums, true);
    vector<vector<int>> res = levelOrderBottom(root);
    print_vector_vector(res);
    nums = {1};
    root = create_treenode(nums, true);
    res = levelOrderBottom(root);
    print_vector_vector(res);
    nums = {};
    root = create_treenode(nums, true);
    res = levelOrderBottom(root);
    print_vector_vector(res);
}