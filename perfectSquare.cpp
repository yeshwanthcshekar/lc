//
//  perfectSquare.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/9/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 1 , end = num/2;
        long long int product = 0, mid = 0;
        if(num==1) return true;
        while(start<=end){
            mid = start + ((end-start)/2);
            product = mid*mid;
            if(product==num)return true;
            else if(product<num)start = mid+1;
            else if(product>num)end=mid-1;
        }
        return false;
    }
};
