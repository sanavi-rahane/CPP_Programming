/*
      Write a generic program to perform Division of two numbers
*/

#include<iostream>
using namespace std;
template<class T>
T Division(T No1, T No2)
{
    T Result = 0;
    Result = No1 / No2;
    return Result;
}
int main()
{
    float fValue1 = 12.0f, fValue2 = 2.0f,fRet = 0.0f;

    int iValue1 = 12,iValue2 = 2,iRet = 0;

    iRet = Division(iValue1,iValue2);
    cout<<"Division if integer is: "<<iRet<<"\n";

    fRet = Division(fValue1,fValue2);
    cout<<"\nDivision of float is : "<<fRet<<"\n";
    return 0;
}