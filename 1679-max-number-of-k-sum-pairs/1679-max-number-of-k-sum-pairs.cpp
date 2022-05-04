class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // map<int,int>hash;
        // for(int i = 0; i < nums.size();i++){
        //     hash[nums[i]]++;
        // }
        // int count = 0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i] + nums[j] == k){
//                     count++;
//                     nums[i] = 2567;
//                     nums[j] = 2567;
//                     break;
//                 }
//             }
//         }
//         for(auto it:hash){
//             auto ff = hash.find(k - it->first);
//             while(ff != hash.end() && ){
                
//             }
//         }
        
        int i = 0 ;
        int j = nums.size() - 1 ;
        int count = 0;
        sort(nums.begin(),nums.end());
        while(i < j){
            if(nums[i] + nums[j] == k){
                count++;
                i++;
                j--;
            }else if(nums[i] + nums[j] < k){
                i++;
            }else{
                j--;
            }
        }
        return count;
        
        
      
    }
};