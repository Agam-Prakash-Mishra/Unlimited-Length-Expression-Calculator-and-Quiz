#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void gAdd(int);
void add();
void sub();
void gSub(int);
void mul();
void gMul(int);
void divi();
void gDiv(int);
int calculate();

 int main()
 {    
    int n;
    char ch;
    printf("\t\tWelcome dear :)");
     starting:
    printf("\n\nWhat you want\n1: to calculate\n2: to learn calculation\n Enter choice: ");
     invalidChoice18: // label for goto of line 18
     scanf("%d",&n);
     printf("%d, %c\n",n,n);
     if(n!=1 && n!=2)
     {
         printf("Please enter a valid choice(1 or 2): ");
         goto invalidChoice18;
     }
    else if(n==1)
         {
                       
            calculate();        
         }   
     else
     {
         printf("\n\n\n             \"Best wishes for your learning\"\n \nWhat you want to learn\n a: Addition\n s: Subtraction\n m: Multiplication\n d: Division\nEnter your choice: ");
         invalidChoice31:
         scanf(" %c",&ch);        // have to add a space before %c??????????
/*       if(ch!='a' && ch!='s' && ch!='m' && ch!='d')      // why logical OR is not used here???
/         {
          printf("Please enter a valid choice: ");
          goto invalidChoice31;   
         }
*/           
         switch(ch)
         {
             case 'a':
                add();
                break;
             case 's':
                sub();
                break;
             case 'm':
                 mul();
                 break;
              case 'd':
                  divi();
                 break;
              default:
                 printf("Please enter a valid choice(one of the above): ");
                 goto invalidChoice31;
                     
           }
     return 0;
 }
} 


  
 void gAdd(int n)
{
     int i,j,a,b,m,rightOp,score=0;
     srand(time(NULL));
     printf("\n\n--> You have to attempt 5 questions");
     printf("\n--> Enter the right answer from the given options");
     l2: // to play again
     printf("\n");
     for(i=1; i<=5 ; i++)
     {
         printf("\n%d. ",i);
         a=rand()%n+1;
         b=rand()%n+1;
         printf("  %d+%d= ",a,b);
         rightOp = rand()%4+1; // %5 was wrong
         for(j=1;j<=4;j++)
         {
             if(j==1)
                 printf("\n  ");
             if(j != rightOp)
                printf("(%c) %d   ",96+j,rand()%n+1);
             else
                printf("(%c) %d   ",(96+j),a+b);
             
         }
         printf("\n  Write answer: ");
         scanf("%d",&m);
         if(m==a+b)
         printf("       Score= +1",score++);
         else
         printf("       Wrong!");
       } 
     printf("\n\n   Score: %d/5  ",score);
     if(score==0)
     printf("   :-\"Poor!\"");
     else if(score==1) 
     printf("   :-\"Not Bad!\"") ;
     else if(score==2)
     printf("   :-\"Do Better!\"");
     else if(score==3)
     printf("   :-\"Good!\"");
     else if(score==4)
     printf("   :-\"Very Good!\"");
     else // here score == 5
     {
       printf("   :-\"Perfect!\"");
       printf("\n   Consider to increse hardness (Enter 1 for Yes else 0): ");
       scanf("%d",&m);
       if(m)
        {
           printf("\nVery Nice!\n"); 
           n=n*10+9; // increase the value of n to increase hardness
           score = 0;
           goto l2;
        }

     }
     printf("\nPlay again! (Enter 1 or 0): ");
     scanf("%d",&m);
     if(m)
         add();     
}  
  
void add()
{
      char ch;
                     printf("\nEnter the hardness level\n e:Easy\n m:Moderate\n h:Hard\n M:Master\n Enter here - ");
                  invalidChoice59:       //to handle incorrect choice
                 scanf(" %c",&ch);

                 switch(ch)
                 {
                     case 'e':
                         gAdd(9);
                         break;
                     case 'm':
                         gAdd(99);
                         break;
                     case 'h':
                         gAdd(999);
                         break;
                     case 'M':
                         gAdd(9999);
                         break;
                      default:
                          printf("Please enter the correct choice(one of the above): ");
                          goto invalidChoice59;
                   }
}
 
