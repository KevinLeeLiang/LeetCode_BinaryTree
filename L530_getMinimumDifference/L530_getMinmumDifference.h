//
// Created by garen_lee on 2025/7/1.
/**
  ******************************************************************************
  * @file           : L530_getMinmumDifference.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/1
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L530_GETMINMUMDIFFERENCE_H
#define BINARYTREE_L530_GETMINMUMDIFFERENCE_H

#include "util.h"
class L530_getMinmumDifference : public LeetcodeBinaryTree {
private:
    int getMinimumDifference(TreeNode* root);
    void dfs(TreeNode* root, int &res, int pre);
public:
    L530_getMinmumDifference() {}
    void test();
};


#endif //BINARYTREE_L530_GETMINMUMDIFFERENCE_H
