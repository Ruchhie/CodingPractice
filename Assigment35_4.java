//reverse and toggle

import java.util.*;

class Assignment35_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string1");
        String str1 =sobj.nextLine();

        MarvellousX obj= new MarvellousX();
        String sRet =obj.RevTog(str1);

        System.out.println("Toggled reverse string : "+sRet);

    }
}

class MarvellousX
{
    String RevTog(String str1)
    {
        char Arr1[]=str1.toCharArray();
        int i=0;
        int j=Arr1.length-1;  
        char temp;   
        
        //reverse
        while(i<j)
        {   
            temp=Arr1[i];
            Arr1[i]=Arr1[j];
            Arr1[j]=temp;

            i++;
            j--;
        }

        //toggle
        for( i=0;i<Arr1.length;i++)
        {
            if(Arr1[i]>='A' && Arr1[i]<='Z')
                Arr1[i]=(char)(Arr1[i]+32);
            
            else if(Arr1[i]>='a' && Arr1[i]<='z')
                Arr1[i]=(char)(Arr1[i]-32);
        }
      
        return new String(Arr1);
       
    }

}
