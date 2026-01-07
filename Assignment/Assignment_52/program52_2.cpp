/*
    Write a generic program to find largest numbers from three numbers.
*/

#include<iostream>
using namespace std;
template<class T>
T Max(T no1,T no2,T no3)
{
    if(no1 > no2 && no1 > no3)
    {
        return no1;
    }
    else if(no2 > no1 && no2 > no3)
    {
        return no2;
    }
    else if(no3 > no1 && no3 > no2)
    {
        return no3;
    }
    return 0;  
}
int main()
{
    int imax = 0;
    imax = Max(10,20,30);
    cout<<"Largest : "<<imax;
}