//accept N numbers and return product of all odd elements

import java.util.*;

class Assignment34_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter total elements : ");
        int iSize = sobj.nextInt();

        ProductX obj = new ProductX(iSize);
        obj.Accept();
        obj.Display();
        int iRet = obj.OddProd();
        System.out.println("Product of all ODD element = "+ iRet);

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
        System.out.println("Enter " + iArray.length + " elements :");
        Scanner sobj = new Scanner(System.in);

        for(int iCnt=0 ; iCnt < iArray.length ; iCnt++)
        {
            iArray[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    protected void Display()
    {
        System.out.println("Elements are :");

        for(int iCnt =0 ; iCnt< iArray.length ; iCnt++)
        {
            System.out.print(iArray[iCnt] + "\t");
        }

        System.out.println();
    }
}

class ProductX extends ArrayX
{
    public ProductX(int iSize)
    {
        super(iSize);
    }

    public int  OddProd()
    {
        int iProd=1;

        for(int iCnt =0 ; iCnt<iArray.length ; iCnt++)
        {
            if(iArray[iCnt]%2 ==1)
            {
                iProd = iProd * iArray[iCnt];
            }
        }
        if(iProd == 1)
            return 0;
        return iProd;
    }
}