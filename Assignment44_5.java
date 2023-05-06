import java.util.*;

class Assignment44_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        Pattern obj = new Pattern();
        System.out.println("Total ELements = ");
        int iSize=sobj.nextInt();
        int Array[]=new int[iSize];
        obj.Accept(Array);
       
        obj.Display(Array);
    }
}

class Pattern
{
    void Accept(int Array[])
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            Array[iCnt]=sobj.nextInt();
        }

    }
    void Display(int Array[])
    {
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            for(int i=0;i<Array[iCnt];i++)
            {
                System.out.print("*  ");
              
            }
            System.out.println();
        }
    }
}