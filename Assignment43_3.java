import java.util.*;

class Assignment43_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter total elements : ");
        int iSize=sobj.nextInt();
        char Array[]=new char[iSize];
        ArrayCapital obj = new ArrayCapital();
        System.out.println("Enter Array elements : ");
        obj.Accept(Array);
        int iCnt=obj.ArrayCapitalX(Array);
        System.out.println("Capital characters : "+iCnt);
    }
}

class ArrayCapital
{

   void Accept(char Array[])
   {
        Scanner sobj = new Scanner(System.in);
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            Array[iCnt]=sobj.nextLine().charAt(0);;
        }
   } 

   int ArrayCapitalX(char Array[])
   {
    int iCount=0;
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            if(Array[iCnt]>='A' && Array[iCnt]<='Z')
                iCount++;
        }
    return iCount;
   }
}
