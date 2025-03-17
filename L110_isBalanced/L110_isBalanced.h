//
// Created by garen_lee on 2025/3/17.
/**
  ******************************************************************************
  * @file           : L110_isBalanced.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/17
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L110_ISBALANCED_H
#define BINARYTREE_L110_ISBALANCED_H

#include "util.h"
class L110_isBalanced : public LeetcodeBinaryTree {
private:
    int getDepth(TreeNode *root);
    bool isBalanced(TreeNode *root);
public:
    L110_isBalanced() {}
    void test();
};


#endif //BINARYTREE_L110_ISBALANCED_H
