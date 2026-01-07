/*
    Write generic program to accept N values and count frequency of any spacific value

    Input : 10      20      30      10      30      40      10      40      10
    value to check Frequncy : 10

    Output : 4
*/


#include<iostream>
using namespace std;
template<class T>
int Frequency( T arr[],int iSize,T Value)
{
    int iCount = 0;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(arr[iCnt] == Value)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    // int arr[] = {10,20,30,10,30,40,10,40,10};
    // int iRet = 0;
    // iRet = Frequency(arr,9,10);
    // cout<<".."<<iRet<<"\n";

    int iSize = 0,Value = 0;
    int arr[iSize];

    cout<<"Enter Size : \n";
    cin>>iSize;

    
    cout<<"Enter Elements : \n";
    for(int iCnt = 0;iCnt < iSize;iCnt++)
    {
        cin>>arr[iCnt];
    }
    cout<<"Enter value to count Frequency : \n";
    cin>>Value;
    cout<<"Count"<<Frequency(arr,iSize,Value);


}
