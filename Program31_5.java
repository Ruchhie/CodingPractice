import java.util.*;

class Program31_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a string");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        obj.ReverseX(str);
    
    }
}

class StringX
{
    public void ReverseX(String str)
    {
        char Arr[]=str.toCharArray();
                
        for(int i=str.length()-1;i>=0;i--)
        {
            System.out.print(Arr[i]);
        }
    }
}