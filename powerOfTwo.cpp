//
//  powerOfTwo.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 4/10/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

bool isPowerOfTwo(int n) {
       if(n==0)return false;
       else if(ceil(log2(n)) == floor(log2(n)))return true;
       else return false;
   }
