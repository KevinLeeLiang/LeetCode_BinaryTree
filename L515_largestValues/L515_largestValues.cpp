//
// Created by garen_lee on 2025/7/1.
/**
  ******************************************************************************
  * @file           : L515_largestValues.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/1
  ******************************************************************************
  */
//

#include "L515_largestValues.h"

vector<int> L515_largestValues::largestValues(TreeNode* root) {
    vector<int> res;
    if (!root) return res;
    queue<TreeNode*>q;
    q.push(root);
    while (!q.empty()) {
        int max = INT_MIN;
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            auto node = q.front();
            q.pop();
            if (node->val > max) {
                max = node->val;
            }
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        res.push_back(max);
    }
    return res;
}

void L515_largestValues::test() {
    vector<int> nums = {1, 3, 2, 5, 3, -1, 9};
    TreeNode* root = create_treenode(nums, true);
    vector<int> res = largestValues(root);
    print_vector(res);
    nums = {1, 2, 3};
    root = create_treenode(nums, true);
    res = largestValues(root);
    print_vector(res);
}