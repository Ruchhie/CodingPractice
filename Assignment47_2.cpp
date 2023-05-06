
#include<iostream>
using namespace std;

template<class T>
T Max(T iNo1, T iNo2, T iNo3)
{
    T iAns;
    if(iNo1>iNo2 && iNo1>iNo3)
        iAns=iNo1;
    else if(iNo2>iNo1 && iNo2>iNo3)
        iAns=iNo2;
    else
        iAns=iNo3;
        
    return iAns;    
}

int main()
{
    int iRet = Max(10,20,30);
    cout<<iRet<<"\n";

    float fRet = Max(5.69,10.58,2.6);
    cout<<fRet<<"\n";

    return 0;
}

