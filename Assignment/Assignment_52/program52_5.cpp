/*
    Write generic program to accept N values from user and return smallest values.
*/

#include<iostream>
using namespace std;
template<class T>
T Min(T arr[],int iSize)
{
    T Min = arr[0];
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < Min)
        {
            Min = arr[iCnt];
        }
    }
    return Min;
}
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.5,3.7,9.8,8.7};

    
    cout<<Min(arr,5)<<"\n";
    cout<<Min(brr,4);

   

    return 0;
}