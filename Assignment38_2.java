import java.util.*;

class Assignment38_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a string :");
        String str = sobj.nextLine();

        PatternX obj = new PatternX(str);
        obj.DisplayPattern();

        sobj.close();
    }
}

class PatternX
{
    String str;

    public PatternX(String s)
    {
        str = s;
    }

    public void DisplayPattern()
    {
        int iNo=str.length();

        for(int i=0;i<str.length();i++)
        {
           for(int j=0;j<iNo;j++)
           {
                System.out.print(str.charAt(j));
           }
           iNo--;            
            System.out.println();
        }
    }
}