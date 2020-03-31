//
//  majorityElement.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/30/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;
#include "majorityElement.hpp"




class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> M;
        int max = 0 , key = 0 ;
        for(auto i : nums){
            auto j = M.find(i);
            if(j == M.end())       // number i is not present in Map
               M.insert({i,1});
            else j->second++;
        }
        max = M.begin()->second;
        key = M.begin()->first;
        for(auto i:M){
            if(max < i.second){
                max = i.second;
                key = i.first;
            }
        }
        return key;
    }
};
