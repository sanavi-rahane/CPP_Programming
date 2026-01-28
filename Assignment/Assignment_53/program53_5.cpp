/*
        Write a genreric program to change all occurance of the value
*/

#include<iostream>
using namespace std;
template<class T>
void ChangeOcuurance(T arr[],int size,T oldValue,T newValue)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        if(arr[iCnt] == oldValue)
        {
            arr[iCnt] = newValue;
        }
    }
}
int main()
{
    int size = 3;
    int arr[size];
    int iCnt = 0;

    cout<<"Enter element \n";
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        cin>>arr[iCnt]; 
    }
    ChangeOcuurance(arr,size,10,99);
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        cout<<arr[iCnt]<<"\t"; 
    } 


    return 0;
}