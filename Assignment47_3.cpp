#include<iostream>
using namespace std;

template <class T>
T AddArrayElements(T *Arr, int iSize)
{
    T Sum=0;
    int i=0;
    if(iSize<0)
        return -1;
    for(i=0;i<iSize;i++)
        Sum=Sum+Arr[i];

    return Sum;
}

int main()
{
    int Arr[]={10,20,30,40,50};
    float fArr[]={10.5,3.3,4.89};

    int iSum=AddArrayElements(Arr,5);
    cout<<iSum<<"\n";

    float fSum=AddArrayElements(fArr,3);    
    cout<<fSum<<"\n";

}