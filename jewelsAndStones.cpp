//
//  jewelsAndStones.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/8/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include<map>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int solution = 0, count = 0 ;
        if(J.size() ==0 || S.size() ==0) return 0;
        map<char , int> M;
        map<char, int>::iterator itr;
        for(int i = 0 ; i<S.size(); i++){
            //map has the character we are searching for , so increase the count of the value
            itr = M.find(S[i]);
            if(itr!=M.end()){
                count = itr->second;
                itr->second = ++count;
                count = 0;
            }
            //map doesn't has the key hence insert it with value being 0
            else {
                M.insert(pair<char, int>(S[i], 1));
            }
        }
        
        //map has to characters we are searching for, now traverse through the string J and find the count
        for(int i = 0 ; i<J.size();i++){
            itr = M.find(J[i]);
            if(itr!=M.end()){
                count = itr->second;
                solution+=count;
                count = 0;
            }
        }
        return solution;
    }
};
