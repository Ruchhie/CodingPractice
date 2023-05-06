//accept no and return count of even digits ex: 2395    1, -1018    2, 8462     4

import java.util.*;

class Assignment33_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a number");
        int iNo=sobj.nextInt();

        DigitX obj = new DigitX(iNo);
        int iRet = obj.CountEvenDigits();

        System.out.println("Count of even Digits = "+iRet);

        sobj.close();
    }
}

class DigitX
{
    int iVal=0,iCnt=0;

    public DigitX(int iNo)
    {
        iVal=iNo;
    }

    public int CountEvenDigits()
    {
        while(iVal!=0)
        {
            //iDigit=iVal%10;
            if( ((iVal%10)%2) == 0)
                iCnt++;

            iVal=iVal/10;
        }

        return iCnt;
    }
}