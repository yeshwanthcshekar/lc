//
//  findNumbersWithEvenNumberOfDigits.cpp
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
    int findNumbers(vector<int>& nums) {
        int count=0;

        for(int i =0; i<nums.size(); i++){
            int numb = nums[i];
            int numbCount = 0;
            while(numb!=0){
                numb = numb/10;
                numbCount++;
            }
            if(!(numbCount&1))count++;
        }
        
        return count;
    }
};
