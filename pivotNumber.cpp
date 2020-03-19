//
//  lc724.cpp
//  twoSum
//
//  Created by Yeshwanth Chandrashekar on 2/20/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "lc724.hpp"
#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int>& nums) {
    if (nums.size() == 0 ) return -1 ;
    int left = 0, right = 0;
    
    for(int i = 0 ; i < nums.size(); i++){
        right += nums[i];
    }
    for(int index = 0; index < nums.size() ; index++){
        right -= nums[index];
        if(left == right) return index;
        else left += nums[index];
    }
    return -1 ;
}
    
    
    int main()
{
    vector<int> numbers =  {1, 7 , 3 , 6,  5, 6 };
    int o = pivotIndex(numbers);
    cout << o << endl ;
}
