/*
        Write a program to check whether array is sorted
*/

#include<iostream>
using namespace std;
template<class T>
bool IsSorted(T brr[],int iSize)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize-1;iCnt++)
    {
        if(brr[iCnt] > brr[iCnt+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int size = 5;
    int arr[size];
   
    bool bRet = false;
    cout<<"Enter element\n ";
    for(int i = 0;i< size;i++)
    {
        cin>>arr[i];
    }
    // cout<<"Element if an array is : \n";
    // for(int i = 0;i< 10;i++)
    // {
    //     cout<<arr[i]<<"\t";
    // }
    bRet = IsSorted(arr,size);
    if(bRet == true)
    {
        cout<<"Sorted\n";
    }
    else
    {
        cout<<"Not Sorted \n";
    }
    return 0;
}