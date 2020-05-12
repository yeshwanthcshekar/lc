//
//  sqrt(x).cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/11/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//



class Solution {
public:
    int mySqrt(int x) {
        int start = 1 , end = x;
        long long int product = 0, mid = 0;
        if(x==0)return 0;
        if(x<=1) return 1;
        while(start<end){
            mid = start + ((end-start)/2);
            product = mid*mid;
            if(product==x)return mid;
            else if(product<x)start = mid+1;
            else if(product>x)end=mid;
        
    }
        return start-1;
    }
};
        
        


