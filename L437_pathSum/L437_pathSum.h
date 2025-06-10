//
// Created by garen_lee on 2025/6/10.
/**
  ******************************************************************************
  * @file           : L437_pathSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/10
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L437_PATHSUM_H
#define BINARYTREE_L437_PATHSUM_H

#include "util.h"
class L437_pathSum : public LeetcodeBinaryTree {
private:
    int pathSum(TreeNode* root, int targetSum);
    int pathSum(TreeNode* root, int targetSum, long long sum);
public:
    L437_pathSum() {}
    void test();
};


#endif //BINARYTREE_L437_PATHSUM_H
