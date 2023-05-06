import java.util.*;

class Program31_3
{
    public static void main(String a[])
    {
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter a string");
        String str=sobj.nextLine();

        StringX obj=new StringX();
        int iRet=obj.CalcDiff(str);

        System.out.println("Difference = " +iRet);

    }
}

class StringX
{
    public int CalcDiff(String str)
    {
    int iCnt1=0,iCnt2=0;
    int iDiff=0;

    char Arr[]=str.toCharArray();

    for(int i=0;i<str.length();i++)
    {
        if(Arr[i]>='A' && Arr[i]<='Z')
            iCnt1++;
        
        else if(Arr[i]>='a' && Arr[i]<='z')
            iCnt2++;
    }

    iDiff=iCnt2-iCnt1;

    if(iDiff<0)             //Filter
        iDiff=-iDiff;

    return iDiff;
    }

}