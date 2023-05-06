import java.util.*;

class Program32_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter total elements ");
        int iSize = sobj.nextInt();

        Divisible obj = new Divisible(iSize);
        obj.Accept();
        obj.Display();
        obj.Divi();

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

        for(int iCnt=0 ; iCnt<Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        sobj.close();
    }

    protected void Display()
    {
        System.out.println("Elements are :");
        for(int iCnt=0 ; iCnt<Arr.length ; iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        }
    }
}

class Divisible extends ArrayX
{
    public Divisible(int iSize)
    {
        super(iSize);
    }

    public void Divi()
    {
        System.out.println("Elements multiple of 11 are :");

        for(int iCnt=0 ; iCnt<Arr.length ; iCnt++)
        {
            if(Arr[iCnt]%11 == 0)
                System.out.print(Arr[iCnt]+"\t");
        }
    }
}