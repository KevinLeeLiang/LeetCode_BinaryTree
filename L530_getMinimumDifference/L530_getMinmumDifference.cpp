//
// Created by garen_lee on 2025/7/1.
/**
  ******************************************************************************
  * @file           : L530_getMinmumDifference.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/1
  ******************************************************************************
  */
//

#include "L530_getMinmumDifference.h"

void L530_getMinmumDifference::dfs(TreeNode* root, int &res, int pre) {
    if (!root) return ;
    dfs(root->left, res, pre);
    if (pre == -1) {
        pre = root->val;
    } else {
        res = min(root->val - pre, res);
        pre = root->val;
    }
    dfs(root->right, res, pre);
}

int L530_getMinmumDifference::getMinimumDifference(TreeNode* root) {
    int res = INT_MAX;
    int pre = -1;
    dfs(root, res, pre);
    return res;
}

void L530_getMinmumDifference::test() {
    vector<int> nums = {4,2,6,1,3};
    TreeNode* root = create_treenode(nums, true);
    cout << getMinimumDifference(root) << endl;
    nums = {1,0,48,-1,-1,12,49};
    root = create_treenode(nums, true);
    cout << getMinimumDifference(root) << endl;
}