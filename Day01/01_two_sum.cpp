// LeetCode 1: Two Sum
// Given an array of integers, return indices of the two numbers that add up to target.
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> seen; // value -> index
    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];
        if (seen.count(need)) return {seen[need], i};
        seen[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2,7,11,15};
    auto res = twoSum(nums, 9);
    cout << res[0] << " " << res[1] << endl; // 0 1
}
