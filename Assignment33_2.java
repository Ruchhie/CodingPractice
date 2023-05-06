//accept no and return count of odd digits ex: 2395    3, -1018    2, 8462     0

import java.util.*;

class Assignment33_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int iValue = sobj.nextInt();

        DigitX obj = new DigitX(iValue);
        int iRet = obj.CountOddDigits();
        System.out.println("Count of Odd Digits = "+iRet);

        sobj.close();
    }
}

class DigitX
{
    int iNo=0;

    public DigitX(int iValue)
    {
        iNo = iValue;
    }

    public int CountOddDigits()
    {
        int iCnt=0;

        while(iNo!=0)
        {
            
            if(((iNo%10) % 2 )==1)
                iCnt++;

            iNo=iNo/10;
        }
        
        return iCnt;
    }
}
