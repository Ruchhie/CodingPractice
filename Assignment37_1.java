import java.util.*;
import java.util.regex.Pattern;

class Assignment37_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter no of Rows and Columns : ");
        int iRow = sobj.nextInt();
        int iCol = sobj.nextInt();

        PatternX obj = new PatternX(iRow,iCol);
        obj.DisplayPattern();

        sobj.close();
    }
}

class PatternX
{
    int iRow,iCol;

    public PatternX(int i,int j)
    {
        iRow=i;
        iCol=j;
    }

    public void DisplayPattern()
    {
        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=iCol;j++)
                System.out.print("*  ");

            System.out.println();
        }
    }
}