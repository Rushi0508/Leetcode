class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        if(n<1){
            return 0;
        }
        if(n == 1) return 1 ; 
        int ans = 1;
        int max_ans = 1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]) continue;
            else if(arr[i]==arr[i-1]+1){
                ans = ans + 1;
            }else{
                max_ans = max(max_ans,ans);
                ans = 1;
            }
        }
        max_ans = max(ans,max_ans);
        return max_ans;
    }
};