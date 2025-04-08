//
// Created by garen_lee on 2025/4/8.
/**
  ******************************************************************************
  * @file           : L117_connect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/8
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L117_CONNECT_H
#define BINARYTREE_L117_CONNECT_H

#include "util.h"
class L117_connect : public LeetcodeBinaryTree {
private:
    unordered_map<int, Node*>map_;
private:
    Node* connect(Node* root);
    void dfs(Node* node, int depth);
public:
    L117_connect() {}
    void test();
};


#endif //BINARYTREE_L117_CONNECT_H
