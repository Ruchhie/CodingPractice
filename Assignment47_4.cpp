#include<iostream>
using namespace std;

template <class T>
T MaxArrayElement(T *Arr, int iSize)
{
    T Max=Arr[0];
    int i=0;
    if(iSize<0)
        return -1;
    for(i=0;i<iSize;i++)
    {
        if(Max<Arr[i])
            Max=Arr[i];
    }

    return Max;
}

int main()
{
    int Arr[]={10,20,30,40,50};
    float fArr[]={10.5,3.3,4.89};

    int iMax=MaxArrayElement(Arr,5);
    cout<<iMax<<"\n";

    float fMax=MaxArrayElement(fArr,3);    
    cout<<fMax<<"\n";

}