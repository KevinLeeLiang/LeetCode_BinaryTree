//
// Created by garen_lee on 2025/3/24.
/**
  ******************************************************************************
  * @file           : L111_minDepth.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/24
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L111_MINDEPTH_H
#define BINARYTREE_L111_MINDEPTH_H

#include "util.h"
class L111_minDepth : public LeetcodeBinaryTree {
private:
    int minDepth(TreeNode *root);
    int minDepth(TreeNode *root, int depth);
public:
    L111_minDepth() {}
    void test();
};


#endif //BINARYTREE_L111_MINDEPTH_H
