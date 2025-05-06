//
// Created by garen_lee on 2025/5/6.
/**
  ******************************************************************************
  * @file           : L222_countNodes.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/6
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L222_COUNTNODES_H
#define BINARYTREE_L222_COUNTNODES_H

#include "util.h"
class L222_countNodes : public LeetcodeBinaryTree {
private:
    int countNodes(TreeNode* root);
    bool exists(TreeNode* root, int level, int k);
public:
    L222_countNodes() {}
    void test();
};


#endif //BINARYTREE_L222_COUNTNODES_H
