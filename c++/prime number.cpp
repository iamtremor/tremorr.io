#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> arr;
bool isPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }
    int root_n = sqrt(n);
    for(int i = 2; i <= root_n; i++){
        //dout<< i<<endl;
        if(n % i == 0)
        {
            return false;
        }
        
    }
    return true;
}

bool displayPrime(int start, int end)
{
    for(int i = start; i <= end; i++)
    {
        if(isPrime(i)){
            arr.push_back(i);
        }
    }
    return true;
}
bool checkPerfect(int n)
{
    int calc;
    int arr_size = arr.size();
    vector <int> pn;
    int asd = sizeof(pn) / sizeof(pn);

    for(auto &  j : arr){
        for(int i = 0; i <= pow(arr_size, 2); i++)
        {
            if((pow(2,i) - 1) == j)
            {  
                calc = pow(2,i-1) * (pow(2,i) - 1);
                pn.push_back(calc);
            }
        }
    }
    bool exists = false;
    
    for(auto & i : pn)
    {
        if(i == n)
        {
            exists = true;
            break;
            return i;
        }
    }
    if(!exists)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
int main()
{
    
    int n;
    int start = 1;
    int end = 1000;
    displayPrime(start, end);

    cout<<"Enter a number to check: ";
    cin>>n;
    // for(int i = 0)

    
    if(checkPerfect(n))
    {
        cout << n <<" is a perfect number";
    }
    else
    {
        cout << n <<" isn't a perfect number";
    }
    
}
