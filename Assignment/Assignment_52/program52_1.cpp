/*
    Write generic program to multiply two numbers
*/

#include<iostream>
using namespace std;
template<class T>
T Multiply(T value1,T value2)
{
    T ans;
    ans = value1 * value2;
    return ans;
}
int main()
{
    int iRet = 0;
    iRet = Multiply(10,20);
    cout<<"Multiplication of 10 and 20 is : "<<iRet<<"\n";

    float fRet = 0.0f;
    fRet = Multiply(10.0f,20.0f);
    cout<<"Multiplication of 10.0f and 20.0f is : "<<fRet<<"\n";

    return 0;

}