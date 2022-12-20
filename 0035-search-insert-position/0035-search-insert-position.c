int searchInsert(int* nums, int numsSize, int target){
    int n = numsSize;
    if(target>nums[n-1]){
        return n;
    }
    if(target<=nums[0]){
        return 0;
    }
    int s=0,e=n-1,mid;
    while(s<=e){
        mid = (s+e)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return s;
}