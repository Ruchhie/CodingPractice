import java.util.*;

class Assignment42_5
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
        
        boolean bRet=obj.PalindromeX(Array1);
        System.out.println(bRet);

        System.out.println("Enter total elements of Array2");
        int iSize2=sobj.nextInt();
        Array2=new int[iSize2];
        obj.Accept(Array2);
        obj.Display(Array2);

        bRet=obj.PalindromeX(Array2);
        System.out.println(bRet);
        
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
    public boolean PalindromeX(int Array[])
    {
         boolean bFlag=true;
        int i=0,iCnt=0;
         for(iCnt=Array.length-1 ,i=0; iCnt>=0 ; iCnt--,i++)
         {
            if( Array[i]!=Array[iCnt] )
                bFlag=false;
         }
        return bFlag;
    }
}