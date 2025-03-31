//
// Created by garen_lee on 2025/3/31.
/**
  ******************************************************************************
  * @file           : L114_flatten.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/31
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L114_FLATTEN_H
#define BINARYTREE_L114_FLATTEN_H

#include "util.h"
class L114_flatten : public LeetcodeBinaryTree {
private:
    void flatten(TreeNode* root);
public:
    L114_flatten() {}
    void test();
};


#endif //BINARYTREE_L114_FLATTEN_H
