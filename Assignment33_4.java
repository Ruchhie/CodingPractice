//accept no and return multiplication of all digits ex: 2395    270, -1018    8, 922432    864

import java.util.*;

class Assignment33_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a number");
        int iVal = sobj.nextInt();

        DigitX obj = new DigitX(iVal);
        int iRet = obj.DigitMult();

        System.out.println("Multiplication of all Digits : " + iRet);
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
    public int DigitMult()
    {
        int iMul=1,iDigit=0;

        if(iNo<0)
            iNo=-iNo;
        
        while(iNo!=0)
        {
            iDigit=iNo%10;
            if(iDigit == 0)
                iDigit=1;

            iMul=iMul*iDigit;
            iNo=iNo/10;
        }
        return iMul;
    }
}

