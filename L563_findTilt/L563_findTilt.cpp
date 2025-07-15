//
// Created by garen_lee on 2025/7/15.
/**
  ******************************************************************************
  * @file           : L563_findTilt.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/15
  ******************************************************************************
  */
//

#include "L563_findTilt.h"

int L563_findTilt::dfs(TreeNode* root, int& ans) {
    if (!root) return 0;
    int left = dfs(root->left, ans);
    int right = dfs(root->right, ans);
    ans += abs(left - right);
    return left + right + root->val;
}

int L563_findTilt::findTilt(TreeNode* root) {
    int ans = 0;
    dfs(root, ans);
    return ans;
}

void L563_findTilt::test() {
    vector<int> vec = {1,2,3};
    TreeNode* root = create_treenode(vec, true);
    cout << findTilt(root) << endl;
    vec = {4,2,9,3,5,-1,7};
    root = create_treenode(vec, true);
    cout << findTilt(root) << endl;
    vec = {21,7,14,1,1,2,2,3,3};
    root = create_treenode(vec, true);
    cout << findTilt(root) << endl;
}