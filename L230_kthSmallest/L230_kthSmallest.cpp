//
// Created by garen_lee on 2025/5/13.
/**
  ******************************************************************************
  * @file           : L230_kthSmallest.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/13
  ******************************************************************************
  */
//

#include "L230_kthSmallest.h"

int L230_kthSmallest::kthSmallest(TreeNode* root, int k) {
    if (!root) return -1;
    stack<TreeNode*> stk;
    TreeNode* current = root;

    while (current || !stk.empty()) {
        while (current) {
            stk.push(current);
            current = current->left;
        }
        current = stk.top();
        stk.pop();
        if (--k == 0) return current->val;
        current = current->right;
    }
    return -1;
}

void L230_kthSmallest::test() {
    vector<int> nums = {3,1,4,-1,2};
    TreeNode* root = create_treenode(nums, true);
    int k = 1;
    cout << kthSmallest(root, k) << endl;
    nums = {5,3,6,2,4,-1,-1,1};
    k = 3;
    root = create_treenode(nums, true);
    cout << kthSmallest(root, k) << endl;
}