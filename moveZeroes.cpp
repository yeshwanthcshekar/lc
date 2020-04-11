//
//  moveZeroes.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 4/11/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//


#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int slow = 0, fast = 0;
    for(int i = 0 ; i < nums.size();i++){
        if(nums[i] == 0 ){
            for(int j = i+1; j<nums.size();j++){
                if(nums[j] != 0){
                    swap(nums[i], nums[j]);
                    break;
                }
            }
        }
    }
}
