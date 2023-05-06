import java.util.*;

class Assignment41_4
{
    public static void main(String a[])
    {
        Scanner sobj =new Scanner(System.in);

        DisplayQ obj1 = new DisplayQ();
        DisplayQ obj2 = new DisplayQ();
        int Array1[],Array2[];

        System.out.println("Enter total elements in Array1 :");
        int iSize1=sobj.nextInt();
        Array1=new int[iSize1];

        obj1.Accept(Array1,iSize1);
        obj1.Display(Array1,iSize1);
        System.out.println("\nSummation :");
        int iRet=obj1.SumArray(Array1);
        System.out.println("Summation of Array1 = "+iRet);


        System.out.println("\nEnter total elements in Array2 :");
        int iSize2=sobj.nextInt();
        Array2=new int[iSize2];

        obj2.Accept(Array2,iSize2);
        obj2.Display(Array2,iSize2);

        System.out.println("\nSummation :");
        iRet=obj2.SumArray(Array2);
        System.out.println("Summation of Array2 = "+iRet);
                
    }
}

class ArraysX
{
    int Array[];

    public void Accept(int Array[],int iSize)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("\nEnter elements of Array :");

        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            Array[iCnt]=sobj.nextInt();
        }

    }

    public void Display(int Array[],int iSize)
    {   
        System.out.println("\nElements of Array :");
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            System.out.print(Array[iCnt]+"\t");
        }
    }
}

class DisplayQ extends ArraysX
{

    public int SumArray(int Array1[])
    {
        int iSum=0;

        for(int iCnt=0;iCnt<Array1.length;iCnt++)
        {
            iSum=iSum+Array1[iCnt];
        }

        return iSum;
    }
}