/*
        Write a generic program to find the Maximum in between foue value
*/

#include<iostream>
using namespace std;

template<class T>
T FindMax(T NO1,T NO2,T NO3, T NO4)
{
    if(NO1 > NO2 && NO1 > NO3 && NO1 > NO4)
    {
        return NO1;
    }
    else if(NO2 > NO1 && NO2 > NO3 && NO2 > NO4)
    {
        return NO2;
    }
    else if(NO3 > NO1 && NO3 > NO2 && NO3 > NO4)
    {
        return NO3;
    }
    else if(NO4 > NO1 && NO4 > NO2 && NO4 > NO3)
    {
        return NO4;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int a = 45,b = 68, c = 78, d = 23;
    int iMax = 0;
    iMax = FindMax(a,b,c,d);
    cout<<"Largest element is : "<<iMax;
    return 0;
}