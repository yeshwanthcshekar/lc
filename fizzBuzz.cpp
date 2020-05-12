//
//  fizzBuzz.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/11/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//


#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> S;
        string a ;
        for(int i = 1 ; i<=n ; i++){
            if(i%3==0 && i%5==0){
                S.push_back("FizzBuzz");
            }
            else if(i%3==0){
                S.push_back("Fizz");
            }
            else if(i%5==0){
                S.push_back("Buzz");
            }
            else{
                a = to_string(i);
                S.push_back(a);
            }
        }
        return S;
    }
};
