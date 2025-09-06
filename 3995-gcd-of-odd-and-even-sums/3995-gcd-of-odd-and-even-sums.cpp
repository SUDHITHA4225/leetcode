class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e=0,o=0;
        for(int i=1;i<n;i++){
            
                e+=(2*i);
            }
        for(int i=1;i<=n;i++)    {
                o+=(2*i-1);
            }
        
        return gcd(e,o);
    }
};