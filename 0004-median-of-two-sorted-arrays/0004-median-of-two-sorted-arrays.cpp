class Solution {
public:
    double findMedianSortedArrays(vector<int>& array1, vector<int>& array2) {
        int n = array1.size();
        int m = array2.size();
        int arr[n+m];
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(array1[i]<array2[j]){
                arr[k]=array1[i];
                k++;i++;
            }else{
                arr[k]=array2[j];
                k++;j++;
            }
        }
        while(i<n){
            arr[k]=array1[i];
            k++;i++;
        }
        while(j<m){
            arr[k]=array2[j];
            k++;j++;
        }
        int len = n+m;
        if(len%2==0){
            double ans = arr[len/2] + arr[len/2 - 1];
            return ans/2;
        }else{
            return arr[len/2];
        }
        return 0;
    }
};