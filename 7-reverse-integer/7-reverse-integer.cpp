class Solution {
public:
    long long int reverse(int x) {
        long long int  reverse =0, r;
    while(x!=0){
        r = x%10;
        reverse = reverse * 10 + r;
        x = x/10;
    }
    if(reverse>2147483647 || reverse < -2147483648){
            return 0;
        }
        else{
            return reverse;
        }
    }
};