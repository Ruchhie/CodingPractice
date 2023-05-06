//Perfect elements in Singly Linked List

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

void Perfect( PNODE First )
{

    int iSum=1;
    int iCnt=0;

    printf("Perfect Number in Linked List are: ");

    while(First!=NULL)
    {
        iSum=1;
        
        for( iCnt=2 ; iCnt<=((First->data)/2) ; iCnt++ )
        {
            if( ( (First->data) % iCnt)== 0 )
                iSum = iSum + iCnt;

        }

        if( (First->data) == iSum )
        {
            printf(" %d ",First->data);
        }

        First=First->next;
    }

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

    Perfect(Head);

    return 0;
}