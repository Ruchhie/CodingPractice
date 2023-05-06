//2 STRINGS EQUAL OR NOT

import java.util.*;

class Assignment35_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string1");
        String str1 =sobj.nextLine();

        System.out.println("Please enter string2");
        String str2 =sobj.nextLine();


        MarvellousX obj= new MarvellousX();
        boolean bRet =obj.ConcatX(str1,str2);

        if(bRet==true)
        System.out.println("TRUE");
        else
        System.out.println("FALSE");
    }
}

class MarvellousX
{
    boolean ConcatX(String str1,String str2)
    {
        char Arr1[]=str1.toCharArray();
        char Arr2[]=str2.toCharArray();
        boolean bFlag=true;

        if(Arr1.length!=Arr2.length)
            return false;            
        
        for(int i=0; i<Arr1.length; i++)
        {
            if(Arr1[i]!=Arr2[i])
            {
                bFlag=false;
                break;
            }
        }
      
        return bFlag;
       
    }

}
