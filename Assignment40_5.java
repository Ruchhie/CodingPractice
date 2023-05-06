import java.util.*;

import javax.lang.model.util.ElementScanner6;

class Assignment40_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter no of rows and columns :");
        int iRow=sobj.nextInt();
        int iCol=sobj.nextInt();

        PatternX obj =new PatternX(iRow, iCol);
        obj.DisplayPattern();
    }
}

class PatternX
{
    int iRow,iCol;

    public PatternX(int iRow,int iCol)
    {
        this.iRow=iRow;
        this.iCol=iCol;
    }

    public void DisplayPattern()
    {
        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=iCol;j++)
            {
                if(i==j)
                    System.out.print(i+"\t");
                else if(i==1 || j==1 ||i==iRow ||j==iCol)
                     System.out.print(j+"\t");
                else 
                    System.out.print(" \t");
                
            }

            System.out.println();
        }
    }
}