//
// Created by garen_lee on 2025/6/24.
/**
  ******************************************************************************
  * @file           : L513_findBottomLeftValue.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/24
  ******************************************************************************
  */
//

#include "L513_findBottomLeftValue.h"

int L513_findBottomLeftValue::findBottomLeftValue(TreeNode* root) {
    if (!root)
        return 0;
    queue<TreeNode*>q;
    q.push(root);
    int ans = root->val;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            auto t = q.front();
            q.pop();
            if (i == 0) {
                ans = t->val;
            }
            if (t->left) q.push(t->left);
            if (t->right) q.push(t->right);
        }
    }
    return ans;
}

void L513_findBottomLeftValue::test() {
    vector<int> nums = {2,1,3};
    TreeNode* root = create_treenode(nums, true);
    cout << findBottomLeftValue(root) << endl;
    nums = {1,2,3,4,-1,5,6,-1,-1,7};
    root = create_treenode(nums, true);
    cout << findBottomLeftValue(root) << endl;
}