// Input : 10 20 30 10 30 40 10 40 10
// Output : 10 40 10 40 30 10 30 20 10

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    int temp=0;
    int i=0,j=iSize-1;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        j--;
        i++;

    }
}
int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<"\t"; // 10 20 30 10 30 40 10 40 10
    }
    cout<<"\n";
    
    Reverse(arr,9);

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<"\t"; // 10 40 10 40 30 10 30 20 10
    }
    cout<<"\n";
return 0;
}