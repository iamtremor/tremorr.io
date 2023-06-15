#include <iostream>
using namespace std;

int main()
{
    int l;
    cout<<"How many items? ";
    cin>>l;
    int temp;
    char arr[l];
    
    for(int i = 0; i < l; i++)
    {
        cout<<"Enter char: ";
        cin>>arr[i];
    }
    cout<<"The reversed list is:";
    int rl = (sizeof(arr) / sizeof(arr[0]));
    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])) - 1; i++)
    {
        temp = arr[i];
        arr[i] = arr[(sizeof(arr) / sizeof(arr[0])) - i - 1];
        arr[(sizeof(arr) / sizeof(arr[0])) - i - 1] = temp;
    }
    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cout<<arr[i];
    }
    
}
