//
//  checkIfNandItsDoubleExist.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/22/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i =0;i<arr.size();i++){
            int doubleNum = arr[i]*2;
            for(int j =0; j<arr.size();j++){
                if(i!=j && arr[j]==doubleNum)return true;
            }
        }
        return false;
    }
};
