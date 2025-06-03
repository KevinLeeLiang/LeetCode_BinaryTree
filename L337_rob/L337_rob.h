//
// Created by garen_lee on 2025/6/3.
/**
  ******************************************************************************
  * @file           : L337_rob.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/3
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L337_ROB_H
#define BINARYTREE_L337_ROB_H

#include "util.h"
class L337_rob : public LeetcodeBinaryTree {
private:
    int rob(TreeNode* root);
    void dfs(TreeNode* node);
    unordered_map<TreeNode*, int> f, g;
public:
    L337_rob() {}
    void test();
};


#endif //BINARYTREE_L337_ROB_H
