//
// Created by garen_lee on 2025/2/24.
/**
  ******************************************************************************
  * @file           : L104_maxDepth.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/24
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L104_MAXDEPTH_H
#define BINARYTREE_L104_MAXDEPTH_H

#include "util.h"
class L104_maxDepth : public LeetcodeBinaryTree{
private:
    int maxDepth(TreeNode* root);
public:
    L104_maxDepth(){}
    void test();
};


#endif //BINARYTREE_L104_MAXDEPTH_H
