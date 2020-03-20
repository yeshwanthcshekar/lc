//
//  swapNodesInPairs.cpp
//  
//
//  Created by Yeshwanth Chandrashekar on 3/20/20.
//

#include "swapNodesInPairs.hpp"
#include <iostream>
#include <string>


using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
     ListNode *a  = NULL, *b = NULL, *F = NULL , *R = NULL;
        if((head == NULL) || (head -> next == NULL))return head;
        F = head;
        a = head->next;
        b = a->next;
        head = a;
        head->next = F;
        F->next = b;
        F = head->next ;
       
        while((F->next != NULL) && (F->next->next != NULL)){
            a = F->next;
            b = a->next;
            R = b->next;
            F ->next = b ;
            b ->next = a;
            a ->next = R;
            F = a ;
        }
        return head;
    }
};
