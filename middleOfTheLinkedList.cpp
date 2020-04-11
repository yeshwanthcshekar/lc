//
//  middleOfTheLinkedList.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 4/11/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//


#include <iostream>
using namespace std;



//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       //find the size of the List
        if(!head)return head;
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        //divide the size by 2 add 1 to the quotient and return that node
        size /=2;
        size++;
        for(int i=1;i<size;i++){
            head=head->next;
        }
        return head;
    }
};
