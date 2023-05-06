//accept no and return difference between summation of even digits and odd digits
// ex: 2395    -15(2-17), 1018    6(8-2), 8440     16(16-0)

import java.util.*;

class Assignment33_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int iValue = sobj.nextInt();

        DigitX obj = new DigitX(iValue);
        int iRet = obj.summation();
        System.out.println("Difference between summation of even digits and odd digits " + iRet);
        sobj.close();
    }
}

class DigitX
{
    int iNo=0,iEve=0,iOdd=0,iDigit=0;

    public DigitX(int iValue)
    {
        iNo=iValue;
    }

    public int summation()
    {
        while(iNo!=0)
        {
            iDigit = iNo%10;

            if(iDigit%2==0)
                iEve=iEve+iDigit;
            else
                iOdd=iOdd+iDigit;

            iNo= iNo/10;
        }

        return (iEve-iOdd);
    }
}