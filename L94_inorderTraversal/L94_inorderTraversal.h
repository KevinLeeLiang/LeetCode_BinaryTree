//
// Created by garen-lee on 2025/2/1.
/**
  ******************************************************************************
  * @file           : L94_inorderTraversal.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/1
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L94_INORDERTRAVERSAL_H
#define BINARYTREE_L94_INORDERTRAVERSAL_H

#include "util.h"
class L94_inorderTraversal : public LeetcodeBinaryTree{
private:
    vector<int> inorderTraversal(TreeNode* root);
public:
    L94_inorderTraversal(){}
    void test();
};


#endif //BINARYTREE_L94_INORDERTRAVERSAL_H
