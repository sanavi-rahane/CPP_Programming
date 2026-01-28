/*
    Write a generic program to search a value in an array

*/

#include<iostream>
using namespace std;
template<class T>
int Search(T arr[],int size,T Value)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        if(arr[iCnt] == Value)
        {
            return iCnt;
        }
    }
    return -1;
}
int main()
{
    int size = 3;
    int arr[size];
    int iCnt = 0;
    int iRet = -1;

    cout<<"Enter element \n";
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        cin>>arr[iCnt]; 
    }
    iRet = Search(arr,size,10);
    if(iRet == -1)
    {
        cout<<"Value is not presnet\n";
    }
    else
    {
        cout<<"Value is fount at position : "<<iRet+1<<"\n";
    }
    

    return 0;
}