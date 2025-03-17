//
// Created by garen_lee on 2025/3/17.
/**
  ******************************************************************************
  * @file           : L109_sortedListToBST.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/17
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L109_SORTEDLISTTOBST_H
#define BINARYTREE_L109_SORTEDLISTTOBST_H

#include "util.h"
class L109_sortedListToBST : public LeetcodeBinaryTree {
private:
    TreeNode* sortedListToBST(ListNode* head);
    int getLength(ListNode* head);
    TreeNode* buildTree(ListNode*& head, int left, int right);
public:
    L109_sortedListToBST() {}
    void test();
};


#endif //BINARYTREE_L109_SORTEDLISTTOBST_H
