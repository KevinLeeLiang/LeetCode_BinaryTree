//
// Created by garen_lee on 2025/7/15.
/**
  ******************************************************************************
  * @file           : L563_findTilt.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/15
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L563_FINDTILT_H
#define BINARYTREE_L563_FINDTILT_H

#include "util.h"
class L563_findTilt : public LeetcodeBinaryTree {
private:
    int dfs(TreeNode* root, int& ans);
    int findTilt(TreeNode* root);
public:
    L563_findTilt() {}
    void test();
};


#endif //BINARYTREE_L563_FINDTILT_H
