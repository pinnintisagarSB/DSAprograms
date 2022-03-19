//program to minimize the heights betwwen the largest and smallest given elements
//either by increment or decrement only once

#include<bits/stdc++.h>
using namespace std;
//function to minimize the height 
int minimizeHeight(int*,int,int);
int main(){
    //Decleare the variable to store the size of array
    int n,k,ans;
    cout<<"Enter the size of array : ";
    cin>>n;
    //Decleare an array variable of size n
    int arr[n];
    //Take array input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Decleare the variable k to store k value
    cout<<"Enter the k value : ";
    cin>>k;
    //Make the function call to the minize function
    ans = minimizeHeight(arr,n,k);
    //Print the mimimum difference between max and min elements of array
    cout<<"Mimimized difference of the max and min heights of towers is : "<<ans;
}

//This functions minimizes the difference between maximum and mimimum elements of array
//It takes array and its size and k value as arguments and returns the difference
int minimizeHeight(int arr[],int n,int k){
    sort(arr,arr+n);
    int max_ = arr[n-1]-k, min_ = arr[0]+k,res = max_ - min_;
    for(int i=1;i<n;i++){
        max_ = max(max_,arr[n-i]-k);
        min_ = min(min_,arr[i]+k);
        res = min(res,max_ - min_);
    }
    return res;
}