/*
        Write a generic program to find the smallest element in an array

*/

#include<iostream>
using namespace std;
template<class T>
T FindSmall(T brr[],int iSize)
{
    int iCnt = 0;
    T Min = brr[iCnt];
    for(iCnt = 1;iCnt < iSize;iCnt++)
    {
        if(brr[iCnt] < Min)
        {
            Min = brr[iCnt];
        }
    }
    return Min;
}
int main()
{
    int size = 5;
    int arr[size];
    int iCnt = 0;
    int iRet = 0;
    cout<<"Enter array element : \n";
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        cin>>arr[iCnt];
    }
    iRet = FindSmall(arr,size);
    cout<<"Smallest element in an array is : "<<iRet<<"\n";
    return 0;
}