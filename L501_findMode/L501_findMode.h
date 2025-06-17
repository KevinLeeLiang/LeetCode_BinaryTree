//
// Created by garen_lee on 2025/6/17.
/**
  ******************************************************************************
  * @file           : L501_findMode.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/17
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L501_FINDMODE_H
#define BINARYTREE_L501_FINDMODE_H

#include "util.h"
class L501_findMode : public LeetcodeBinaryTree {
private:
    vector<int> findMode(TreeNode* root);
    void update(int x);
    void dfs(TreeNode* root);
    int base, cnt, maxCnt;
    vector<int> ans;
public:
    L501_findMode() {}
    void test();
};


#endif //BINARYTREE_L501_FINDMODE_H
