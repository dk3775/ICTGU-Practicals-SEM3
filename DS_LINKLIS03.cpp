// implementing linked list and its operations
#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;
};

void insert(struct node **head, int data)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    while(*head!=NULL)
    {
        head=&((*head)->next);
    }
    new_node->data=data;
    new_node->next=NULL;
    *head=new_node;
}

void print(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
void insert_before(struct node **head, int data, int before)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    while(*head!=NULL)
    {
        if((*head)->data==before)
        {
            new_node->data=data;
            new_node->next=*head;
            *head=new_node;
            break;
        }
        head=&((*head)->next);
    }
}
void insert_after(struct node **head, int data, int after)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    while(*head!=NULL)
    {
        if((*head)->data==after)
        {
            new_node->data=data;
            new_node->next=(*head)->next;
            (*head)->next=new_node;
            break;
        }
        head=&((*head)->next);
    }
}
int main(){
    struct node *head = NULL;
    int temp,temp2;
    cin >> temp;
    insert(&head, temp);
    cin >> temp;
    insert(&head, temp);
    cin >> temp;
    insert(&head, temp);

    cin >> temp2;
    cin >> temp;
    insert_before(&head, temp2, temp);

    cin >> temp;
    insert(&head, temp);
    cin >> temp;
    insert(&head, temp);

    cin >> temp2;
    cin >> temp;
    insert_after(&head, temp2, temp);

    print(head);
}
