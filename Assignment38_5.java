import java.util.*;

class Assignment38_5
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
        System.out.println();

        int iNo=1;
        
        for(int i=0;i<(2 * str.length())-1;i++)
        {
           for(int j=0;j<iNo;j++)
           {
                System.out.print(str.charAt(j));
           }
           
            System.out.println();

            if(i<str.length()-1)
           {
                iNo++;;
           }
           else 
                iNo--;
        }

    }
}