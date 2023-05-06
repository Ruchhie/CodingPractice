import java.util.*;

class Assignment39_2
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a string");
        String str = sobj.nextLine();
        
        PatternX obj =new PatternX(str);
        obj.Display();
        
        sobj.close();
    }
}

class PatternX
{
    String str;
    public PatternX(String str)
    {   
        this.str=str;
    }

    public void Display()
    {
        int iNo=str.length();
        for(int i=0;i<str.length();i++)
        {
            for(int j=0;j<str.length();j++)
            {
                    
                if(j<iNo)
                    System.out.print(str.charAt(j)+"  ");    
                else
                    System.out.print("*  ");
                    
            }
            iNo--;
            System.out.println();
        }

    }
}