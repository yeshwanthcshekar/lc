//
//  singleNumber.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/29/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//
#include <iostream>
#include <vector>
#include "singleNumber.hpp"
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;       // read notes
        for(auto i : nums){
            a ^= i;
        }
        return a;
    }
};
