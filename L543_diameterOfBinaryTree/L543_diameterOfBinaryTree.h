//
// Created by garen_lee on 2025/7/8.
/**
  ******************************************************************************
  * @file           : L543_diameterOfBinaryTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/8
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L543_DIAMETEROFBINARYTREE_H
#define BINARYTREE_L543_DIAMETEROFBINARYTREE_H

#include "util.h"
class L543_diameterOfBinaryTree : public LeetcodeBinaryTree {
private:
    int diameterOfBinaryTree(TreeNode* root);
    int depth(TreeNode* rt);
    int ans;
public:
    L543_diameterOfBinaryTree() {}
    void test();
};


#endif //BINARYTREE_L543_DIAMETEROFBINARYTREE_H
