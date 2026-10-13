// Title: Minimum Sum of Squared Difference
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-sum-of-squared-difference/

class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2,
                               int k1, int k2) {
        int n = nums1.size();
        long long k = (long long)k1 + k2;

        vector<int> diff(n);
        int maxDiff = 0;
        long long total = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            maxDiff = max(maxDiff, diff[i]);
            total += diff[i];
        }

        if (total <= k) {
            return 0;
        }

