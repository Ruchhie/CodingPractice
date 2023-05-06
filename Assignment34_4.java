//accept N numbers and accept range , and display all elements from that range
/*
 * N 6
 * Start 60
 * End   90
 * Elements 85 66 3 76 93 88
 * output 66 76 85 88
 */

import java.util.*;

class Assignment34_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter total elements");
        int iSize = sobj.nextInt();
        
        System.out.println("Enter Start and end for range display : ");
        int iStart = sobj.nextInt();
        int iEnd = sobj.nextInt();

        SearchX obj = new SearchX(iSize,iStart,iEnd);
        obj.Accept();
        obj.Display();
        obj.DisplayRange();

        sobj.close();
    }
}

class ArrayX
{
    protected int iArray[];

    public ArrayX(int iSize)
    {
        iArray = new int[iSize];
    }

    protected void Accept()
    {
        System.out.println("Enter "+iArray.length+" elements ");

        Scanner sobj =new Scanner(System.in);
        for(int iCnt=0;iCnt<iArray.length;iCnt++)
        {
            iArray[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    protected void Display()
    {
        System.out.println("Array Elements are :");

        for(int iCnt=0;iCnt<iArray.length;iCnt++)
        {
            System.out.print(iArray[iCnt]+ "\t");
        }

    }
}

class SearchX extends ArrayX
{
    int iFirst=0,iLast=0;

    public SearchX(int iSize,int iStart,int iEnd)
    {
        super(iSize);
        iFirst=iStart;
        iLast=iEnd;
    }

    public void DisplayRange()
    {
        System.out.println("\nArray Elements are from range "+iFirst+" to "+iLast);
        for(int iCnt=0;iCnt<iArray.length;iCnt++)
        {
            if( (iArray[iCnt] >=iFirst) && (iArray[iCnt] <= iLast) )
            {
                System.out.print(iArray[iCnt] + "\t");
            }
        }

    }
}