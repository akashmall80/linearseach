//Linear Search Brute force
//It is a searching algorithm to find the index of element in a given array
//int arr[]={1,2,0,10,11,9,8,8,7}
//int key=9
//go to each of the index and check if it match 9,if it match we give the index and stop our search if it do not match in our array we give -1
#include<iostream>
using namespace std;
int main()
{

    int arr[]={1,2,0,10,11,9,8,8,7};
    int n=sizeof(arr)/sizeof(int);
    int key=9;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout<<i;
        }
    }
    return 0;
}
