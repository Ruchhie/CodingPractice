//palindrome irrespective of case

import java.util.*;

class Assignment35_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string1");
        String str1 =sobj.nextLine();

        MarvellousX obj= new MarvellousX();
        boolean bRet =obj.palindromeX(str1);

        if(bRet==true)
        System.out.println("TRUE");
        else
        System.out.println("FALSE");

    }
}

class MarvellousX
{
    boolean palindromeX(String str1)
    {
        char Arr1[]=str1.toCharArray();
        int i=0;
        int j=Arr1.length-1;  
        boolean bFlag=true;

        while(i<j)
        {   
            if( (Arr1[i]>='A' && Arr1[i]<='Z') && (Arr1[j]>='a' && Arr1[j]<='z') )
            { 
                   Arr1[i]=(char)(Arr1[i]+32);

                   if(Arr1[i]!=Arr1[j])
                   {
                       bFlag=false;
                       break;
                   }
            }
            else if( (Arr1[i]>='a' && Arr1[i]<='z') && (Arr1[j]>='A' && Arr1[j]<='Z') )
            { 
                   Arr1[i]=(char)(Arr1[i]-32);

                   if(Arr1[i]!=Arr1[j])
                   {
                       bFlag=false;
                       break;
                   }
            }
            
            else if(Arr1[i]!=Arr1[j])
            {
                bFlag=false;
                break;
            }

            i++;
            j--;
        }

     
        return bFlag;
       
    }

}
