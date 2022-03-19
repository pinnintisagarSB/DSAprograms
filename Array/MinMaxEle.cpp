//Program to find the Min and Max element of the array

#include<iostream>
using namespace std;
//create structure for (min and max) values
struct Pair{
    int min;
    int max;
};

// create function MinMaxfinder to find min and max
Pair MinMaxFinder(int*,int);
int main(){
    int n;
    cout<<"Enter the size of array : ";

    //Take size of array as input
    cin>>n;
    int arr[n];

    //Take array values as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Make function call to MinMaxFinder function it stores struct object
    struct Pair ans = MinMaxFinder(arr,n);

    //Print the values of min and max from the object returned
    cout<<"Minimum value = "<<ans.min<<"\n";
    cout<<"Maximum value = "<<ans.max<<"\n";
    return 0;
}

//Function for Min and Max values Finding and returns struct object with vales
Pair MinMaxFinder(int a[],int n){
    struct Pair p;

    //Intialize min and max values as 0th index value
    p.min = a[0],p.max = a[0];

    //For loop to find values bu comparing the elements of array and update the values
    for(int i=1;i<n;i++){
        if(a[i]>p.max){
            p.max = a[i];
        }
        if(a[i]<p.min){
            p.min = a[i];
        }
    }
    
    //return the struct object p
    return p;
}