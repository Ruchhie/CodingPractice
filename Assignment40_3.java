import java.util.*;

class Assignment40_3
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
            for(int j=iCol;j>=1;j--)
            {
                if(i==j ||i==1 || j==1 ||i==iRow ||j==iCol)
                    System.out.print("*\t");
                else 
                     System.out.print(" \t");
                
                
            }

            System.out.println();
        }
    }
}