//
// Created by garen_lee on 2025/2/24.
/**
  ******************************************************************************
  * @file           : L103_zigzagLevelOrder.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/24
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L103_ZIGZAGLEVELORDER_H
#define BINARYTREE_L103_ZIGZAGLEVELORDER_H

#include "util.h"
class L103_zigzagLevelOrder : public LeetcodeBinaryTree {
private:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root);
public:
    L103_zigzagLevelOrder(){}
    void test();
};


#endif //BINARYTREE_L103_ZIGZAGLEVELORDER_H
