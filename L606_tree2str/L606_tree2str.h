//
// Created by garen_lee on 2025/8/5.
/**
  ******************************************************************************
  * @file           : L606_tree2str.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/5
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L606_TREE2STR_H
#define BINARYTREE_L606_TREE2STR_H

#include "util.h"
class L606_tree2str : public LeetcodeBinaryTree {
private:
    string tree2str(TreeNode* root);
public:
    L606_tree2str() {}
    void test();
};


#endif //BINARYTREE_L606_TREE2STR_H
