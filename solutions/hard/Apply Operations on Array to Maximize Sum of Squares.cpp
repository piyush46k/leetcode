// Title: Apply Operations on Array to Maximize Sum of Squares
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/apply-operations-on-array-to-maximize-sum-of-squares/

class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        int MOD = 1e9 + 7;
        vector<int> count(32,0);
        for (int &num:nums){
            for(int b=0;b<32;b++){
                if(num & (1<<b)){
                    count[b]++;
                }
            }
        }
        long long result=0;
        while(k--){
            long long curr=0;
            for(int b =0;b<32;b++){
                if(count[b]>0){
                    count[b]--;
                    curr=(curr|(1<<b));
                }
            }
