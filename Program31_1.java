//accept string and count no of capital characters


import java.util.*;

class Program31_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string");
        String str =sobj.nextLine();

        StringX obj= new StringX();
        int iRet=obj.CapCount(str);

        System.out.println("Capital characters count : "+iRet);
    }
}

class StringX
{
    public int CapCount (String s)
    {
        int iCnt=0;
        char Arr[]=s.toCharArray();

        for(int i=0;i<s.length();i++)
        {
            if((Arr[i] >='A') && (Arr[i]<='Z'))
                iCnt++;
        }

        return iCnt;
    }

}
