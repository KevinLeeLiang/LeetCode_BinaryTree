//
// Created by garen_lee on 2025/4/15.
/**
  ******************************************************************************
  * @file           : L129_sumNumbers.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/15
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L129_SUMNUMBERS_H
#define BINARYTREE_L129_SUMNUMBERS_H

#include "util.h"
class L129_sumNumbers : public LeetcodeBinaryTree {
private:
    int sumNumbers(TreeNode* root);
    int dfs(TreeNode* root, int sum);
public:
    L129_sumNumbers() {}
    void test();
};


#endif //BINARYTREE_L129_SUMNUMBERS_H
