//
//  checkIfItIsStraightLine.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/8/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//
#include <iostream>
#include <vector>
#include <string>
#include<map>

using namespace std;
class Solution {
public:
    bool checkStraightLine( vector<vector<int>>& coordinates ) {
       int size = coordinates.size();
        if(size<=2)return true;
        //calculate slope
        int dY = coordinates[1][1]-coordinates[0][1];
        int dX = coordinates[1][0]-coordinates[0][0];
        //float slope = float(dX/dY);
        for(int i = 1; i<size-1;i++){
            if(dX*(coordinates[i+1][1]-coordinates[0][1]) != dY*(coordinates[i+1][0]-coordinates[0][0]))return false;
        }return true;
    }
};
