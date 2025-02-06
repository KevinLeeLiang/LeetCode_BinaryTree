//
// Created by garen_lee on 2025/2/6.
/**
  ******************************************************************************
  * @file           : L98_isValidBST.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/6
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L98_ISVALIDBST_H
#define BINARYTREE_L98_ISVALIDBST_H

#include "util.h"
class L98_isValidBST : public LeetcodeBinaryTree{
private:
    bool isValidBST(TreeNode* root);
public:
    L98_isValidBST(){}
    void test();
};


#endif //BINARYTREE_L98_ISVALIDBST_H
