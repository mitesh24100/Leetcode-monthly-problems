#include<iostream>
using namespace std;

class Solution {
public:
    bool checkPowersOfThree(int n) {
        // What we are doing here is dividing the number by 3
        // To convert it into base 3 (Just like we divide by 2 to convert to base 2)
        // So, number of possible remainders can be 0,1,2
        // So, when we get a remainder of 2, the only way we can get it represented in power of 3 is 3^0 + 3^0, that means we are using power(0) twice, which violates the question
        // So we return false
        // Else we return true, Simple
        
         
        while (n > 0){
            if(n % 3 == 2)
                return false;
            
            n = n/3;
        }
        return true;
    }
};

int main(){
    Solution s;
    std::cout<<s.checkPowersOfThree(21)<<endl;
}
