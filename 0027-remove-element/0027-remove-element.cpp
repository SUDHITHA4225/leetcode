class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int k = 0; // Counter for non-val elements  

          for (int i = 0; i < nums.size(); i++) {  
                  // If the current element is not equal to val  
                          if (nums[i] != val) {  
                                      // Move it to the front (index k) and increment k  
                                                  nums[k] = nums[i];  
                                                              k++;  
                                                                      }  
                                                                          }  

                                                                              return k; 
    }


};