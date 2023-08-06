#include<stdio.h>
#include<stdlib.h>

struct node
{
        struct node *left;
        int data;
        struct node *right;
};
struct node *insert(struct node *ptr, int ikey )
{
        if(ptr==NULL)
        {
                ptr = (struct node *) malloc(sizeof(struct node));
                ptr->data = ikey;
                ptr->left = NULL;
                ptr->right = NULL;
        }
        else if(ikey < ptr->data) 
                ptr->left = insert(ptr->left, ikey);
        else if(ikey > ptr->data) 
                ptr->right = insert(ptr->right, ikey);
        else
                printf("\nDuplicate key\n");
        return(ptr);
}

void display(struct node *ptr,int level)
{
        int i;
        if(ptr == NULL )
                return;
        else
    {
                display(ptr->right, level+1);
                printf("\n");
                for (i=0; i<level; i++)
                        printf("    ");
                printf("%d", ptr->data);
                display(ptr->left, level+1);
        }
}


int NodesAtLevel(struct node *ptr, int level)
{
        if(ptr==NULL)
                return 0;
        if(level==0)
                return 1;
        return NodesAtLevel(ptr->left,level-1) + NodesAtLevel(ptr->right,level-1);
}

int main()
{
        struct node *root=NULL,*root1=NULL,*ptr;
        int choice,k,item,level;
printf("\n");
                printf("1.Insert Tree \n");
                printf("2.Display Tree \n");
                printf("3.Number of Nodes \n");
                printf("4.Quit\n");
              
        while(1)
        {
             
                printf("\nEnter your choice : ");
                scanf("%d",&choice);

                switch(choice)
                {

                case 1:
                        printf("\nEnter the key to be inserted : ");
                        scanf("%d",&k);
                        root = insert(root, k);
                        break;

        case 2:
            printf("\n");
            display(root,0);
            printf("\n");
            break;

        case 3:
            printf("\n");
            printf("Enter any level :: ");
            scanf("%d",&level);
            printf("\nNumber of nodes at [ %d ] Level :: %d\n",level,NodesAtLevel(root,level));
            break;

        case 4:
                        exit(1);

                 default:
                        printf("\nWrong choice\n");

                }
        }

        return 0;

}
