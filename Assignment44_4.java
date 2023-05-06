import java.util.*;

class Assignment44_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        ArrayX obj = new ArrayX();
        System.out.println("Total ELements = ");
        int iSize=sobj.nextInt();
        char Array[]=new char[iSize];
        obj.Accept(Array);
        int iRet=obj.Difference(Array);
        obj.Display(Array);
        System.out.print("Difference = "+iRet);
    }
}

class ArrayX
{
    public void Accept(char Array[])
    {
        Scanner sobj = new Scanner(System.in);

        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            Array[iCnt]=sobj.nextLine().charAt(0);
        }
    }

    public void Display(char Array[])
    {
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            System.out.print(Array[iCnt]+"\t");
        }
        System.out.println();
    }

    public int Difference(char Array[])
    {
        int iCap=0,iSmall=0;
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            if(Array[iCnt]>='a' && Array[iCnt]<='z')
            {    
                iSmall++;
            }
            else if(Array[iCnt]>='A' && Array[iCnt]<='A')
            {    
                iCap++;
            }
        }
        return (iCap-iSmall);
    }

}

