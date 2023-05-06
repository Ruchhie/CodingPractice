import java.util.*;

class Assignment41_1
{
    public static void main(String a[])
    {
        ArraysX obj1 = new ArraysX();
        obj1.Accept();
        obj1.Display();

        ArraysX obj2 = new ArraysX();
        obj2.Accept();
        obj2.Display();
   
    }
}

class ArraysX
{
    int Array[];

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("\nEnter ARRAY total elements");
        int iSize=sobj.nextInt();
        Array=new int[iSize];

        System.out.println("\nEnter elements of Array :");

        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            Array[iCnt]=sobj.nextInt();
        }

       

    }

    public void Display()
    {   
        System.out.println("\nElements of Array :");
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            System.out.print(Array[iCnt]+"\t");
        }
    }
}

