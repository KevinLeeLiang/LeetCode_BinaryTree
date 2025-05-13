//
// Created by garen_lee on 2025/5/13.
/**
  ******************************************************************************
  * @file           : L235_lowestCommonAncestor.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/13
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L235_LOWESTCOMMONANCESTOR_H
#define BINARYTREE_L235_LOWESTCOMMONANCESTOR_H

#include "util.h"
class L235_lowestCommonAncestor : public LeetcodeBinaryTree {
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
public:
    L235_lowestCommonAncestor() {}
    void test();
};


#endif //BINARYTREE_L235_LOWESTCOMMONANCESTOR_H
