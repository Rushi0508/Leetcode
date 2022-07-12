class Solution {
public:
    
    bool recu(vector<int>& nums,vector<int>& sides,int ind){
        //Base Case 
        if(ind == nums.size()){
            if(sides[0]==0 and sides[1]==0 and sides[2]==0 and sides[3]==0)
                return true;
            return false;
        }
        
        for(int j=0;j<4;j++){
         if(nums[ind]>sides[j])  continue;
         sides[j]-=nums[ind];
         if(recu(nums,sides,ind+1))  return true;
         sides[j]+=nums[ind];
        }
        return false;
    }
    
    
    bool makesquare(vector<int>& nums) {
       if(nums.size()<4)
           return false;
        
        int sum =0;
        for(int i=0;i<nums.size();i++)  sum+=nums[i];
        
        if(sum%4!=0)    return false;
        int side = sum/4;
        vector<int>sides = {side,side,side,side};
        sort(nums.begin(),nums.end(),greater<int>());
        return recu(nums,sides,0);
    }
};