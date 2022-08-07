#include <stdio.h>
int worker(int n, int a[]);
int search_1(int n,int a[]);
int delete_1(int n,int a[]);
int update_1(int n,int a[]);
int main(void)
{
    // your code goes here

    int i = 0, n, a[100] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 0};
    printf("Enter 1 for Searching, 2 for Deleting, 3 for Updating: \n");
    scanf("%d", &n);
    worker(n, a);
    return 0;
}
int search_1(int n,int a[])
{
    int t = 0, f = 0;
    printf("Enter the number to be searched: \n");
    scanf("%d", &t);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            f = 1;
            printf("%d exists at %dth position \n", a[i], i + 1);
        }
    }
    if (f == 0)
    {
        printf("%d does not exist in the list \n", t);
    }
    return 0;
}
int update_1(int n,int a[])
{
    int t = 0, f = 0;
    printf("Enter the number to be updated: \n");
    scanf("%d", &t);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            printf("Enter the new value: \n");
            scanf("%d", &a[i]);
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("%d does not exist in the list \n", t);
    }
    else
    {
        printf("Updated array is: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
int delete_1(int n,int a[])
{
    int t = 0, f = 0;
    printf("Enter the number to be deleted: \n");
    scanf("%d", &t);
    // find array length
    int i = 0;
    for (; i < n; i++)
    {
        if (a[i] == t)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("%d does not exist in the list \n", t);
    }
    else
    {
        for (int j = i; j < n; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = 0;
        printf("%d deleted \nNew List:", t);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
int worker(int n, int a[])
{
    int no = 0;
    while (a[no] != 0)
    {
        no++;
    }
    switch (n)
    {
    case 1:
        search_1(no,a);
        break;
    case 2:
        delete_1(no,a);
        break;
    case 3:
        update_1(no,a);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}
