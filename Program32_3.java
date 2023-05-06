import java.util.*;

class Program32_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter total elements :\t");
        int iSize = sobj.nextInt();

        EvenDivisible obj = new EvenDivisible(iSize);

        obj.Accept();
        obj.Display();
        obj.EvenDiv();

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
        System.out.println("Enter elements");

        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    protected void Display()
    {
        System.out.println("Elements are:");

        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt] + "\t");
        }
    }
}

class EvenDivisible extends ArrayX
{
    public EvenDivisible(int iSize)
    {
        super(iSize);
    }

    public void EvenDiv()
    {
        System.out.println("Even Divisible elements are:");

        for(int iCnt=0 ; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt]%2 == 0 && Arr[iCnt]%5 == 0)
                System.out.println(Arr[iCnt]+ "\t");
        }
    }
}