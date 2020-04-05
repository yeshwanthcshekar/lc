//
//  containsDuplicate2.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 4/4/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <iostream>
#include <vector>
#include "singleNumber.hpp"
using namespace std;


#include "containsDuplicate2.hpp"


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int , int> M ;
       for(int i = 0 ; i< nums.size(); i++){
        if((M.find(nums[i]) != M.end()) && (i - M[nums[i]] <= k))return true;
           M[nums[i]] = i;
    }
         return false;
    }
       
};
