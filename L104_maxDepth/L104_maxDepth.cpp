//
// Created by garen_lee on 2025/2/24.
/**
  ******************************************************************************
  * @file           : L104_maxDepth.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/24
  ******************************************************************************
  */
//

#include "L104_maxDepth.h"

int L104_maxDepth::maxDepth(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    } else {
        int left_depth = maxDepth(root->left);
        int right_depth = maxDepth(root->right);
        return max(left_depth, right_depth) + 1;
    }
}

void L104_maxDepth::test() {
    vector<int>vals = {3, 9, 20, -1, -1, 15, 7};
    TreeNode* root = create_treenode(vals, true);
    cout << maxDepth(root) << endl;
    vals = {1, -1, 2};
    root = create_treenode(vals, true);
    cout << maxDepth(root) << endl;
}