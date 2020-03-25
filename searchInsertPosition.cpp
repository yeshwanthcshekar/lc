//
//  searchInsertPosition.cpp
//  twoSum
//
//  Created by Yeshwanth Chandrashekar on 3/24/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//
#include <iostream>
#include <vector>
#include "searchInsertPosition.hpp"

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size() == 0) return -1;
        int i = 0;
        for( i = 0; i < nums.size(); i++){
            if((nums[i] == target) || (nums[i] > target)){
                return i ;
            }
        }
        return i;
    }
};
