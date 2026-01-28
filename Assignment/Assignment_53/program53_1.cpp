/*
        Write generic program to copy one array into another
*/
#include<iostream>
using namespace std;
template<class T>
void CopyArray(T src[],T dest[],int iSize)
{
    int i = 0;
    for(i = 0;i< iSize;i++)
    {
        dest[i] = src[i];
        
    }
    
}
int main()
{
    int arr[]={10,20,30};
    int dest[3];
     CopyArray(arr,dest,3);
    int i = 0;
    for(i = 0;i < 3;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nDestination Array Copy of Source array\n";
    for(i = 0;i < 3;i++)
    {
        cout<<dest[i]<<"\t";
    }


    return 0;
}