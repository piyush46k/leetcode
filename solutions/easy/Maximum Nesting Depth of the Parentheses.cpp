// Title: Maximum Nesting Depth of the Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int max=0;
        for(int i =0;i<s.length();i++){
            if (s[i]== '('){
                depth +=1;
                if (depth >max){
                    max=depth;
                }
            }
            if(s[i] == ')'){
                depth -=1;
            }

        }
        return max;
    }
};
