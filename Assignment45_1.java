import java.util.*;

class MyArray
{
     public boolean isRotation(String s1,String s2)
	 {
         char arr1[] = s1.toCharArray();
		 char arr2[] = s2.toCharArray();
		 boolean bRes = true;
		 
		 if(arr1.length == arr2.length)
		 {
			 for(int i = 0; i < arr1.length; i++)
			 {
				 if(arr2[i] == arr1[0])
				 {
					 int k = 0;
					 for(int j = i; k < arr1.length; j++,k++)
					 {
						 if(arr2[j] != arr1[k])
						 {
							 System.out.println(k);
							 bRes = false;
							 break;
						 }
						 if(j == arr2.length-1)
						 {
							 if(arr2[0] != arr1[k+1])
							 {
								 bRes = false;
								 break;
							 }
							 k++;
							 j = 0;
						 }
					 }
				 }
			 }
		 }
		 else
		 {
			 System.out.println("Two strings are different");
			 bRes = false;
		 }
		 
		 return bRes;
	 }		 
}

class Prog45_1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string : ");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter second string : ");
		String str2 = sobj.nextLine();
		
		MyArray obj = new MyArray();
		
		boolean bRet = obj.isRotation(str1,str2);
		
		if(bRet == true)
		{
			System.out.println("True");
		}
		else
		{
			System.out.println("False");
		}
	}
}