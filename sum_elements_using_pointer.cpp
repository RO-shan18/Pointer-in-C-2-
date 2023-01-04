/* Programmer =  Roshan Mehra
Purpose = Q2 - Write a program to find the sum of all the elements of an array. Use pointers to traverse
the array. The first line of the input contains the size of the array.
The second line of input contains the elements of the array.
Date = 21/12/2022  */

#include<iostream>
using namespace std;

int Sum_of_elements(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += *(arr+i);
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Sum of all elements of an array: "<<Sum_of_elements(arr, n);
    return 0;
}