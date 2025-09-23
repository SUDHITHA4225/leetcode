class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;  // Increment and return if it's not 9
                return digits;
            }
            digits[i] = 0;  // If it's 9, set to 0 and continue
        }
        
        // If all digits were 9, insert 1 at the beginning
        digits.insert(digits.begin(), 1);
        return digits;

    }
};