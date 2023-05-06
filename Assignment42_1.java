import java.util.*;

class Assignment42_1
{
    public static void main(String a[])
    {
        int Array1[],Array2[];
        System.out.println("Enter total elements of Array1");
        Scanner sobj = new Scanner(System.in);
        int iSize1=sobj.nextInt();
        Array1=new int[iSize1];

        QuestionX obj = new QuestionX();
        obj.Accept(Array1);
        obj.Display(Array1);

        System.out.println("Enter total elements of Array2");
        int iSize2=sobj.nextInt();
        Array2=new int[iSize2];
        obj.Accept(Array2);
        obj.Display(Array2);

        int iRet=obj.DiffSumm(Array1, Array2);
        System.out.println("Difference between Summation : "+iRet);
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
    public int DiffSumm(int Array1[],int Array2[])
    {
        int iSum1=0,iSum2=0;
        for(int iCnt=0;iCnt<Array1.length;iCnt++)
        {
            iSum1=iSum1+Array1[iCnt];
        }

        for(int iCnt=0;iCnt<Array2.length;iCnt++)
        {
            iSum2=iSum2+Array2[iCnt];
        }

        return (iSum1-iSum2);
    }
}