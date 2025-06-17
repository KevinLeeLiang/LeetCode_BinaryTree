//
// Created by garen_lee on 2025/6/17.
/**
  ******************************************************************************
  * @file           : L501_findMode.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/17
  ******************************************************************************
  */
//

#include "L501_findMode.h"

void L501_findMode::update(int x) {
    if (x == base) {
        ++cnt;
    } else {
        cnt = 1;
        base = x;
    }
    if (cnt == maxCnt) {
        ans.push_back(x);
    }
    if (cnt > maxCnt) {
        maxCnt = cnt;
        ans = vector<int> {base};
    }
}

void L501_findMode::dfs(TreeNode* root) {
    if (!root) return;
    dfs(root->left);
    update(root->val);
    dfs(root->right);
}

vector<int> L501_findMode::findMode(TreeNode* root) {
    base = 0;
    cnt = 0;
    maxCnt = 0;
    dfs(root);
    return ans;
}

void L501_findMode::test() {
    vector<int> vals = {1, -1, 2, 2};
    TreeNode *root = create_treenode(vals, true);
    vector<int> res = findMode(root);
    print_vector(res);
    vals = {0};
    root = create_treenode(vals, true);
    res = findMode(root);
    print_vector(res);
}
