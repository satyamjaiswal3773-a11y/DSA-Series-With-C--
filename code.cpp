#include <iostream>
#include <vector>       // for using vector be must include this namespace
using namespace std;

int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int val : nums){
        ans ^= val;
    }
    return ans;
}

int main(){
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << singleNumber(nums) << endl;
    return 0;
}
