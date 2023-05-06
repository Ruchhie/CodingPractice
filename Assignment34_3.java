//accept n no and 1 no and search in N nos and return index of last occurence of that no SEARCHING 

import java.util.*;

class Assignment34_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter total elements");
        int iSize = sobj.nextInt();
        
        System.out.println("Enter element to search : ");
        int iFind = sobj.nextInt();

        SearchX obj = new SearchX(iSize,iFind);
        obj.Accept();
        obj.Display();
        int iRet = obj.SearchLast();

        if(iRet ==-1)
            System.out.println("\nElement not Found");
        else
            System.out.println("\nIndex of First Occurence = "+iRet);

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
    int iSearch=0;

    public SearchX(int iSize,int iFind)
    {
        super(iSize);
        iSearch = iFind;
    }

    public int SearchLast()
    {
        int iIndex=-1;
/*
        for(int iCnt=0;iCnt<iArray.length;iCnt++)
        {
            if(iArray[iCnt] == iSearch)
            {
                iIndex =iCnt;
            }
        }
*/  
        for(int iCnt=iArray.length-1;iCnt>=0;iCnt--)
        {
            if(iArray[iCnt] == iSearch)
            {
                iIndex =iCnt;
                break;
            }
        }

        return iIndex;
    }
}