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
void insert_first(struct node **head, int data)
{
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=*head;
    *head=new_node;
}
void print(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
        if(head!=NULL)
        {
            cout<<", ";
        }
    }
    cout << endl;
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
void print_location_of(struct node *head, int data)
{
    int count=0;
    while(head!=NULL)
    {
        if(head->data==data)
        {
            cout <<count+1<< "th Location"<< endl;
            break;
        }
        count++;
        head=head->next;
    }
}
void delete_by_data(struct node **head, int data)
{
    while(*head!=NULL)
    {
        if((*head)->data==data)
        {
            *head=(*head)->next;
            break;
        }
        head=&((*head)->next);
    }
}
void delete_before(struct node **head, int data)
{
    while(*head!=NULL)
    {
        if((*head)->next->data==data)
        {
            *head=(*head)->next;
            break;
        }
        head=&((*head)->next);
    }
}
void delete_after(struct node **head, int data)
{
    while(*head!=NULL)
    {
        if((*head)->data==data)
        {   
            delete_by_data(&((*head)->next),(*head)->next->data);
        }
        head=&((*head)->next);
    }
}
void print_count(struct node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    cout << count <<" Counts"<< endl;
}
void delete_first(struct node **head)
{
    *head=(*head)->next;
}
void delete_last(struct node **head)
{
    while(*head!=NULL)
    {
        if((*head)->next->next==NULL)
        {
            (*head)->next=NULL;
            break;
        }
        head=&((*head)->next);
    }
}
int main(){
    struct node *head = NULL;
    int temp,temp2;
    int a[11]={5, 3, 4, 8, 13, 55, 79, 31, 27, 87};
    for(int i=0;i<10;i++)
    {
        insert(&head,a[i]);
    }

    cin >> temp2;
    insert_first(&head, temp2);

    cin >> temp;
    insert(&head, temp);

    cin >> temp2;
    cin >> temp;
    insert_before(&head, temp, temp2);
    
    cin >> temp2;
    cin >> temp;
    insert_after(&head, temp, temp2);

    cin >> temp;
    print_location_of(head, temp);

    print(head);
    print_count(head);
    delete_first(&head);
    delete_last(&head);
    cin >> temp;
    delete_by_data(&head, temp);

    cin >> temp;
    delete_before(&head, temp);

    cin >> temp;
    delete_after(&head, temp);
    print(head);
    print_count(head);
    // cin >> temp;
    // insert(&head, temp);


}
