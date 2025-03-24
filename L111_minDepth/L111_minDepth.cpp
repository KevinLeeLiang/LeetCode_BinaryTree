//
// Created by garen_lee on 2025/3/24.
/**
  ******************************************************************************
  * @file           : L111_minDepth.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/24
  ******************************************************************************
  */
//

#include "L111_minDepth.h"

int L111_minDepth::minDepth(TreeNode *root, int depth) {
    if (root == nullptr) {
        return depth;
    }
    if (root->left == nullptr && root->right == nullptr) {
        return depth + 1;
    } else if (root->left == nullptr) {
        return minDepth(root->right, depth + 1);
    } else if (root->right == nullptr) {
        return minDepth(root->left, depth + 1);
    } else {
        return min(minDepth(root->left, depth + 1), minDepth(root->right, depth + 1));
    }
}

int L111_minDepth::minDepth(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }
    return minDepth(root, 0);
}

void L111_minDepth::test() {
    vector<int> nums = {3, 9, 20, -1, -1, 15, 7};
    TreeNode *root = create_treenode(nums, true);
    cout << minDepth(root) << endl;
    nums = {2, -1, 3, -1, 4, -1, 5, -1, 6};
    root = create_treenode(nums, true);
    cout << minDepth(root) << endl;
}