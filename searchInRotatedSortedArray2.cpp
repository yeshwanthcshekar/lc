//
//  searchInRotatedSortedArray2.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/26/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "searchInRotatedSortedArray2.hpp"
#include <iostream>
#include <vector>

using namespace std;



class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i = 0, j = nums.size() -1;
       if((nums.size() == 1) && (nums[0] == target )) return true;
        else if((nums.size() == 1) && (nums[0] != target)) return false;
        while(i<=j){
            if((target > nums[i]) && (target > nums[j])){
                i++;
                j--;
            }
            else if(target == nums[i]) return true;
            else if(target == nums[j]) return true;
            else if((target < nums[i]) && (target < nums[j])){
                i++;
                j--;
            }
            else if((target < nums[i]) && (target > nums[j])){
                j--;
            }
            else if((target >nums[i]) && (target < nums[j]))i++;
        }
        return false;
    }
};
