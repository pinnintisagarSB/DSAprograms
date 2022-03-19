//Program to rotate the array by 1

#include<bits/stdc++.h>
using namespace std;
//Function to rotate the array by 1
void rotateArrby1(int*,int);
int main(){
    //Decleare the variable to store size of array
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    //Decleare array of size n
    int arr[n];
    //Take the array elements input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotateArrby1(arr,n);
}

//This function is used to rotate array by one it takes arguments as array and its size and prints the array after rotation
void rotateArrby1(int arr[],int n){
    for(int i=n-1;i>0;i--){
        swap(arr[i],arr[i-1]);
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}