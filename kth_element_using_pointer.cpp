/* Programmer =  Roshan Mehra
Purpose = Q1 -Write a program to print the kth element of an array using pointers.
The first line of the input contains the size of the array and the value of k.
The second line of input contains the elements of the array. You can assume that 0 <= k < size
of the array.
Date = 21/12/2022  */

#include<iostream>
using namespace std;

/*int find_kth_element(int *arr, int n, int k){
    for(int i=0; i<n; i++){
        if(i == k){
            return *(arr + i);
        }
    }
}*/

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int *ptr = (arr+m-1);
    cout<<*ptr;
    // cout<<"Kth element is: "<<find_kth_element(arr, n, m);
    return 0;
}