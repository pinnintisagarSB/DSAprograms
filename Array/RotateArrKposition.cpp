//Program to rotate array by k positions

#include<bits/stdc++.h>
using namespace std;
//Function to rotate array by k positions
void rotateArrKposition(int*,int,int);
//Function to reverse the array
void reverseArr(int*,int,int);
int main(){
    //Decleare the variable to store size of array
    int n,k;
    cout<<"Enter the size of array : ";
    cin>>n;
    //Decleare array of size n
    int arr[n];
    //Take array elements input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the k value : ";
    cin>>k;
    rotateArrKposition(arr,n,k);
}

//This function is used to rotate the array by k positions and print the array it takes array and its size and k value
void rotateArrKposition(int arr[],int n,int k){
    //Here we rotate the first half of the array till kth position and from kth to last position and 
    //finally reverse the whole array
    reverseArr(arr,0,n-k-1);
    reverseArr(arr,n-k,n-1);
    reverseArr(arr,0,n-1);
    //Print the rotated array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//This function is used to reverse the array it takes array and starting and ending positions
void reverseArr(int arr[],int start,int end){
    //while loop is for traversing through the array till the condition is true
      while(start<end){
          //Here we swap the staring and ending elements and increment start value and decrement end value 
          swap(arr[start],arr[end]);
          start++;
          end--;
      }
}
