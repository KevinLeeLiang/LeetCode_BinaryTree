//
// Created by garen_lee on 2025/7/8.
/**
  ******************************************************************************
  * @file           : L538_convertBST.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/8
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L538_CONVERTBST_H
#define BINARYTREE_L538_CONVERTBST_H

#include "util.h"
class L538_convertBST : public LeetcodeBinaryTree {
private:
    TreeNode* convertBST(TreeNode* root);
    int sum = 0;
public:
    L538_convertBST() {}
    void test();
};


#endif //BINARYTREE_L538_CONVERTBST_H
