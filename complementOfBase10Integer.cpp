//
//  complementOfBase10Integer.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/6/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <iostream>
#include <vector>
#include<math.h>

using namespace std;



class Solution {
public:
    int bitwiseComplement(int N) {
        int number  = N , quotient = 0, remainder = 0;
        vector<int>binary;
        bool check = true;
        
        if(N==0)return 1;
        else if(N==1)return 0;
        while(check){
            remainder = number%2;
            binary.push_back(remainder);
            quotient = number/2;
            number = quotient;
            if(quotient<2){
            binary.push_back(quotient);
            check = false;
            }
        }
            int size = binary.size(), solution = 0;
        for(int i = 0 ; i<size; i++){
            number = binary[i];
            if(number == 0){
                solution += 1 * pow(2,i);
            }
            else{
                solution += 0 * pow(2,i);
            }
        }
            return solution;
    }
    
};
