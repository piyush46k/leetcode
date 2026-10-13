// Title: Maximum Alternating Sum of Squares
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-alternating-sum-of-squares/

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        // for(int  &num: nums){
        //     num = num*num;
        // }
        for(int i=0;i<n;i++){
            nums[i]= nums[i]*nums[i];
        }
        nth_element(begin(nums),begin(nums)+n/2,end(nums));
        return (  
            (accumulate(begin(nums)+n/2,end(nums),0LL))-
            (accumulate(begin(nums),begin(nums)+n/2,0LL))
        );
    }
};
