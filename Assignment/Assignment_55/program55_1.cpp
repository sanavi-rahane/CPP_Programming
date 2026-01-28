/*
      Write a generic program to perform addition of two numbers
*/

#include<iostream>
using namespace std;
template<class T>
T Addition(T No1, T No2)
{
    T Result = 0;
    Result = No1 + No2;
    return Result;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    float fRet = 0.0f;

    cout<<"\nEnter First Number : ";
    cin>>fValue1;
    cout<<"\nEnter Sencond NUmber : ";
    cin>>fValue2;

    fRet = Addition(fValue1,fValue2);
    cout<<"\nAddition is : "<<fRet<<"\n";
    return 0;
}