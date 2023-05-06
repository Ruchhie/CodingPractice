//accept no and return count of digits in between 3 and 7 ex: 2395    1, -1018    0, 4521   2

import java.util.*;

class Assignment33_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int iVal = sobj.nextInt();

        DigitX obj = new DigitX(iVal);
        int iRet = obj.CountDigi();

        System.out.println("Count of Digits between 3 and 7 : "+iRet);
        
        sobj.close();
    }
}

class DigitX
{
    int iNo=0;

    public DigitX(int iValue)
    {
        iNo=iValue;
    }

    public int CountDigi()
    {
        int iCnt=0;

        while(iNo>0)
        {
            if((iNo%10)>3 && (iNo %10)<7)
                iCnt++;

            iNo=iNo/10;
        }
        return iCnt;
    }
}

