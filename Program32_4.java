import java.util.*;

class Program32_4
{
    public static void main(String ar[])
    {
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter total elements : ");
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
        Arr= new int[iSize];
    }

    protected void Accept()
    {
        System.out.println("Enter "+Arr.length+" elements");

        Scanner sobj = new Scanner(System.in);
        
        for(int iCnt=0 ; iCnt<Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    protected void Display()
    {
        System.out.println("\nElements are :");

        for(int iCnt=0 ; iCnt<Arr.length ; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
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
        System.out.println("Elements Divisible by 3 and 5 are:");
        for(int iCnt=0 ; iCnt<Arr.length ; iCnt++)
        {
            if(Arr[iCnt]%3 ==0 && Arr[iCnt]%5==0 )
                System.out.print(Arr[iCnt]+"\t");
        }
    }
}