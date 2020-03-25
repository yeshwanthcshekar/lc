//
//  removeElement.cpp
//  twoSum
//
//  Created by Yeshwanth Chandrashekar on 3/24/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//
#include <iostream>
#include <vector>
#include "removeElement.hpp"

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      auto it = nums.begin();
       // auto itr = it;
        while(it != nums.end()){
            it = find(nums.begin(), nums.end(), val);
           //itr = it;
            if(it != nums.end())nums.erase(it);
            //it = itr;
        }
        return nums.size();
    }
};
