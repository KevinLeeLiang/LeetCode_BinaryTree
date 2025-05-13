//
// Created by garen_lee on 2025/5/13.
/**
  ******************************************************************************
  * @file           : L230_kthSmallest.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/13
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L230_KTHSMALLEST_H
#define BINARYTREE_L230_KTHSMALLEST_H

#include "util.h"
class L230_kthSmallest : public LeetcodeBinaryTree {
private:
    int kthSmallest(TreeNode* root, int k) ;
public:
    L230_kthSmallest() {}
    void test();
};


#endif //BINARYTREE_L230_KTHSMALLEST_H
