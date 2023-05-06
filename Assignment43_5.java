import java.util.*;

import javax.lang.model.util.ElementScanner6;

class Assignment43_5
{
    public static void main(String a[])
    {
        System.out.println("Total Students = ");
        Scanner sobj = new Scanner(System.in);
        int Ntotal=sobj.nextInt();
        float Array[]=new float[Ntotal];
        ArrayX obj = new ArrayX();
        obj.Accept(Array);
        obj.DisplayClass(Array);


    }
}

class ArrayX
{

    void Accept(float Array[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Array Elements ");
        for(int iCnt=0;iCnt<Array.length;iCnt++)
            Array[iCnt]=sobj.nextFloat();

    }

    void DisplayClass(float Array[])
    {
        System.out.println("SCORE:");

        for(int iCnt=0;iCnt<Array.length;iCnt++)
        {
            System.out.print(Array[iCnt]+"\t");
            if(Array[iCnt]<35)
                System.out.println("Fail");
            else if(Array[iCnt]<50)
                System.out.println("Pass Class");
            else if(Array[iCnt]<60)
                System.out.println("Second Class");
            else if(Array[iCnt]<70)
                System.out.println("First Class");
            else 
                System.out.println("First Class with Distinction");

        }
    }
}