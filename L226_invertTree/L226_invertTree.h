//
// Created by garen_lee on 2025/5/6.
/**
  ******************************************************************************
  * @file           : L226_invertTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/6
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L226_INVERTTREE_H
#define BINARYTREE_L226_INVERTTREE_H

#include "util.h"
class L226_invertTree : public LeetcodeBinaryTree {
private:
    TreeNode *invertTree(TreeNode *root);
public:
    L226_invertTree() {}
    void test();
};


#endif //BINARYTREE_L226_INVERTTREE_H
