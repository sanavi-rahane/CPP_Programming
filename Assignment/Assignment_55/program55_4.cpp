
/*
        Write a generic program to Swap two Value
*/
#include<iostream>
using namespace std;
template<class T>
void Swap(T Value1,T Value2)
{
    T temp = Value1;
    Value1 = Value2;
    Value2 = temp;
}
   
int main()
{
    int iNo1 = 10, iNo2 = 20;  
    Swap(iNo1,iNo2);

    float  fNo1 = 10.45f, fNo2 = 35.46f;
    Swap(fNo1,fNo2);

    return 0;
}