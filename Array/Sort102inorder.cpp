//Program to print the array containing 0's 1's and 2's in sorted order

#include<bits/stdc++.h>
using namespace std;
//Function to sort the array which takes array and array size as its parameter
void sortedArr(int*,int);
int main(){
    //Delecare the variable to store the size of array
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    //Decleare the array variables
    int arr[n];
    //Take the elements of array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Make function call to the function and pass array and its size 
    sortedArr(arr,n);
}

//Sorting function takes array and its size and prints the sorted array
void sortedArr(int arr[], int n){
    //Here we take 3 variables mid , low and high for pointing the array elements
    int low = 0, mid = 0 ,high = n-1;
    //While loop for trversing through the array
    while(mid<=high){
        //We check the current element is 0 or 1 or 2 and do the swapping accordingly
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    //Finally we print the sorted array
    cout<<"Sorted Array of 0's , 1's and 2's : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

