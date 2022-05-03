class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> diff;
        vector<int> v(nums.size());
        v=nums;
        int c;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=nums[i])
                diff.push_back(i);
        }
        c = diff.size();
        if(diff.empty())
            return 0;
        return diff[c-1] - diff[0] +1;
    }
};