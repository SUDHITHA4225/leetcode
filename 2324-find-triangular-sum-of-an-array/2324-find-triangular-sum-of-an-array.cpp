class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        int s=0, e=n-1;
        while(s<e) {
            for(int i=s; i<e; i++) {
                nums[i] = (nums[i]+nums[i+1])%10;
            }
            e--;
        }
        return nums[0];
    
    }
};