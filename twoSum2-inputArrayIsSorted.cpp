//
//  twoSum2-inputArrayIsSorted.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/30/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;


#include "twoSum2-inputArrayIsSorted.hpp"



class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int i = 0;
        int j = (size-1);
        int sum = 0 ;
        vector<int> answer;
        while(i<j){
            sum = numbers[i] + numbers[j];
            if(sum == target){
                answer.push_back(i+1);
                answer.push_back(j+1);
                break;
            }
            else if(sum < target) i++;
            else if(sum > target) j--;
        }
    return answer;
    }
};
