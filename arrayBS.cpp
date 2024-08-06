#include<bits/stdc++.h>
using namespace std;
    int binarySearch(int arr[],int low,int high,int number){
        while(low<=high){
            int mid = (high+low)/2;
            if(arr[mid]==number)return mid;
            if(number>arr[mid]){
              low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
    int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int number = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, number);
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}
