//accepts 2 strings and concat N characters of 2nd string after 1st string
//Value on n take from user
//if N is greater than size of 2nd string then concat whole string

import java.util.*;

class Assignment35_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string1");
        String str1 =sobj.nextLine();

        System.out.println("Please enter string2");
        String str2 =sobj.nextLine();

        System.out.println("Please enter total characters of 2nd string to concat after 1st string");
        int iNo = sobj.nextInt();

        MarvellousX obj= new MarvellousX();
        String sRet =obj.ConcatX(str1,str2,iNo);

        System.out.println("Concanetated String  : "+sRet);
    }
}

class MarvellousX
{
    public String ConcatX(String str1,String str2,int iNo)
    {
        char Arr1[]=str1.toCharArray();
        char Arr2[]=str2.toCharArray();

        int iCnt=Arr1.length + Arr2.length;

        char[] concatx = new char[iCnt];

       
        int i=0;
        for(; i<Arr1.length; i++) 
        {
            concatx[i]=Arr1[i];
        }
       
        for(int j=0; j<iNo; j++,i++) 
        {
            
            concatx[i]=Arr2[j];
            
        }
       
        return new String(concatx);
       
    }

}
