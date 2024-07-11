#include <bits/stdc++.h>


    while(i<j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
    while(i<j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j >= low +1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}