// Program to print the mimimum number of jumps needed to reach end of an array from start.

#include<bits/stdc++.h>
using namespace std;
//Function to find minimum number of jumps required to reach end
int minJumps(int*,int);
int main(){
    //Decleare variable to store size of array and answer
    int n,ans;
    cout<<"Enter the size of array : ";
    cin>>n;
    //Decleare variable to take array input
    int arr[n];
    //Take array input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Make function call to store answer
    ans = minJumps(arr,n);
    //Print the answer
    cout<<"Minimum number of jumps required are : "<<ans;
}

//Function to return minimum number of jumps required to reach end,
//it takes array and size as arguments and return the jumps
int minJumps(int arr[],int n){
    //We decleare 3 variables jumps,Rjump,cJump to store the initial jumps
    int jumps = 1, Rjump = arr[0],cJump = arr[0];
    //If n is 1 we return 0
    if (n == 1){
        return 0;
    }
    //If first element is 0 return -1
    else if(arr[0]==0){
        return -1;
    }
    //Run For loop to traverse the array
    for(int i=1;i<n;i++){
        //If we reach last element return the jumps taken
        if(i==n-1){
            return jumps;
        }
        //Now we Find the maximum jump we can take from current position
        Rjump = max(Rjump,i+arr[i]);
        //We decrement the cJump value till it becomes 0 as we compare all the elements
        cJump--;
        //Now when the cJump becomes 0 we enter into it
        if(cJump==0){
            //Since there are no more steps left we have to increment the jumps 
            jumps++;
            //Now we check if the jump taken is more than the index and return -1 as we can't go out of range
            if(i>=Rjump){
                return -1;
            }
            //Else we update the cJump value with remaining steps in array 
            cJump = Rjump - i;
        }
    }
    //If it is not possible we return -1
    return -1;
}