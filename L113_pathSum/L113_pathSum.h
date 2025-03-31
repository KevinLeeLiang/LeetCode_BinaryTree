//
// Created by garen_lee on 2025/3/31.
/**
  ******************************************************************************
  * @file           : L113_pathSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/31
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L113_PATHSUM_H
#define BINARYTREE_L113_PATHSUM_H

#include "util.h"
class L113_pathSum : public LeetcodeBinaryTree {
private:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum);
    void dfs(TreeNode* root, int targetSum, vector<int> &path, vector<vector<int>> &res);
public:
    L113_pathSum() {}
    void test();
};


#endif //BINARYTREE_L113_PATHSUM_H
