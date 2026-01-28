/* 
        Write a generic program to find second smallest element
        what if->
    -  all elements same?
    -  negative numbers only?
    -  duplicate max values?
*/
#include<iostream>
using namespace std;
template<class T>
T SecondSmall(T *arr,int iSize)
{
    int iCnt = 0;
    T SecSmall = 0;
    T min = arr[iCnt];

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
        
        if(arr[iCnt] < min)
        {
            SecSmall = min;
            min = arr[iCnt];
        }
        else if(arr[iCnt] < SecSmall)
        {
            SecSmall = arr[iCnt];
        }
    }
    return SecSmall;
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
    
    iRet = SecondSmall(arr,size);
    if(iRet == -1)
    {
        cout<<"All elements are same so there is no second smallest element\n";
        
    }else
    {
        cout<<"Second largest element is : "<<iRet<<"\n";

    }
    return 0;
}