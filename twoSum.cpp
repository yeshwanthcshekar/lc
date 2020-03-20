//
//  twoSum.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 3/20/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "twoSum.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int numberToBeFound = 0 ;
        vector<int> answer ;
        for(int i = 0; i < nums.size(); i++){
            numberToBeFound = target - nums[i];
            for(int j = i+1;j < nums.size(); j++){
                if(numberToBeFound == nums[j]) {
                    answer.push_back(i);
                    answer.push_back(j);
                   // break;
                }
            }
        }
      return answer;
    }
  
};
