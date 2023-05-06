#include<iostream>
using namespace std;

template <class T>
int Frequency(T *Arr, int iSize,T No)
{
    int iCount=0;

    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==No)
            iCount++;
        
    }
    return iCount;
}

int main()
{
   int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    printf("%d",iRet); // 4

   return 0;
}
