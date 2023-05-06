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



        System.out.println("\nEnter total elements in Array2 :");
        int iSize2=sobj.nextInt();
        Array2=new int[iSize2];

        obj2.Accept(Array2,iSize2);
        obj2.Display(Array2,iSize2);

        System.out.println("\nConcatenation :");
        int Array3[]=obj2.ConcatX(Array1,Array2);
        obj2.Display(Array3,Array3.length);
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

    public int[] ConcatX(int Array1[],int Array2[])
    {
        int Array[]= new int[Array1.length+Array2.length];
        int iCnt=0;

        for(iCnt=0;iCnt<Array1.length;iCnt++)
        {
            Array[iCnt]=Array1[iCnt];
        }

        for(int i=0;i<Array2.length;i++)
        {
            Array[iCnt]=Array2[i];
            iCnt++;
        }

        
        return Array;
    }
}