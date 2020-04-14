//
//  addDigits.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 4/13/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <iostream>
#include <vector>
#include<math.h>

using namespace std;
class Solution {
public:
    int addDigits(int num) {
     while(num>=10) {
            num = sumOfDigits(num);
        }
        return num;
    }
    
    
    int sumOfDigits (int num) {
        int sum = 0;
        while(num>0 ) {
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
};
