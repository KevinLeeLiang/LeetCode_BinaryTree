//
// Created by garen_lee on 2025/6/17.
/**
  ******************************************************************************
  * @file           : L450_deleteNode.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/17
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L450_DELETENODE_H
#define BINARYTREE_L450_DELETENODE_H

#include "util.h"
class L450_deleteNode : public LeetcodeBinaryTree {
private:
    TreeNode* deleteNode(TreeNode* root, int key) ;
public:
    L450_deleteNode() {}
    void test();
};


#endif //BINARYTREE_L450_DELETENODE_H
