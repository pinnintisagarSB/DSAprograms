//Program to reverse the array
 
#include<iostream>
using namespace std;
// reverseArr function decleration 
void reverseArr(int*,int);
int main(){
    int n;
    //Taking n as input for size of array
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    //Taking array values input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Function call to reverseArr to reverse the array and print
    reverseArr(arr,n);
    return 0;
}

//reverseArr function to reverse the array
void reverseArr(int arr[],int n){
    int start = 0;            //start value for new array 
    int end = n-1;            //end value for old array which is to be reversed 
    int a[n];
    // while loop to reverse the array by starting new array from start and old array from end and assigning 
    while(end>=0){           
        a[start] = arr[end];
        start++;
        end--;
    }
    //Printing the reverse array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}