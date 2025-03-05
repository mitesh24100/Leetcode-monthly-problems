#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, equal, greater;
        for(int num: nums){
            if(num < pivot){
                less.push_back(num);
            }
            else if(num == pivot){
                equal.push_back(num);
            }
            else{
                greater.push_back(num);
            }
        }
        for(int num:equal){
            less.push_back(num);
        }
        for(int num:greater){
            less.push_back(num);
        }

        return less;
    }
};

int main(){
    Solution s;
    return 0;
}
