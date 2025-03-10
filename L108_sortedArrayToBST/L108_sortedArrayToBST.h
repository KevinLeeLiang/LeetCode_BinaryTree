//
// Created by garen-lee on 2025/3/10.
/**
  ******************************************************************************
  * @file           : L108_sortedArrayToBST.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/10
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L108_SORTEDARRAYTOBST_H
#define BINARYTREE_L108_SORTEDARRAYTOBST_H

#include "util.h"
class L108_sortedArrayToBST : public LeetcodeBinaryTree {
private:
    TreeNode *sortedArrayToBST(vector<int> &nums);
    TreeNode* sortedArrayToBST(vector<int>& nums, int left, int right);
public:
    L108_sortedArrayToBST() {}
    void test();
};


#endif //BINARYTREE_L108_SORTEDARRAYTOBST_H
