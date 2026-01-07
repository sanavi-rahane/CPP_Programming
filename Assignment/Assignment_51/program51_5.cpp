/*
    Write generic program to accept N value and reverse the contents.
    Input : 10      20      30      10      30      40      10      40      10
    Output: 10      40      10      40      30      10      30      20      10

*/
#include<iostream>
using namespace std;
template<class T>
void Reverse(T *arr,int iSize)
{
    int i = 0,j = iSize-1;
    T temp;
        
    do
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
        i++;
    }while(i != j || i < j);
}
int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int i=0;

    for(i = 0;i < 9;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    Reverse(arr,9);
    for(i = 0;i < 9;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}