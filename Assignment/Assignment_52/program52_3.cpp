/*
   Write generic program to accept N value from user user and return addition of that values.
*/

#include<iostream>
using namespace std;
template<class T>
T Add(T arr[],int iSize)
{
    int iCnt = 0;
    T Sum = arr[0] ;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        Sum = Sum + arr[iCnt];
    }
    return Sum;
}
int main()
{
    int arr[] = {1,2,3,4};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = 0;
    iRet = Add(arr,4);
    cout<<"Addition of Elements : "<<iRet<<"\n";

    float fsum = 0.0f;
    fsum = Add(brr,4);
    cout<<"Addition of Element : "<<fsum<<"\n";

    return 0;
}