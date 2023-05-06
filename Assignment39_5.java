import java.util.*;

class Assignment39_5
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
        int iNo=2*str.length()-1;

        for(int i=0;i<(2*str.length())-1;i++)
        {
            for(int j=0;j<str.length();j++)
            {
                if(i<=str.length()-1)
                {
                    if(i>=j)
                        System.out.print(str.charAt(j)+"\t");
                    else
                        System.out.print("#"+"\t");
                }
                else
                {
                    if(j<iNo)
                        System.out.print(str.charAt(j)+"\t");    
                    else
                        System.out.print("#\t");

                }
            }
            iNo--;
            System.out.println();
        }

    }
}