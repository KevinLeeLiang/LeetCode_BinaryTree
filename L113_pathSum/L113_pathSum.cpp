//
// Created by garen_lee on 2025/3/31.
/**
  ******************************************************************************
  * @file           : L113_pathSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/31
  ******************************************************************************
  */
//

#include "L113_pathSum.h"

void L113_pathSum::dfs(TreeNode* root, int targetSum, vector<int> &path, vector<vector<int>> &res) {
    if (root == nullptr) {
        return;
    }
    path.push_back(root->val);
    if (root->left == nullptr && root->right == nullptr && root->val == targetSum) {
        res.push_back(path);
    }
    dfs(root->left, targetSum - root->val, path, res);
    dfs(root->right, targetSum - root->val, path, res);
    path.pop_back();
    return;
}

vector<vector<int>> L113_pathSum::pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>>res;
    vector<int> path;
    dfs(root, targetSum, path, res);
    return res;
}

void L113_pathSum::test() {
    vector<int> nums = {5,4,8,11,-1,13,4,7,2,-1,-1,5,1};
    TreeNode* root = create_treenode(nums, true);
    int target = 22;
    vector<vector<int>> res = pathSum(root, target);
    print_vector_vector(res);
    nums = {1, 2, 3};
    root = create_treenode(nums, true);
    target = 5;
    res = pathSum(root, target);
    print_vector_vector(res);
    nums = {1, 2};
    root = create_treenode(nums, true);
    target = 0;
    res = pathSum(root, target);
}