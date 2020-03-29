//
//  linkedListCycle2.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/28/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "linkedListCycle2.hpp"
#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode * , int > S;
        if(head == NULL) return NULL;
        ListNode *temp = head;
        //S.insert(temp->val);
        auto it = S.begin();
        while(temp != NULL){
            it = S.find(temp);
            if(it == S.end()){
                S.insert({temp, temp->val});
            }
            else { return temp; }
            temp = temp->next;
        }
        return NULL;
    }
};
