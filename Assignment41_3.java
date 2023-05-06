import java.util.*;

class Assignment41_3
{
    public static void main(String a[])
    {
        DisplayQ obj1 = new DisplayQ();
        obj1.Accept();
        obj1.Display();
        obj1.DisplayEven();

        DisplayQ obj2 = new DisplayQ();
        obj2.Accept();
        obj2.Display();
        obj2.DisplayEven();
   
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

class DisplayQ extends ArraysX
{

    public void DisplayEven()
    {
        System.out.println("\nEven elements :");
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            if(Array[iCnt]%2 == 0)
                System.out.print(Array[iCnt]+"\t");
        }

        System.out.println();

    }
}