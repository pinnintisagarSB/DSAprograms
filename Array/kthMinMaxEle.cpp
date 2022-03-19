//program to find the kth max/min element of the array

#include<bits/stdc++.h>
using namespace std;
//Here we take two functions for returning the kth max or min element of the array
int kthMaxFinder(int* , int, int);
int kthMinFinder(int* , int, int);
int main(){
    //We decleare variables to store size of array 
    //K for kth position
    //ch for storing choice
    //ans for storing the answer that is min and max element at kth position
    int n, ch, ans,k;
    cout<<"Enter the Elements of array : ";
    cin>>n;
    //Decleare the array variable
    int arr[n];
    //Take the array elements 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Kth postion value";
    cin>>k;
    //Give input as per your choice to print min or max element at kth position
    cout<<"\nEnter 1 for Max element at Kth position \n";
    cout<<"Enter 2 for Min element at Kth position \n";
    cin>>ch;
    if(ch==1){
        //Function call for kth max element 
       ans = kthMaxFinder(arr,n,k);
       //Print the answer
       cout<<"\nMax value at "<<k<<"th position is "<<ans;
    }
    else{
        //Function call for kth min element
        ans = kthMinFinder(arr,n,k);
        //Print the answer
        cout<<"\nMin value at "<<k<<"th position is "<<ans;
    }
}

//Function for kth Max element it takes array input, size of array and kth position
int kthMaxFinder(int arr[],int n,int k){
    //We use sort in-built function to sort the array
    sort(arr,arr+n);
    //return the kth max element
    return arr[n-k];
}

//Function for kth Min element it takes array input, size of array and kth position
int kthMinFinder(int arr[],int n,int k){
    //We use sort in-built function to sort the array
    sort(arr,arr+n);
    //return the kth min element
    return arr[k-1];
}