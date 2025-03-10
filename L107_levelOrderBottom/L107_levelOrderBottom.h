//
// Created by garen-lee on 2025/3/10.
/**
  ******************************************************************************
  * @file           : L107_levelOrderBottom.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/10
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L107_LEVELORDERBOTTOM_H
#define BINARYTREE_L107_LEVELORDERBOTTOM_H

#include "util.h"
class L107_levelOrderBottom : public LeetcodeBinaryTree {
private:
    vector<vector<int>> levelOrderBottom(TreeNode* root);
public:
    L107_levelOrderBottom() {}
    void test();

};


#endif //BINARYTREE_L107_LEVELORDERBOTTOM_H
