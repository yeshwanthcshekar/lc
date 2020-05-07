//
//  ransomNote.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/6/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//
#include <iostream>
#include <vector>
#include <string>
#include<map>

using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char , int > M;
       if(ransomNote.length()>magazine.length()) return false;
        for(auto i:magazine){
            M[i]++;
        }
        for(auto i :ransomNote){
            if(!M[i])
            return false;
              M[i]--;
        }
        return true;
    }
};
