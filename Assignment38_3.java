import java.util.*;

class Assignment38_3
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
        
        for(int i=0;i<str.length();i++)
        {
           for(int j=0;j<=i;j++)
           {
                System.out.print(str.charAt(j));
           }
                    
           System.out.println();
        }
    }
}