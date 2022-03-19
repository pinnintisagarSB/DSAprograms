// Program to print the Maximum Sum of contiguous Sub array(Kadane's Algorithm)

#include<bits/stdc++.h>
using namespace std;
//Function returns the max sum of contiguous sub array
int kadanesAlgorithm(int*,int);
int main(){
    //Decleare a variable to store the size of array
    int n,ans;
    cout<<"Enter the size of array : ";
    cin>>n;
    //Decleare the array of size n
    int arr[n];
    //Take array elements input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Make function call to the Function which returns the max sum of sub array 
    ans = kadanesAlgorithm(arr,n);
    //Prrint the maximum sum of contiguous sub array
    cout<<"Maximum sum of contiguous sub array is : "<<ans;
}

//This function finds the maximum sum by taking array and its size and returns the max sum
int kadanesAlgorithm(int arr[],int n){
    //We decleare maxsum and cursum to store the values
    int maxsum = INT_MIN,cursum = 0;
    //We use for loop to traverse through the array and work according to the conditions
    for(int i=0;i<n;i++){
        cursum+=arr[i];
        //This stores the maximum of two values
        maxsum = max(maxsum,cursum);
        //If the current sum becomes negative it makes it 0
        if(cursum<0){
           cursum = 0;
        }
    }
    //Finally we return the Maximum sum value 
    return maxsum;
}