void mul()
{
    char ch;
    printf("\n Enter the hardness level:\n e:Easy\n m:Moderate\n h:Hard\n M:Master\n Enter here - ");
    invalidChoice:
    scanf(" %c",&ch);
    switch(ch)
    {
                     case 'e':
                         gMul(9);
                         break;
                     case 'm':
                         gMul(99);
                         break;
                     case 'h':
                         gMul(999);
                         break;
                     case 'M':
                         gMul(9999);
                         break;
                      default:
                          printf("Please enter the correct choice(one of the above): ");
                          goto invalidChoice;
         }
}                 

void gMul(int n)
{
    int i,j,a,b,m,rightOp,wrongAns,score=0;
    srand(time(NULL));
    printf("\n--> You have to attempt 5 questions");
    printf("\n--> Enter the right answer from the given options");
    l2: // to play again
    printf("\n");
    for(i=1; i<=5 ; i++)
    {
        printf("\n\n%d. ",i);
        a=rand()%n+1;
         b=rand()%n+1;
        printf("%dx%d= ",a,b);
        rightOp=rand()%4+1;
        for(j=1;j<=4;j++)
        {
           if(j==1)
               printf("\n");
            if(j != rightOp)
            {
              if(j>=2)
                 wrongAns=a*b+rand()%50+1;
              else
                 wrongAns=a*b-rand()%50+1;

              printf("  (%c) %d",96+j,wrongAns);
            }
            else
              printf("   (%c) %d",j+96,a*b);
         }  
         printf("\n  Write answer: ");
        scanf("%d",&m);
        if(m==a*b)
           printf("               Right= 1",score++);
        else
           printf("               Wrong= 0");
     } 
    printf("\n\n   Score: %d/5  ",score);
     if(score==0)
     printf("   :-\"Poor!\"");
     else if(score==1) 
    printf("   :-\"Not Bad!\"") ;
    else if(score==2)
    printf("   :-\"Do Better!\"");
    else if(score==3)
    printf("   :-\"Good!\"");
    else if(score==4)
    printf("   :-\"Very Good!\"");
    else // here score == 5
    {
    printf("   :-\"Perfect!\"");
    printf("\n   Consider to increse hardness (Enter 1 for Yes else 0): ");
    scanf("%d",&m);
    if(m)
     {
        printf("\nVery Nice!\n"); 
        n=n*10+9; // increase the value of n to increase hardness
        score =0;
         goto l2;
     }

    }
    printf("\nPlay again! (Enter 1 or 0): ");
    scanf("%d",&m);
    if(m)
       mul();
     
}  

void sub()
{
    char ch;
    printf("\n Enter the hardness level:\n e:Easy\n m:Moderate\n h:Hard\n M:Master\n Enter here - ");
    invalidChoice:
    scanf(" %c",&ch);
    switch(ch)
    {
                     case 'e':
                         gSub(9);
                         break;
                     case 'm':
                         gSub(99);
                         break;
                     case 'h':
                         gSub(999);
                         break;
                     case 'M':
                         gSub(9999);
                         break;
                      default:
                          printf("Please enter the correct choice: ");
                          goto invalidChoice;
         }
}  

                              

