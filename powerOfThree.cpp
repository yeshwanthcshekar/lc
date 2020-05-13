//
//  powerOfThree.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/12/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <iostream>

using namespace std;


class Solution {
public:
    bool isPowerOfThree(int n) {
         if (n < 1) {
            return false;
        }

        while (n % 3 == 0) {
            n /= 3;
        }

        return n == 1;

       
    }
};
