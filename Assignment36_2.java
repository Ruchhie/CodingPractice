import java.util.*;

class Assignment36_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows and columns");
        int iRow = sobj.nextInt();
        int iCol = sobj.nextInt();

        PatternX obj = new PatternX(iRow,iCol);
        obj.DisplayX();

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

    public void DisplayX()
    {   
        char cAlpha='A';

        for(int i=1;i<=iRow;i++)
        {       
            for(int j=1;j<=iCol;j++)
            {
                System.out.print(cAlpha + "  ");
                cAlpha++;
            }
            System.out.println();

            if(cAlpha>='A' && cAlpha<='Z')
                cAlpha='a';
            else 
                cAlpha='A';
            
        }
    }
}