void gSub(int n)
{
    int i,j,a,b,enteredAns,rightOp,rightAns,wrongAns,score=0;
    srand(time(NULL));
    printf("\n--> You have to attempt 5 questions");
    printf("\n--> Enter the right answer from the given options");
    l2: // to play again
    printf("\n");
    for(i=1; i<=5 ; i++)
    {
        printf("\n\n%d. ",i);
        a=rand()%n+1;
        b=rand()%n+1;
        printf(" %d-%d= ",a,b);
        rightAns=a-b;
        rightOp=rand()%4+1;
        for(j=1;j<=4;j++)
        {
           if(j==1)
               printf("\n");
            if(j == rightOp)
              printf("  (%c) %d",j+96,rightAns);
            else
            {
               wrongAns=a-b-rand()%20+1; 
               printf("  (%c) %i",96+j,wrongAns); 
            }
        }  
        printf("\n  Write answer: ");
        scanf("%d",&enteredAns);
        if(enteredAns == a-b)
           printf("               Right= 1",score++);
        else
           printf("               Wrong= 0");
     } 
    printf("\n\n   Score: %d/5  ",score);
    if(score==0)
    printf("   :-\"Poor!\"");
    else if(score==1) 
    printf("   :-\"Not Bad!\"") ;
    else if(score==2)
    printf("   :-\"Do Better!\"");
    else if(score==3)
    printf("   :-\"Good!\"");
    else if(score==4)
    printf("   :-\"Very Good!\"");
    else // here score == 5
    {
    printf("   :-\"Perfect!\"");
    printf("\n   Consider to increse hardness (Enter 1 for Yes else 0): ");
    scanf("%d",&i);
    if(i)
     {
        printf("\nVery Nice!\n"); 
        n=n*10+9; // increase the value of n to increase hardness
        score = 0;
         goto l2;
     }

    }
    printf("\n\n\nPlay again! (Enter 1 or 0): ");
    scanf("%d",&a);
    if(a)
       sub();
     
}



void divi()
{
    char ch;
    printf("\n Enter the hardness level:\n e:Easy\n m:Moderate\n h:Hard\n M:Master\n Enter here - ");
    invalidChoice:
    scanf(" %c",&ch);
    switch(ch)
    {
                     case 'e':
                         gDiv(9);
                         break;
                     case 'm':
                         gDiv(99);
                         break;
                     case 'h':
                         gDiv(999);
                         break;
                     case 'M':
                         gDiv(9999);
                         break;
                      default:
                          printf("Please enter the correct choice: ");
                          goto invalidChoice;
         }
}  

                              

void gDiv(int n)
{
    int i,j,a,b,enteredAns,rightOp,rightAns,wrongAns,score=0;
    srand(time(NULL));
    printf("\n--> You have to attempt 5 questions");
    printf("\n--> Enter the right answer from the given options");
    l2: // to play again
    printf("\n");
    for(i=1; i<=5 ; i++)
    {
        printf("\n\n%d. ",i);
        b=rand()%n+1;
        a=b*(rand()%9+1);
        printf(" %d/%d= ",a,b);
        rightAns=a/b;
        rightOp=rand()%4+1;
        for(j=1;j<=4;j++)
        {
            if(j==1)
               printf("\n");
            if(j == rightOp)
              printf("  (%c) %d",j+96,rightAns);           else
            {
               wrongAns=a/b+rand()%9+1; 
               printf("  (%c) %i",96+j,wrongAns); 
            }
        }  
        printf("\n  Write answer: ");
        scanf("%d",&enteredAns);
        if(enteredAns == rightAns)
           printf("               Right= 1",score++);
        else
           printf("               Wrong= 0");
     } 
    printf("\n\n   Score: %d/5  ",score);
     if(score==0)
     printf("   :-\"Poor!\"");
     else if(score==1) 
    printf("   :-\"Not Bad!\"") ;
    else if(score==2)
    printf("   :-\"Do Better!\"");
    else if(score==3)
    printf("   :-\"Good!\"");
    else if(score==4)
    printf("   :-\"Very Good!\"");
    else // here score == 5
    {
    printf("   :-\"Perfect!\"");
    printf("\n   Consider to increse hardness (Enter 1 for Yes else 0): ");
    scanf("%d",&i);
    if(i)
     {
        printf("\nVery Nice!\n"); 
        n=n*10+9; // increase the value of n to increase hardness
        score = 0;
         goto l2;
     }

    }
    printf("\n\n\nPlay again! (Enter 1 or 0): ");
    scanf("%d",&a);
    if(a)
       divi();
}

