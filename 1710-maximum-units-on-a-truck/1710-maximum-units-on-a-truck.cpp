class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& arr, int truckSize) {
        sort(arr.begin(),arr.end(),[] (const std::vector<int> &a, const std::vector<int> &b)
          {
              return a[1] > b[1];
          });
        int n = arr.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            if(arr[i][0]<=truckSize){
                truckSize = truckSize - arr[i][0];
                ans = ans + (arr[i][0]*arr[i][1]);
            }// ((1,3),(2,2),(3,1))
            else{
                
                ans = ans + (truckSize*arr[i][1]);
                truckSize = 0;
            }
        }
        return ans;
    }
};