//
//  bestTimeToBuyAndSellStock.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/29/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//
#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;
#include "bestTimeToBuyAndSellStock.hpp"
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0 , temp = 0;
        for(int i = 0; i<prices.size(); i++){
            for(int j = i+1; j<prices.size(); j++){
                temp = prices[j]-prices[i];
                if(temp>max)max = temp;
            }
        }
        return max;
    }
};
