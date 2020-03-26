//
//  searchInRotatedSortedArray.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/25/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "searchInRotatedSortedArray.hpp"
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size() -1;
       if((nums.size() == 1) && (nums[0] == target )) return 0;
        else if((nums.size() == 1) && (nums[0] != target)) return -1;
        while(i<=j){
            if((target > nums[i]) && (target > nums[j])){
                i++;
                j--;
            }
            else if(target == nums[i]) return i;
            else if(target == nums[j]) return j;
            else if((target < nums[i]) && (target < nums[j])){
                i++;
                j--;
            }
            else if((target < nums[i]) && (target > nums[j])){
                j--;
            }
            else if((target >nums[i]) && (target < nums[j]))i++;
        }
        return -1;
    }
};
