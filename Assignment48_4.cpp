#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    int iFlag=0;

    for(int iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]==iNo)
        {
            iFlag=iCnt;    
        }
        
    }

    return iFlag+1;

}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);
    printf("%d",iRet); // 8
return 0;
}