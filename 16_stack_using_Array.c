#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void push_data();
void pop_data();
void display_data();
int top = -1;
int stack[5];
int size = 5;
int data;
int main()
{

    while (1)
    {
        system("cls");
        int choice;
        printf("\t\t......STACK.....\n");
        printf("\t\t1...too push: \n");
        printf("\t\t2...too pop: \n");
        printf("\t\t3...too display: \n");
        printf("\t\t4...too exit: \n");
        printf("\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push_data();
            break;
        case 2:
            pop_data();
            break;
        case 3:
            display_data();
            break;
        case 4:
            exit(0);

        default:
            printf("\tWrong choice!!!");
            break;
        }
    }

    return 0;
}
void push_data()
{
    if (top == size - 1)
    {
        printf("\t\tSTACK Overflow!!!\n");
        getch();
    }
    else
    {
        top++;
        printf("\t\t\tEnter your data: ");
        scanf("%d", &data);
        stack[top] = data;
        printf("\tData added...\n");
        getch();
    }
}
void pop_data()
{
    if (top == -1)
    {
        printf("\t\tSTACK Underflow!!!\n");
        getch();
    }
    else
    {
        printf("\tYour data is %d\n", stack[top]);
        top--;
        printf("\tData removed...\n");
        getch();
    }
}
void display_data()
{
    if (top == -1)
    {
        printf("\nStack is Empty\n");
        getch();
    }
    else
    {
        printf("Your data in stack are: ");

        for (int i = 0; i <= top; i++)
        {

            printf("%d  ", stack[i]);
        }

        printf("\n");
        getch();
    }
}