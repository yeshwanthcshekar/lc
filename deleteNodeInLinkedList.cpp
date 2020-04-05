//
//  deleteNodeInLinkedList.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 4/4/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//
#include <iostream>
#include <vector>
#include "singleNumber.hpp"
using namespace std;


#include "deleteNodeInLinkedList.hpp"



//Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    void deleteNode(ListNode* node) {
        //ListNode *temp;
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
