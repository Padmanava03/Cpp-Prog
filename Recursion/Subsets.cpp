#include<iostream>
#include<vector>
using namespace std;

void printSubsets(vector<int>& nums, int i, vector<int>& ans){
    if(i == nums.size()){
        for(int x : ans){
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    //inclusion
    ans.push_back(nums[i]);
    printSubsets(nums, i+1, ans);

    //exclusion
    ans.pop_back();
    printSubsets(nums, i+1, ans);
}

int main(){
    vector<int> nums = {1, 2, 3};
    vector<int> ans;
    printSubsets(nums, 0, ans);
    return 0;
}