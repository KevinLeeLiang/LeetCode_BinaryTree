//
// Created by garen_lee on 2025/2/17.
/**
  ******************************************************************************
  * @file           : L102_levelOrder.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/17
  ******************************************************************************
  */
//

#include "L102_levelOrder.h"

vector<vector<int>> L102_levelOrder::levelOrder(TreeNode* root) {
    if (!root)
        return {};
    vector<vector<int>> res;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            level.push_back(node->val);
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        res.push_back(level);
    }
    return res;
}

void L102_levelOrder::test() {
    vector<int> nums = {3,9,20,-1,-1,15,7};
    vector<vector<int>>res;
    TreeNode* root = create_treenode(nums, true);
    res = levelOrder(root);
    print_vector_vector(res);
    nums = {1};
    root = create_treenode(nums, true);
    res = levelOrder(root);
    print_vector_vector(res);
    nums = {};
    root = create_treenode(nums, true);
    res = levelOrder(root);
}