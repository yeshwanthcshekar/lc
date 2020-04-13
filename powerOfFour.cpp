//
//  powerOfFour.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 4/12/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//
#include <iostream>
#include <vector>
#include<math.h>

using namespace std;
class Solution {
public:
    bool isPowerOfFour(int num) {
       
        if(num<=0) return false;
        if(num==1)return true;
        float result = log2(num)/2;
        int res1 = result;
        return (result==res1 && result!=0);
    }
};
