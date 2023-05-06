//2nd Maximum of elements in Singly Linked List

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

int Max2nd( PNODE First )
{

    int iMax=0;
    int iMax2=0;

    if((First->next)==NULL)             //only one node
    {
        return (First->data); 
    }


    while(First!=NULL)
    {
        if( iMax < (First->data) )
        {   
            iMax2=iMax;
            iMax=(First->data);

        }
        else if( iMax2 < (First->data) )
        {
            iMax2=(First->data);
        }
    
        First=First->next;
    }

    return iMax2;

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

    iRet=Max2nd(Head);

    printf("Second Maximum of Elements = %d ",iRet);

    return 0;
}