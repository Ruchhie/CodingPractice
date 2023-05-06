import java.util.*;

class Program31_2
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter a string");
        String str=sobj.nextLine();

        StringX obj=new StringX();
        int iRet=obj.SmallCount(str);

        System.out.println("Small letter count = " +iRet);

    }
}

class StringX
{
    public int SmallCount(String str)
    {
        int iCnt=0;

        char Arr[]=str.toCharArray();

        for(int i=0;i<str.length();i++)
        {
            if(Arr[i]>='a' && Arr[i]<='z')
                iCnt++;
        }

        return iCnt;
    }
}