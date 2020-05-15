//
//  addStrings.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/14/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string addStrings(string num1, string num2) {
        long long int k = 0, l = 0, carry = 0, size1 = num1.size(), size2 = num2.size();
        string temp;
        for(int i = size1-1, j = size2-1; i>=0 || j>= 0; i--, j--){
            if(i>=0) k = num1[i]-48;
            if(j>=0) l = num2[j]-48;
            long long int sum = k+l+carry;
            k =0;
            l = 0 ;
            if(sum>=10){
                carry = sum/10;
                temp.push_back((sum%10) +48);
            }
            else {
                carry = 0;
              //  cout << sum << '\t';
                temp.push_back(sum+48);
            }
        }
        //cout << endl ;
        //for(auto i : temp){cout << i << '\t' ;}
        if(carry!=0)temp.push_back(carry+48);
        string solution;
        for(int i = temp.size()-1; i>=0; i--){
            solution.push_back(temp[i]);
        }
        return solution ;
    }
};
