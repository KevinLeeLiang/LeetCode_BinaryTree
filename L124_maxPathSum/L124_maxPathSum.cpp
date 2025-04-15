//
// Created by garen_lee on 2025/4/15.
/**
  ******************************************************************************
  * @file           : L124_maxPathSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/15
  ******************************************************************************
  */
//

#include "L124_maxPathSum.h"

int L124_maxPathSum::maxGain(TreeNode* root) {
    if (!root)
        return 0;
    int left_gain = max(maxGain(root->left), 0);
    int right_gain = max(maxGain(root->right), 0);
    int price_newpath = root->val + left_gain + right_gain;
    max_sum_ = max(max_sum_, price_newpath);
    return root->val + max(left_gain, right_gain);
}

int L124_maxPathSum::maxPathSum(TreeNode* root) {
    max_sum_ = 0;
    maxGain(root);
    return max_sum_;
}

void L124_maxPathSum::test() {
    vector<int> v = {1, 2, 3};
    TreeNode* root = create_treenode(v, true);
    cout << maxPathSum(root) << endl;
    v = {-10, 9, 20, -1, -1, 15, 7};
    root = create_treenode(v, true);
    cout << maxPathSum(root) << endl;
}