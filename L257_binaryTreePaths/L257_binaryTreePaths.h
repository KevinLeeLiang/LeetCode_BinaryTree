//
// Created by garen_lee on 2025/5/20.
/**
  ******************************************************************************
  * @file           : L257_binaryTreePaths.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/20
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L257_BINARYTREEPATHS_H
#define BINARYTREE_L257_BINARYTREEPATHS_H

#include "util.h"
class L257_binaryTreePaths : public LeetcodeBinaryTree {
private:
    vector<string> binaryTreePaths(TreeNode* root);
    void construct_paths(TreeNode* node, string path, vector<string>& paths);
public:
    L257_binaryTreePaths() {}
    void test();
};


#endif //BINARYTREE_L257_BINARYTREEPATHS_H
