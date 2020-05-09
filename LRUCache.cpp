//
//  LRUCache.cpp
//  lc
//
//  Created by Yeshwanth Chandrashekar on 5/9/20.
//  Copyright © 2020 Yeshwanth Chandrashekar. All rights reserved.
//

#include<iostream>
#include<unordered_map>
#include<deque>

using namespace std;


class LRUCache {
private:
        unordered_map<int,int>M;
        deque<int>D;
        int size;
    public:
    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        auto itr = M.begin();
        itr = M.find(key);
        if(itr != M.end()){
        auto itrDQ = find(D.begin(), D.end(), key);
            if(itrDQ != D.end()){
                D.erase(itrDQ);
                D.push_back(key);
            }else{
                D.push_back(key);
            }
                
            return itr->second;
        }else return -1;
    }
    
    void put(int key, int value) {
//first check if the map has reached it's capacity
//if yes then we have to replace the newly adding element in the place of least recently used key
//else simply insert the key value pair into the map and update the recently used key and update the size of the map
        unordered_map<int,int>::iterator itr;
        itr = M.find(key);
        
        if(M.size()>=size){
//key already exists in the map hence do not update the least recently used key instead replace the key which already exists in the map
            
            if(itr != M.end()){
                M.erase(itr);
                M.insert(pair<int,int>(key,value));
                auto itrDQ = find(D.begin(), D.end(), key);
                if(itrDQ != D.end())D.erase(itrDQ);
                D.push_back(key);
            }
            else if(itr == M.end()){
            int recentlyUsed = D.front();
            D.pop_front();
            itr = M.find(recentlyUsed);
            M.erase(itr);
            M.insert(pair<int,int>(key,value));
            D.push_back(key);
        }
        }
        else{
            itr = M.find(key);
            M.erase(key);
            auto itrDQ = find(D.begin(), D.end(), key);
            if(itrDQ!=D.end())D.erase(itrDQ);
            M.insert(pair<int,int>(key,value));
            D.push_back(key);
        }
         
    
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
