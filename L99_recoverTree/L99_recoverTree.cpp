//
// Created by garen_lee on 2025/2/6.
/**
  ******************************************************************************
  * @file           : L99_recoverTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/6
  ******************************************************************************
  */
//

#include "L99_recoverTree.h"

void L99_recoverTree::inorder(TreeNode *root, vector<int> &nums) {
    if (root == nullptr){
        return;
    }
    inorder(root->left, nums);
    nums.push_back(root->val);
    inorder(root->right, nums);
}

pair<int, int> L99_recoverTree::findTwoSwapped(vector<int> &nums) {
    int n = nums.size();
    int index1 = -1, index2 = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (nums[i + 1] < nums[i]) {
            index2 = i + 1;
            if (index1 == -1) {
                index1 = i;
            } else {
                index2 = i + 1;
                break;
            }
        }
    }
    int num1 = nums[index1];
    int num2 = nums[index2];
    return make_pair(num1, num2);
}

void L99_recoverTree::recover(TreeNode *root, int nums, int val1, int val2) {
    if (root == nullptr)
        return;
    if (root->val == val1 || root->val == val2) {
        root->val = root->val == val1 ? val2 : val1;
        if (--nums == 0) return;
    }
    recover(root->left, nums, val1, val2);
    recover(root->right, nums, val1, val2);
}

void L99_recoverTree::recoverTree(TreeNode *root) {
    vector<int> nums;
    inorder(root, nums);
    pair<int, int> swapped = findTwoSwapped(nums);
    recover(root, 2, swapped.first, swapped.second);
}
void L99_recoverTree::test(){
    vector<int>nums = {1, 3, -1, -1, 2};
    TreeNode*root;
    root = create_treenode(nums,true);
    recoverTree(root);
    cout << print_tree(root) << endl;
    nums = {3,1,4,-1,-1,2};
    root = create_treenode(nums,true);
    recoverTree(root);
    cout << print_tree(root) << endl;
}