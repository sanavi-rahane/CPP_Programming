/*
      Write a generic program to perform substraction of two numbers
*/

#include<iostream>
using namespace std;
template<class T>
T Substraction(T No1, T No2)
{
    T Result = 0;
    Result = No1 - No2;
    return Result;
}
int main()
{
    float fValue1 = 20.0f, fValue2 = 10.0f,fRet = 0.0f;

    int iValue1 = 30,iValue2 = 20,iRet = 0;

    iRet = Substraction(iValue1,iValue2);
    cout<<"Substraction if integer is: "<<iRet<<"\n";

    fRet = Substraction(fValue1,fValue2);
    cout<<"\nSubstraction of float is : "<<fRet<<"\n";
    return 0;
}