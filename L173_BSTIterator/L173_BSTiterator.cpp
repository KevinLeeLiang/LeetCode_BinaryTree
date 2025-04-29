//
// Created by garen-lee on 2025/4/29.
/**
  ******************************************************************************
  * @file           : L173_BSTiterator.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/29
  ******************************************************************************
  */
//

#include "L173_BSTiterator.h"

using namespace L173;



void L173_BSTiterator::test() {
    vector<int> nums = {7, 3, 15, -1, -1, 9, 20};
    TreeNode* root = create_treenode(nums, true);
    BSTIterator iterator(root);
    cout << iterator.next() << endl;
    cout << iterator.next() << endl;
    cout << iterator.hasNext() << endl;
    cout << iterator.next() << endl;
    cout << iterator.hasNext() << endl;
    cout << iterator.next() << endl;
    cout << iterator.hasNext() << endl;
    cout << iterator.next() << endl;
    cout << iterator.hasNext() << endl;
}