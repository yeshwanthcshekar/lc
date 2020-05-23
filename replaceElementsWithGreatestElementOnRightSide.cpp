//
//  replaceElementsWithGreatestElementOnRightSide.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/22/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//


#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
      vector<int> replaceElements(vector<int>& A, int mx = -1) {
        for (int i = A.size() - 1; i >= 0; --i)
            mx = max(mx, exchange(A[i], mx));
        return A;
    }
};
