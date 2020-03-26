//
//  implementStrStr().cpp
//  lc26
//
//  Created by Yeshwanth Chandrashekar on 3/25/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include "implementStrStr().hpp"
#include <iostream>
#include <vector>

using namespace std;




class Solution {
public:
    int strStr(string haystack, string needle) {
        {
    const auto pos = haystack.find(needle);
    
    if (pos != std::string::npos)
    {
        return pos;
    }
    	
    return -1;
}
    }
};
