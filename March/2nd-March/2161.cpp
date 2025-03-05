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
    vector<int> v = {-3,4,3,2};
    vector<int> answer = s.pivotArray(v, 2);
    for(int num: answer){
        std::cout<<num<<endl;
    }
}
