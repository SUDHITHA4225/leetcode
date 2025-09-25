 int reverse(int x){
long long r,rev=0;
while(x!=0){
    r=x%10;
    rev=rev*10+r;
    x=x/10;
}
long long int z=2147483647;
if(rev<z && rev>-z){
return rev;
}
else{
    return 0;
}
}