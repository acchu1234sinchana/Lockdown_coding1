#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int num;
    struct node *next;
};
 
void create(struct node **);
void reverse(struct node **);
void release(struct node **);
void display(struct node *);
 
int main()
{
    struct node *p = NULL;
    int n;
 
    printf("Enter data into the list\n");
    create(&p);
    printf("Displaying the nodes in the list:\n");
    display(p);
    printf("Reversing the list...\n");
    reverse(&p);
    printf("Displaying the reversed list:\n");
    display(p);
    release(&p);
 
    return 0;
}
 
void reverse(struct node **head)
{
    struct node *p, *q, *r;
 
    p = q = r = *head;
    p = p->next->next;
    q = q->next;
    r->next = NULL;
    q->next = r;
 
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    *head = q;
}