//
//  convertBinaryNumberInLinkedListToInteger.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 4/12/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//
#include <iostream>
#include <vector>
#include<math.h>

using namespace std;

  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode * temp = head;
        int size = 1;
        int i = 0;
        int number = 0;
        while (temp->next != NULL){
            temp = temp->next;
            size++;
        }
        temp = head;
        while(temp != NULL){
            i = temp->val;
            number += i * pow(2, size-1);
            temp = temp->next;
            size--;
        }
        return number ;
    }
    
};
