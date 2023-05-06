
#include<iostream>
using namespace std;

template<class T>
T Multiply(T iNo1, T iNo2)
{
    T iAns;
    iAns=iNo1*iNo2;
    return iAns;    
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<iRet<<"\n";

    float fRet = Multiply(5.69,10.58);
    cout<<fRet<<"\n";

    return 0;
}