#include<stdio.h>
#include<stdlib.h>
struct numNode
{
    float num;
    struct numNode *next;
};
struct opNode
{
    char op;
    struct opNode *next;
};

void insertNum(struct numNode **ptr,float data)
{
    struct numNode *n;
    n=(struct numNode *)malloc(sizeof(struct numNode));
    n->num = data;
    if(*ptr == NULL)
    {
        *ptr=n;
        n->next = n;
    }
    else
    {
        n->next = (*ptr)->next;
        (*ptr)->next = n;
        *ptr=n;
    }
}

void insertOp(struct opNode **ptr, char op)
{
    struct opNode *n;
    n=(struct opNode*)malloc(sizeof(struct opNode));
    n->op = op;
    if(*ptr == NULL)
    {
        *ptr=n;
        n->next = n;
    }
    else
    {
        n->next = (*ptr)->next;
        (*ptr)->next = n;
        *ptr=n;
    }
}
void lastToFirstNum(struct numNode **List)
{
        struct numNode *t=*List;
        *List= t->next;
        t->next =NULL;
}
void lastToFirstOp(struct opNode **List)
{
        struct opNode *t=*List;
        *List= t->next;
        t->next =NULL;
}
int isOpPr(struct opNode **opList,char op)
{
        int i=0;
        struct opNode *t = *opList, *List=*opList;
        while(List)
        {
           i++;
           if(List->op == op)
           {
                   if(i==1)
                   {
                       *opList=List->next;
                       free(List);
                       return i;
                   }
                   t->next=List->next;
                   free(List);
                   return i;
           }
           t=List;
          (List)=(List)->next;
        }
        return 0;
}

void operate(struct numNode **numList,int opNo, char op)
{
        struct numNode *t, *List=*numList;
        int count=1;
        while(count != opNo)
        {
            count++;
            List = List->next;
        }
        if(op=='/' && List->next->num == 0)
        {
            printf("A number cannot be divided by 0");
     
        }
        if(op=='/')
        List->num=List->num / List->next->num;
        else if(op=='*')
        List->num=List->num * List->next->num;
        else if(op=='+')
        (*numList)->num=(*numList)->num + List->next->num;
        else if(op=='-')
        List->num=List->num - List->next->num;
        
        t = List->next;
        (List)->next=t->next;
        free(t);
        
}

     
int calculate()
{
    float in=0;
    int i,operationNo,y;
    struct numNode *t, *numList= NULL;
    struct opNode *opList=NULL;
    char op='+';
    do{
    printf("\n\nEnter the expression(followed by \"=\"): \n\n");
    while(op != '=')
    {
        scanf("%f",&in);
        insertNum(&numList,in);
        
        scanf(" %c",&op);
        insertOp(&opList,op);
        
    }
   
    t=numList;
    lastToFirstNum(&numList);
    lastToFirstOp(&opList);
/*       while(t)
    {
        printf("% f",t->num);
        t=t->next;
    }*/
    for(i=1,op='/' ; i<=4 ; i++)
    {
        if(i==2)
            op='*';
        else if(i==3)
            op='+';
        else if(i==4)
            op='-';
         while(operationNo=isOpPr(&opList,op))
         operate(&numList,operationNo,op);
    }
        
  /*  while(operationNo = isDiv(opList))
        divi(&numList,operationNo);
     while(operarionNo = isMul(opList))
         mul(&numList,operationNo);
     while(operationNo = isAdd(opList))
         add(&numList,operationNo);
     while(operationNo = isSub(opList))
         sub(&numList,operationNo);*/
     if(numList->num > 10000)
         printf("\b%.2g",numList->num);
     else
         printf("\b%.4f",numList->num);
     printf("\nAgain???(enter 1 else 0): ");
     scanf("%d",&y);
    }while(y==1);
     return 0;
}