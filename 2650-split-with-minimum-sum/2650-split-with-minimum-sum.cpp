class Solution {
public:
    int splitNum(int num) {
        vector<int>ele;
        while(num!=0){
            int r=num%10;
            ele.push_back(r);
            num=num/10;
        }
        sort(ele.begin(),ele.end());
        int a=0,b=0;
        for(int i=0;i<ele.size();i++){
            if(i%2==0) a=a*10+ele[i];
            else b=b*10+ele[i];
        }
        return a+b;
    }
};