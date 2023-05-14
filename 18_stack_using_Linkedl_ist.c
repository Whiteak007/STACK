#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *right;
};
struct stack *top = NULL;

struct stack *at_beg(struct stack *head, int data)
{
    struct stack *first = (struct stack *)malloc(sizeof(struct stack));

    if (first == NULL)
    {
        printf("Stack OVERFLOW...\n");
        getch();
    }
    else
    {
        first->data = data;
        first->right = NULL;

        first->right = head;
        head = first;
        return head;
    }
}
struct stack *pop(struct stack *head)
{
    if (head == NULL)
    {
        printf("Stack UNDERFLOW...");
    }
    else
    {
        printf("Your poped data is %d", head->data);
        head = head->right;
    }
}
void display_list(struct stack *mover)
{
    mover = top;
    printf("Data's in your stack is: ");
    while (mover !=NULL)
    {
        printf("%d  ", mover->data);
        mover = mover->right;
    }
    getch();
}
int main()
{
    int data_for_big;
    while (1)
    {
        system("cls");
        int choice;
        printf("\t\t......QUEUE......\n");
        printf("\t\t1. too insert data: \n");
        printf("\t\t2. too delete data: \n");
        printf("\t\t3. too display: \n");
        printf("\t\t4. too exit: \n");
        printf("\tPlease! Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter your data :");
            scanf("%d", &data_for_big);
            top = at_beg(top, data_for_big);
            printf("\nData pushed...");
            getch();
            break;

        case 2:
            top = pop(top);
            printf("\nData poped...");
            getch();
            break;

        case 3:
            display_list(top);
            break;

        case 4:
            exit(0);
            
        default:
            printf("\tWrong choice!!!");
            getch();
            break;
        }
    }
    return 0;
}