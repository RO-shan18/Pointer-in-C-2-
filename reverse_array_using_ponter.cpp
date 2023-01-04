/* Programmer =  Roshan Mehra
Purpose = Q3 - Write a program to traverse the array in the reverse order using pointers.
The first line of the input contains the size of the array.
The second line of input contains the elements of the array.
Date = 21/12/2022  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int *ptr = arr;
    for(int i=0; i<n; i++){
        cin>>*ptr;
        ptr++;
    }

    ptr = arr;
    for(int i=n-1; i>=0; i--){
        cout<<*ptr+i<<" ";
    }
    return 0;
}