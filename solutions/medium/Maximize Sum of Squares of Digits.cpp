// Title: Maximize Sum of Squares of Digits
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/

        string output(nines,'9');
        
        if(rem > 0){
            output.push_back(rem + '0');
        }

        output.append(num-output.length() , '0');
        return output;
        
public:
    string maxSumOfSquares(int num, int sum) {
        int nines = sum/9;
        int rem = sum % 9;
        if(sum>num*9){
            return "";
        }
    }
class Solution {
        
};
