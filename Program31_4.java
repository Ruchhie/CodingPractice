import java.util.*;

class Program31_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a string");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        boolean bChk = obj.VowCount(str);

        if(bChk==true)
            System.out.println("String \""+str+"\" contains vowel");
        else
        System.out.println("String \""+str+"\" does not contains vowel");
    }
}

class StringX
{
    public boolean VowCount(String str)
    {
        boolean bChk=false;
        char Arr[]=str.toCharArray();

        for(int i=0;i<str.length();i++)
        {
            if(Arr[i]=='a' || Arr[i]=='e' || Arr[i]=='i' || Arr[i]=='o' || Arr[i]=='u' ||
               Arr[i]=='A' || Arr[i]=='E' || Arr[i]=='I' || Arr[i]=='O' || Arr[i]=='U')
             {
                   bChk=true;
                   break;
             }
        }


        return bChk;
    }
}