import java.util.*;

class Assignment44_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        ArrayX obj = new ArrayX();
        System.out.println("Total ELements = ");
        int iSize=sobj.nextInt();
        char Array[]=new char[iSize];
        System.out.println("Enter  ELements = ");
        obj.Accept(Array);
        System.out.println("Character to search = ");
        sobj.nextLine();
        char cSearch=sobj.nextLine().charAt(0);
        int iRet=obj.Occurence(Array,cSearch);
        obj.Display(Array);
        System.out.print("Repeated "+iRet+"times");
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

    public int Occurence(char Array[],char cSearch)
    {
        int iCount=0;
        char cSearch2=0;
        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            
            if(cSearch>='A' && cSearch<='Z')
                cSearch2=(char)(cSearch+32);
            else
                cSearch2=(char)(cSearch-32);

            if(Array[iCnt]==cSearch || Array[iCnt]==cSearch2)
            {
                iCount++;
            }
        }
        return iCount;
    }

}

