//
// Created by garen_lee on 2025/3/24.
/**
  ******************************************************************************
  * @file           : L112_hasPathSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/24
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L112_HASPATHSUM_H
#define BINARYTREE_L112_HASPATHSUM_H

#include "util.h"
class L112_hasPathSum : public LeetcodeBinaryTree {
private:
    bool hasPathSum(TreeNode* root, int targetSum);
public:
    L112_hasPathSum() {}
    void test();
};


#endif //BINARYTREE_L112_HASPATHSUM_H
