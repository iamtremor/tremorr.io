#include <iostream>

using namespace std;
int main(){

    
    int sizeOfArrays;
    cout<<"Enter the length of the arrays: ";
    cin>>sizeOfArrays;
    int arr1[sizeOfArrays];
    int arr2[sizeOfArrays];
    int newArray[sizeOfArrays]; 
    for(int i = 0; i < sizeOfArrays; i++)
    {
        cout<<"Enter a value for arr1: ";
        cin>>arr1[i];
    }
    cout<<"\n";
    for(int i = 0; i < sizeOfArrays; i++)
    {
        cout<<"Enter a value for arr2: ";
        cin>>arr2[i];
    }
    for(int i = 0; i < int(sizeof(arr1) / sizeof(arr2[0])); i++){
        newArray[i] = arr1[i] + arr2[i];
    }
    for(int i = 0; i < int(sizeof(arr1) / sizeof(arr2[0])); i++)
    {
        cout<<newArray[i]<<" ";
    }


}