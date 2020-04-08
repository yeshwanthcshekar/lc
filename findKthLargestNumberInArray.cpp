//
//  findKthLargestNumberInArray.cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 4/8/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


int findKthLargest(vector<int>& nums, int k) {
      sort(nums.begin(), nums.end(), greater<int>());
      return nums[k-1];
  }
