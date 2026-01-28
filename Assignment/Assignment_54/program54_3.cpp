/*
        Write to program to find sum of all odd numbers


*/


#include<iostream>
using namespace std;
template<class T>
T OddSum(T arr[],int size)
{
    T Sum = 0;
    int iCnt = 0;

    for(iCnt = 0;iCnt < size;iCnt++)
    {
        if(arr[iCnt] % 2 != 0)
        {
            Sum = Sum + arr[iCnt];
        }
    }
    return Sum;
}
int main()
{
    int size = 3;
    int arr[size];
    int iCnt = 0;
    int iSum = 0;

    cout<<"Enter element \n";
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        cin>>arr[iCnt]; 
    }
    iSum = OddSum(arr,size);
    
    cout<<"Sum of all odd element is : "<<iSum<<"\n";
    
    

    return 0;
}