//
// Created by garen_lee on 2025/7/1.
/**
  ******************************************************************************
  * @file           : L515_largestValues.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/1
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L515_LARGESTVALUES_H
#define BINARYTREE_L515_LARGESTVALUES_H

#include "util.h"
class L515_largestValues : public LeetcodeBinaryTree {
private:
    vector<int> largestValues(TreeNode* root);
public:
    L515_largestValues() {}
    void test();
};


#endif //BINARYTREE_L515_LARGESTVALUES_H
