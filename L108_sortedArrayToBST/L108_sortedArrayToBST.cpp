//
// Created by garen-lee on 2025/3/10.
/**
  ******************************************************************************
  * @file           : L108_sortedArrayToBST.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/10
  ******************************************************************************
  */
//

#include "L108_sortedArrayToBST.h"

TreeNode* L108_sortedArrayToBST::sortedArrayToBST(vector<int>& nums, int left, int right) {
    if (left > right) {
        return nullptr;
    }
    int mid = left + (right - left) / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = sortedArrayToBST(nums, left, mid - 1);
    root->right = sortedArrayToBST(nums, mid + 1, right);
    return root;
}

TreeNode* L108_sortedArrayToBST::sortedArrayToBST(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) {
        return nullptr;
    }
    return sortedArrayToBST(nums, 0, n - 1);
}

void L108_sortedArrayToBST::test() {
    vector<int> nums = {-10,-3,0,5,9};
    TreeNode* res = sortedArrayToBST(nums);
    cout << print_tree(res) << endl;
    nums = {1,3};
    res = sortedArrayToBST(nums);
    cout << print_tree(res) << endl;
}