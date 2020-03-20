//
//  validParentheses.cpp
//  
//
//  Created by Yeshwanth Chandrashekar on 3/20/20.
//

#include "validParentheses.hpp"
#include <iostream>
#include <string>


using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stackOfBraces;
        char a;
        for(int i = 0 ; i< s.size();i++){
            a = s[i];
            if(a == '(' ||  a == '[' || a == '{' ){
                stackOfBraces.push(a);
            }
            else if(a == ')' || a ==']' || a =='}'){
                if(stackOfBraces.empty()) return false;
                switch (a) {
                    case ')':
                        if(stackOfBraces.top() == '(')stackOfBraces.pop();
                        else return false;
                        break;
                    case ']':
                        if(stackOfBraces.top() == '[')stackOfBraces.pop();
                        else return false;
                        break;
                    case '}':
                        if(stackOfBraces.top() == '{')stackOfBraces.pop();
                        else return false;
                        break;

                }
            }
        }
       
        if(stackOfBraces.empty() ) {
            return true;
        }
        else return false;
        
        
    }
};
