//
//  missingNumber.cpp
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
    int missingNumber(vector<int>& nums) {
        int size = nums.size(), sum =0;
        if(size==0)return 0;
        sum = size*(size+1)/2;
        for(int i : nums){
            sum -= i;
        }
        return sum;
    }
};
