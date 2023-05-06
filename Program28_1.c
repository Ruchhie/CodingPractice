//Search First Occurence in Singly Linked List

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

int SearchFirstOcc( PNODE First , int iNo)
{
    int iPos=0;

    while(First!=NULL)
    {
        if(First->data==iNo)
        {
            iPos++;
            break;
        }
        else
            iPos++;

        First=First->next;
    }

    if(First==NULL)
        return -1;
    else
        return iPos;

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

    printf("Enter the element to Search : ");
    scanf("%d",&iNo);
    iRet=SearchFirstOcc(Head,iNo);

    if(iRet==-1)
        printf("Element not Found");
    else
        printf("Element Found at %d Position",iRet);

    return 0;
}