//
// Created by garen_lee on 2025/2/17.
/**
  ******************************************************************************
  * @file           : L102_levelOrder.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/17
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L102_LEVELORDER_H
#define BINARYTREE_L102_LEVELORDER_H

#include "util.h"
class L102_levelOrder : public LeetcodeBinaryTree{
private:
    vector<vector<int>> levelOrder(TreeNode* root);
public:
    L102_levelOrder(){}
    void test();
};


#endif //BINARYTREE_L102_LEVELORDER_H
