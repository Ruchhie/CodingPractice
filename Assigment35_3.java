//2 STRINGS accept and check fist n contents equal or not


import java.util.*;

class Assignment35_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string1");
        String str1 =sobj.nextLine();

        System.out.println("Please enter string2");
        String str2 =sobj.nextLine();

        System.out.println("Enter no to check contents");
        int iNo=sobj.nextInt();

        MarvellousX obj= new MarvellousX();
        boolean bRet =obj.ConcatX(str1,str2,iNo);

        if(bRet==true)
        System.out.println("TRUE");
        else
        System.out.println("FALSE");
    }
}

class MarvellousX
{
    boolean ConcatX(String str1,String str2,int iNo)
    {
        char Arr1[]=str1.toCharArray();
        char Arr2[]=str2.toCharArray();
        boolean bFlag=true;         
        
        for(int i=0; i<iNo; i++)
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
