int searchInsert(int* nums, int numsSize, int target){
    int low = 0, high = numsSize-1;
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(target==nums[mid]){
            return mid;
        }
        else if(target>nums[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}