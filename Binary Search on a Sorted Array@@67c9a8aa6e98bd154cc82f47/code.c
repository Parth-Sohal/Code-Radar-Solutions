#include<stdio.h>

int binarySearch(int arr[] , int n ,int target){

    int low = 0;
    int high = n - 1 ;
    int ans = -1;
    while(low<=high){
        int mid = (low+(high-low))/2;
        if(arr[mid] == target){
            ans = mid;
            return ans;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}