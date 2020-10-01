#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root=NULL;
int len;
void append(void);
int length(void);
void delete(void);
void reverse(void);
void main()
{
    int ch;
    while(1)
    {
        printf("Singly Linked List Operations\n");
        printf("1. Append\n");
        printf("2. Length\n");
        printf("3. Delete\n");
        printf("4. Reverse\n");
        printf("Enter your choice: \n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: append();
            break;
            case 2: len=length();
            printf("Length=%d\n",len);
            break;
            case 3: delete();
            break;
            case 4: reverse();
            break;
            default:
                exit(0);

        }
    }
}
    void append()
    {
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("Enter node data: \n");
        scanf("%d", &temp->data);
        temp->link=NULL;
        if(root==NULL)
        {
            root=temp;
        }
        else
        {
            struct node *p;
            p=root;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }
    }
    int length()
    {
        struct node *temp;
        int count=0;
        temp=root;
        while(temp!=NULL)
        {
            count++;
            temp=temp->link;
        }
        return count;
    }

    void delete()
    {
        struct node *temp;
        int loc;
        printf("Enter the location: \n");
        scanf("%d",&loc);
        if(loc>length())
        {
            printf("Invalid locatiion\n");
        }
        else if(loc==1)
        {
            temp=root;
            root=temp->link;
            temp->link=NULL;
            free(temp);
        }
        else
        {
            struct node *p=root, *q;
            int i=1;
            while(i<loc-1)
            {
                p=p->link;
                i++;
            }
            q=p->link;
            p->link=q->link;
            q->link=NULL;
            free(q);
        }
    }

    void reverse()
    {
        int i,j,len,k,temp;
        struct node *p,*q;
        len=length();
        i=0;
        j=len-1;
        p=q=root;
        while(i<j)
        {
            k=0;
            while(k<j)
            {
                q=q->link;
                k++;
            }
            temp=p->data;
            p->data=q->data;
            q->data=temp;
            i++;
            j--;
            p=p->link;
            q=root;
            printf("Elements in reverse order\n");
        }
    }

