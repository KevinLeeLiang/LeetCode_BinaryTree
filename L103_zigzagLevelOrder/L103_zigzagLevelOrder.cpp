//
// Created by garen_lee on 2025/2/24.
/**
  ******************************************************************************
  * @file           : L103_zigzagLevelOrder.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/24
  ******************************************************************************
  */
//

#include "L103_zigzagLevelOrder.h"

vector<vector<int>> L103_zigzagLevelOrder::zigzagLevelOrder(TreeNode *root) {
    if (root == nullptr)
        return {};
    vector<vector<int>> res;
    queue<TreeNode *> q;
    q.push(root);
    bool flag = false;
    while (!q.empty()) {
        int size = q.size();
        deque<int> temp;
        for (int i = 0; i < size; i++) {
            TreeNode *node = q.front();
            q.pop();
            if (flag) {
                temp.push_front(node->val);
            } else {
                temp.push_back(node->val);
            }
            if (node->left != nullptr)
                q.push(node->left);
            if (node->right != nullptr)
                q.push(node->right);
        }
        flag = !flag;
        res.push_back(vector<int>(temp.begin(), temp.end()));
    }
    return res;
}

void L103_zigzagLevelOrder::test() {
    vector<int>vals;
    vals = {3,9,20,-1,-1,15,7};
    TreeNode* root = create_treenode(vals, true);
    vector<vector<int>> res = zigzagLevelOrder(root);
    print_vector_vector(res);
    vals = {1};
    root = create_treenode(vals, true);
    res = zigzagLevelOrder(root);
    print_vector_vector(res);
    vals = {};
    root = create_treenode(vals, true);
    res = zigzagLevelOrder(root);
    print_vector_vector(res);
}