//Small Digit of elements  display in Singly Linked List

#include<stdio.h>           
#include<stdlib.h>          

#pragma pack(1)                            

struct node                 
{
    int data;               
    struct node *next;      
};

typedef struct node NODE;           
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE First,int No)
{
    PNODE newn=(PNODE)malloc(sizeof(NODE));         

    newn->data=No;
    newn->next=NULL;

    if(*First == NULL)                              
    {
        *First=newn;
    }
    else                                            
    {   
        newn->next=*First;
        *First=newn;
    }

}

void SmallDigit( PNODE First )       //this function do not change linked list
{

    int iMin=0,iDigit=0,iNo=0;

    while(First!=NULL)
    {
        
        iDigit=0;
        iNo=First->data;
        iMin=iNo % 10;

        while( iNo > 0 )
        {
            iDigit= iNo % 10;      

            if(iDigit < iMin)
                iMin=iDigit;

            iNo = iNo/10;
            
        }
        
            printf(" %d ",iMin);

        First=First->next;
    }
}

void Display(PNODE First)
{
    printf("Linked List elements:\n");

    while(First!=NULL)
    {
        printf("| %d | -> ",First->data);
        First=First->next;
    }

    printf("NULL \n");

}

int main()
{
    PNODE Head=NULL;            

    int iRet=0;
    int iNo=0;
    int iTotal=0,iCnt=0;

    printf("Enter total Elements to Insert First in Linked List : ");
    scanf("%d", &iTotal);

    printf("Enter Elements:\t");
    for(iCnt=1; iCnt<=iTotal; iCnt++)
    {
        scanf("%d",&iNo);
        InsertFirst(&Head,iNo);
    }
    
    Display(Head);

    SmallDigit(Head);
    

    return 0;
}