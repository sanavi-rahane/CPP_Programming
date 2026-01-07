/*
    Write generic program to accept N values and count Search last occurrence of spacific value

    Input : 10      20      30      10      30      40      10      40      10
    value to search : 40

    Output : 6
*/


#include<iostream>
using namespace std;
template<class T>
int SearchFirst( T arr[],int iSize,T Value)
{
    int iCnt = 0;
    for(iCnt = iSize; iCnt > 0;iCnt--)
    {
        if(arr[iCnt] == Value)
        {
            return iCnt+1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = 0;
    iRet = SearchFirst(arr,9,40);
    
    if(iRet == -1)
    {
        cout<<"Value is not there..";
    }
    else
    {
        cout<<iRet<<"\n";
    }
    

    return 0;


}
