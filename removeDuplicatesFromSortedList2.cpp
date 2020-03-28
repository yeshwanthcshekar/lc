//
//  removeDuplicatesFromSortedList2.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/27/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "removeDuplicatesFromSortedList2.hpp"
#include <iostream>
#include <vector>

using namespace std;



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
     
        if(head == NULL)  return NULL;
        else if(head -> next == NULL) return head;
        ListNode *F = head, *temp = head, *comp = temp->next;
        while(comp != NULL){
            if(temp->val == comp->val){
                while(temp->val == comp->val){
                    comp = comp->next;
                    if(comp == NULL)break;
                }if((F==head) && (temp == head)){
                    head = comp;
                    F = head;
                    temp = F;
                    if(comp!=NULL)comp = temp ->next;
                }
                else{
                    F ->next = comp;
                    temp = comp;
                    if(comp!=NULL)comp = temp->next;
                    if((comp != NULL) && (temp->val != comp->val))F = F->next;
                }
            }
            else {
                temp = temp->next;
                comp = temp->next;
                if((comp!=NULL) &&(temp->val != comp->val))F = F ->next;
                
            }
        }
        return head;
    }
};
