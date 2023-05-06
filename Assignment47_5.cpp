#include<iostream>
using namespace std;

template <class T>
T MinArrayElement(T *Arr, int iSize)
{
    T Min=Arr[0];
    int i=0;
    if(iSize<0)
        return -1;
    for(i=0;i<iSize;i++)
    {
        if(Min>Arr[i])
            Min=Arr[i];
    }

    return Min;
}

int main()
{
    int Arr[]={10,20,30,40,50};
    float fArr[]={10.5,3.3,4.89};

    int iMin=MinArrayElement(Arr,5);
    cout<<iMin<<"\n";

    float fMin=MinArrayElement(fArr,3);    
    cout<<fMin<<"\n";

}