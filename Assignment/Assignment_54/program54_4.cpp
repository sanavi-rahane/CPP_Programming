/*
        Write to program to reverce an array


*/


#include<iostream>
using namespace std;
template<class T>
void Reverce(T arr[],int size)
{
   
    int i = 0,j =0;
    T temp = 0;
    for(i = 0,j = size-1;i != j && j > i;i++,j--)
    {
        
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp; 
       
    }
    
}
int main()
{
    int size = 2;
    int arr[size];
    int iCnt = 0;
    

    cout<<"Enter element \n";
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        cin>>arr[iCnt]; 
    }
    cout<<"array before reverce\n";
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        cout<<arr[iCnt]<<"\t"; 
    }
    Reverce(arr,size);
    cout<<"array after reverce\n";
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        cout<<arr[iCnt]<<"\t"; 
    }

    return 0;
}