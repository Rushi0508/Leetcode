class Solution {
public:
    int candy(vector<int>& arr) {
        int n=arr.size();
        if(n == 1) return 1 ;
        else if(n == 2){
            if(arr[0] != arr[1]){
                return n + 1 ;
            }else{
                return n;
            }
        }
        vector<int> candies(n,1);
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                candies[i] = candies[i-1]+1; // 1 3 4 5 2
                                             // 1 2 3 4 1
            }
        }
        for(int i=n-1;i>0;i--){
            if(arr[i]<arr[i-1] && candies[i-1]<=candies[i]){
                candies[i-1] = candies[i]+1;
            }
        }
        int sum=0;
        for(auto e: candies){
            sum+=e;
        }
        return sum;
    }
};