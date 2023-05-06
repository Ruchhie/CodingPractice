import java.util.*;

class Assignment44_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        ArrayX obj = new ArrayX();
        System.out.println("Total ELements = ");
        int iSize=sobj.nextInt();
        char Array[]=new char[iSize];
        obj.Accept(Array);
        int iRet=obj.ArrayReplace(Array);
        obj.Display(Array);
        System.out.print("Changes done "+iRet+"times");
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

    public int ArrayReplace(char Array[])
    {
        int iCount=0;
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            if(Array[iCnt]>='a' && Array[iCnt]<='z')
            {    
                Array[iCnt]=(char)(Array[iCnt]-32);
                iCount++;
            }
        }
        return iCount;
    }

}

