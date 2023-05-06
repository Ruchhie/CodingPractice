import java.util.*;

class Program32_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter total elements ");
        int iSize = sobj.nextInt();

        Divisible obj = new Divisible(iSize);
        obj.Accept();
        obj.Display();
        obj.Divisi();

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

        System.out.println("Enter Elements :\n");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }

        sobj.close();
    }

    protected void Display()
    {
        System.out.print("Elements are :\n");

        for(int i=0;i<Arr.length;i++)
        {
            System.out.print(Arr[i]+ "\t");
        }
        System.out.println();
    }
}

class Divisible extends ArrayX
{
    public Divisible(int iSize)
    {
        super(iSize);
    }
    public void Divisi()
    {
        System.out.print("Elements Divisible by 5 :\n");
        for(int i=0 ; i<Arr.length ; i++)
        {
            if(Arr[i]%5 == 0)
                System.out.print(Arr[i]+ "\t");
        }
    }
}