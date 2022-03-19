/* Program to sort the array the containg positive and 
negative elements as all negative to one side and all positive to one side */

#include<bits/stdc++.h>
using namespace std;
//Function to sort the array
void sortArr(int* , int);
int main(){
    //Decelare the variable to store size of array 
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    //Decleare array variable
    int arr[n];
    //Take array elements input 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Make function call to the sortArr function
    sortArr(arr,n);
}

//Function takes the array and size of array as input and prints the sorted array 
void sortArr(int arr[], int n){
    //Decleare the variable mid , low and high for pointing the array elements
    int mid = 0, low = 0, high = n-1;
    //While loop for traversing the array and doing operations accordingly
    while(mid<=high){
        if(arr[mid]>0){
            swap(arr[mid],arr[high]);
            high--;
        }
        else if(arr[mid]<0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else{
            mid++;
        }
    }
    //Print the sorted array
    cout<<"Sorted Array is :\n"; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}