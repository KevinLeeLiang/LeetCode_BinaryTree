//
// Created by garen_lee on 2025/3/17.
/**
  ******************************************************************************
  * @file           : L109_sortedListToBST.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/17
  ******************************************************************************
  */
//

#include "L109_sortedListToBST.h"

int L109_sortedListToBST::getLength(ListNode* head) {
    int length = 0;
    while (head != nullptr) {
        length++;
        head = head->next;
    }
    return length;
}

TreeNode* L109_sortedListToBST::buildTree(ListNode*& head, int left, int right) {
    if (left > right) {
        return nullptr;
    }
    int mid = (left + right + 1) / 2;
    TreeNode* root = new TreeNode();
    root->left = this->buildTree(head, left, mid - 1);
    root->val = head->val;
    head = head->next;
    root->right = this->buildTree(head, mid + 1, right);
    return root;
}

TreeNode* L109_sortedListToBST::sortedListToBST(ListNode* head) {
    int length = this->getLength(head);
    return this->buildTree(head, 0, length - 1);
}

void L109_sortedListToBST::test() {
    vector<int>vals = {-10, -3, 0, 5, 9};
    ListNode* head = create_list(vals);
    TreeNode* root = sortedListToBST(head);
    cout << print_tree(root) << endl;
    vals = {};
    head = create_list(vals);
    root = sortedListToBST(head);
    cout << print_tree(root) << endl;
}