import java.util.*;

class Assignment43_1
{
    public static void main(String a[])
    {
        int Array1[];
        System.out.println("Enter total elements of Array1");
        Scanner sobj = new Scanner(System.in);
        int iSize1=sobj.nextInt();
        Array1=new int[iSize1];

        QuestionX obj = new QuestionX();
        obj.Accept(Array1);
        obj.Display(Array1);
        obj.DigitSumArray(Array1);
        obj.Display(Array1);
        
    }

}

class ArrayX
{

    void Accept(int Array[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter array elements ");
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            Array[iCnt]=sobj.nextInt();
        }
    }

    void Display(int Array[])
    {
        
        System.out.println("Array elements are:");
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            System.out.print(Array[iCnt]+"\t");
        }
        System.out.println();
    }
}

class QuestionX extends ArrayX
{
    public void DigitSumArray(int Array[])
    {
        int iNo=0,iSum=0,iDigit=0;
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            iSum=0;
            iNo=Array[iCnt];
            while(iNo!=0)
            {
            iDigit=iNo%10;
            iSum=iSum+iDigit;

            iNo=iNo/10;
            }

            Array[iCnt]=iSum;
        }
    }
}