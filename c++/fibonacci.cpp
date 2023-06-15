#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[3] = {0, 1};
    int firstSequence = arr[0];
    int toN;
    cout<<"How many numbers in the sequence? ";
    cin>>toN;
    vector <int> fibonacci;
    for(int i = 0; i < toN; i++){
       arr[sizeof(arr) / sizeof(arr[0]) - 1] = arr[0] + arr[1];
       arr[0] = arr[1];
       arr[1] = arr[sizeof(arr) / sizeof(arr[0]) - 1];
       fibonacci.push_back(arr[0]);
    }
    cout<<"The first "<<toN<<" are: ";
    fibonacci.insert(fibonacci.begin(), firstSequence);
    fibonacci.pop_back();
    for(auto sequence = fibonacci.begin(); sequence != fibonacci.end(); sequence++)
    {    
        cout<<*sequence<<" ";
    }
    
    
}