//accept n no and 1 no and search in N nos and check present or not SEARCHING 

import java.util.*;

class Assignment34_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter total elements : ");
        int iSize = sobj.nextInt();

        System.out.println("Enter element to search");
        int iSearch = sobj.nextInt();

        SearchX obj = new SearchX(iSize,iSearch);
        obj.Accept();
        obj.Display();
        boolean bRet=obj.Search();

        if(bRet==true)
            System.out.println("\nElement "+iSearch+" present in array");
        else
            System.out.println("\nElement "+iSearch+" not present in array");

        sobj.close();
    }
}

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter "+ Arr.length +" elements ");

        for(int iCnt=0;iCnt<Arr.length;iCnt++)
            Arr[iCnt] =sobj.nextInt();

        sobj.close();
    }

    protected void Display()
    {
        System.out.println("Array Elements are : ");
        for(int iCnt=0;iCnt<Arr.length;iCnt++)
            System.out.print(Arr[iCnt] + "\t");
        
    }
    
}

class SearchX extends ArrayX
{
    int iFind=0;

    public SearchX(int iSize,int iSearch)
    {
        super(iSize);
        iFind=iSearch;
    }

    public boolean Search()
    {
        boolean bFlag=false;

        for(int iCnt=0 ; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt]==iFind)
            {
                bFlag=true;
                break;
            }
        }

        return bFlag;
    }
}