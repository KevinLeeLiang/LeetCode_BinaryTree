//
// Created by garen_lee on 2025/4/8.
/**
  ******************************************************************************
  * @file           : L116_connect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/8
  ******************************************************************************
  */
//

#ifndef BINARYTREE_L116_CONNECT_H
#define BINARYTREE_L116_CONNECT_H

#include "util.h"
class L116_connect : public LeetcodeBinaryTree {
private:
    Node* connect(Node* root);
    void dfs(Node *left, Node *right);
public:
    L116_connect() {}
    void test();
};


#endif //BINARYTREE_L116_CONNECT_H
