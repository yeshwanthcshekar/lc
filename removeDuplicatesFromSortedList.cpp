//
//  removeDuplicatesFromSortedList.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/27/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "removeDuplicatesFromSortedList.hpp"
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       
        if((head == NULL) || (head ->next == NULL)) return head;
         ListNode *temp = head, *comp = temp->next;
        while((temp != NULL) && (comp != NULL)) {
            if(temp->val == comp->val){
                temp->next = comp->next;
                comp = comp->next;
            }
            else{
                temp = temp->next;
                comp = temp->next;
            }
        }
        return head;
    }
};
