/* 
        Write a generic program to find second largest element
        what if->
    -  all elements same?
    -  negative numbers only?
    -  duplicate max values?
*/
#include<iostream>
using namespace std;
template<class T>
T SecondMax(T *arr,int iSize)
{
    int iCnt = 0;
    T Secmax = 0;
    T max = arr[iCnt];

    //filter to check whether all elements are same or not
    for(iCnt = 0; iCnt < iSize ;iCnt++)
    {
        if(iCnt == iSize-1)
        {
            return -1;
        }
        if(arr[iCnt] != arr[iCnt+1])
        {
            break;
        }
        
    }

    
   
    for(iCnt = 1; iCnt < iSize ;iCnt++)
    {
        
        if(arr[iCnt] > max)
        {
            Secmax = max;
            max = arr[iCnt];
        }
        else if(arr[iCnt] > Secmax)
        {
            Secmax = arr[iCnt];
        }
    }
    return Secmax;
}
int main()
{
    int size = 5;
    int arr[size];
   
    int iRet = 0;
    cout<<"Enter element\n ";
    for(int i = 0;i< size;i++)
    {
        cin>>arr[i];

    }
    
    iRet = SecondMax(arr,size);
    if(iRet == -1)
    {
        cout<<"All elements are same so there is no second largest element\n";
        
    }else
    {
        cout<<"Second largest element is : "<<iRet<<"\n";

    }
    return 0;
}