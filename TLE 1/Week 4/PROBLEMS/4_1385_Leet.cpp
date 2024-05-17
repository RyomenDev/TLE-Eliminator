// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

// 1385. Find the Distance Value Between Two Arrays

class Solution {
    bool solve(int num, vector<int>& v, int d) {
        for (auto i : v) {
            if (abs(i - num) <= d)
                return 0;
        }
        return 1;
    }

public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        for (auto i : arr1) {
            ans += solve(i, arr2, d);
        }
        return ans;
    }
};