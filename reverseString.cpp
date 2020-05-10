//
//  reverseString.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/10/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()<=1)return;
        int start = 0;
        int end = s.size()-1;
        char letter ;
        while(start<end){
            if(start==end)return;
            letter = s[start];
            s[start] = s[end];
            s[end] = letter;
            start++;
            end--;
        }
    }
};
