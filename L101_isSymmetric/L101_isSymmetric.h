//
// Created by garen_lee on 2025/2/17.
/**
  ******************************************************************************
  * @file           : L101_isSymmetric.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/17
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L101_ISSYMMETRIC_H
#define BINARYTREE_L101_ISSYMMETRIC_H

#include "util.h"
class L101_isSymmetric : public LeetcodeBinaryTree{
private:
    bool isSameTree(TreeNode* p, TreeNode* q);
    bool isSymmetric(TreeNode* root);
public:
    L101_isSymmetric(){}
    void test();
};


#endif //BINARYTREE_L101_ISSYMMETRIC_H
