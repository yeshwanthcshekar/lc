//
//  romanToInteger.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 3/20/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "romanToInteger.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int num = 0, x = 0, y = 0 ;
        char a, b ;
        if(s.length() == 0)  return -1;
        
        for(int i = 0 ; i < s.length();){
            a = s[i];
            switch(a){
                    case 'I': x = 1;
                            break;
                    case 'V': x = 5;
                    break;
                    case 'X': x = 10;
                break;
                case 'L': x = 50;
                break;
                case 'C': x = 100;
                break;
                case 'D': x = 500;
                break;
                case 'M': x = 1000;
                    break;
                default : x = 0;
            }
            if((i+1) < s.length()) b = s[i+1];
            
            switch(b){
                    case 'I': y = 1;
                            break;
                    case 'V': y = 5;
                break;
                case 'X': y = 10;
                    break;
                    case 'L': y = 50;
                break;
                case 'C': y = 100;
                break;
                case 'D': y = 500;
                break;
                case 'M': y = 1000;
                    break;
                default : y = 0;
            }
            if(x<y){
                x = y-x;
                num += x;
                i += 2;
            }
            else {num += x;
                 i += 1;}
            x = 0;
            y = 0;
            a = 0;
            b = 0;
            
        }
        return num;
    }
};
