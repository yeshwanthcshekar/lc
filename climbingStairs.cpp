//
//  climbingStairs.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/26/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "climbingStairs.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        
        if(n == 1)return 1;
        vector<int> memory(n+1,0);
        memory[1] = 1;
        memory[2] = 2;
        
        for(int i = 3; i<=n; i++){
            memory[i] = memory[i-1] + memory[i-2];
        }
        return memory[n];
    }
};
