// Title: Minimum Insertions to Balance a Parentheses String
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/

            else{
                if (i+1 <s.length() && s[i+1] == ')'){
                    i++;
                }
                else{
                    output++;
                }
                if(count1 >0){
                    count1--;
                }
                else{
                    output++;
            }
                count1++;
            if(s[i] == '('){
        int count1 = 0;
        for (int i =0; i<s.length();i++){
        int output = 0;
public:
    int minInsertions(string s) {
class Solution {
