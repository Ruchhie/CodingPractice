import java.util.*;

class Program32_1
{
    public static void main(String ar[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter total elements in array: ");
        int iSize=sobj.nextInt();
        //derived cls       
        MarvellousX obj =new MarvellousX(iSize);
        obj.Accept();
        obj.Display();
        
        int iRet=obj.Difference();
        
        System.out.println("Difference = "+iRet);

        sobj.close();
        
    }
}

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr=new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj= new Scanner(System.in);
        System.out.println("Please enter "+Arr.length+" elements");

        for(int iCnt=0;iCnt<Arr.length; iCnt++)
        {
            System.out.println("Enter element no "+(iCnt+1));
            Arr[iCnt]=sobj.nextInt();
        }

        sobj.close();
    }

    protected void Display()
    {
        System.out.println("\nArray Elements are:\n");
        for(int iCnt=0;iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MarvellousX extends ArrayX        //SINGLE LEVEL INHERITANCE
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public int Difference()
    {
        int iEven=0,iOdd=0;

        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]%2 == 0)
                iEven=iEven+Arr[i];
            else
                iOdd=iOdd+Arr[i];
            
        }
        return (iEven - iOdd);

       
    }
}