//
//  maxConsecutiveOnes.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/21/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//
#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        //if 0 is encountered skip that term,
        //else if 1 is encountered enter a while loop and keep looping until next 0 and
        //hence we will have 1s count . Finally check if the 1s count is greater than the previous 1s count
       int count = 0, maxCount = 0, size = nums.size();
        
        for(int i = 0; i< size; ){
            if(nums[i] == 1){
                count = 0;
                while( i< size && nums[i] != 0){
                    i++;
                    count++;
                }
                if(count>maxCount)maxCount = count;
            }
            else i++;
        }
        
        return maxCount;
    }
};
