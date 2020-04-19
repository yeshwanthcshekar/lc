
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    int max =0, least = 0, temp = 0, max_pos=0, least_pos=1;
        if(stones.size()==0) return 0;
        else if(stones.size()==1) return stones[0];
        while(stones.size()>1){
        max_pos=0;
        least_pos=1;
        max = stones[0];
        least = stones[1];
        if(max<least) {
            temp = max;
            max = least;
            least = temp;
            max_pos=1;
            least_pos=0;
    }
        for(int i = 0; i<stones.size(); i++){
            if(max<stones[i]){
                least = max;
                max = stones[i];
                least_pos = max_pos;
                max_pos=i;
            }
            else if(least<max && least<stones[i] && max_pos!=i){
                least = stones[i];
                least_pos=i;
            }
        }
        if(max!=least){
            stones[least_pos] = max-least;
            stones.erase(stones.begin()+max_pos);
        }else {
            stones.erase(stones.begin()+max_pos);
            stones.erase(stones.begin()+(least_pos-1));
        }
    }
    if(stones.size()==0)return 0;
    else return stones[0];
    }
};
