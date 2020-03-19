//
//  lc11.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 3/18/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "lc11.hpp"
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0, temp = 0;
        int i = 0, j = height.size()-1;
        max = min(height[0], height[j]) * (j-i);
        while(i<j){
            if(height[i] < height[j])i++;
            else j--;
            temp = min(height[i], height[j]) * (j-i);
            if(max<temp) max = temp;
        }
        
        return max;
    }
};
