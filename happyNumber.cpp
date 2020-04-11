//
//  happyNumber.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 4/10/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

bool isHappy(int n) {
       if(n<=0) return false;
       while(1)
       {
           int sum = 0;
           while(n>0){
               sum += pow(n%10, 2);
               n = n / 10;
           }
           n = sum;
           if(sum==1) return true;
           if(sum==4) return false;
       }
       return false;
   }
