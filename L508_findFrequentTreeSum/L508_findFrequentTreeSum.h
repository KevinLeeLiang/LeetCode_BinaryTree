//
// Created by garen_lee on 2025/6/24.
/**
  ******************************************************************************
  * @file           : L508_findFrequentTreeSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/24
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L508_FINDFREQUENTTREESUM_H
#define BINARYTREE_L508_FINDFREQUENTTREESUM_H

#include "util.h"
class L508_findFrequentTreeSum : public LeetcodeBinaryTree {
private:
    vector<int> findFrequentTreeSum(TreeNode *root);
    int dfs(TreeNode* root);
    unordered_map<int, int> map;
    int max_count;
public:
    L508_findFrequentTreeSum() {}
    void test();
};


#endif //BINARYTREE_L508_FINDFREQUENTTREESUM_H
