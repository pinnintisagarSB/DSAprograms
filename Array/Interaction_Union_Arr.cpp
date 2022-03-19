//Program to Print the Intersection and Union of the two arrays

#include<bits/stdc++.h>
using namespace std;
//Function to find Intersection of two arrays
void IntersectionOfArr(int*,int*,int,int);
//Function to find Union of two arrays
void UnionOfArr(int*,int*,int,int);
int main(){
    //Decleare two variables to store size's of the array
    int n,m;
    cout<<"Enter the size of first array : ";
    cin>>n;
    cout<<"Enter the size of second array : ";
    cin>>m;
    //Declare two array variables
    int arr1[n],arr2[m];
    //Take array elememts input
    cout<<"Enter the elements of 1st array :\n";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of 2nd array :\n";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    //Make function call's to Intersection function and Union function
    IntersectionOfArr(arr1,arr2,n,m);
    UnionOfArr(arr1,arr2,n,m);
}

//This function takes the arguments as two arrays and there sizes and prints the Intersection of two arrays
void IntersectionOfArr(int arr1[], int arr2[] ,int n,int m){
    cout<<"Intersection of two array is :\n";
    //We decleare two sets of integer type
    set<int> s1;
    set<int> s2;
    //We store all the values into these sets
    for(int i=0;i<n;i++){
       s1.insert(arr1[i]);
    }
    for(int j=0;j<m;j++){
        s2.insert(arr2[j]);
    }
    //We create an iterator for our sets to find the intersection of both the arrays with the following conditions
    for(auto it = s2.begin();it!=s2.end();it++){
        if(s1.find(*it)!=s1.end()){
            cout<<*it<<" ";
        }
    }
}

//This function takes the arguments as two arrays and there sizes and prints the Union of two arrays
void UnionOfArr(int arr1[], int arr2[] ,int n,int m){
    cout<<"Union of two array is:\n";
    //We decleare a set of integer type
    set<int> s;
    //We store all the values into this sets it does'nt store duplicate values
    for(int i=0;i<n;i++){
       s.insert(arr1[i]);
    }
    for(int j=0;j<m;j++){
        s.insert(arr2[j]);
    }
    //We create an iterator for our sets to find the intersection of both the arrays with the following conditions
    set<int> :: iterator it;
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}