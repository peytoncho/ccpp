#include <stdlib.h>
#include <stdio.h>

struct node {
	int x;
	struct node *next;

};

struct node * add_node(struct node *nd, struct node *prev_node, int value)
{
    nd = malloc(sizeof(struct node));
    nd->next = 0;
    nd->x = value;
    prev_node->next = nd;
    return nd;    
}

int main(){
    struct node *root;
    struct node *conductor;
    struct node *nd1;
    struct node *nd2; 
    struct node *nd3;
    struct node *nd4;
    
    root = malloc(sizeof(struct node));
    root->next = 0;
    root->x = 5;

    conductor = malloc(sizeof(struct node));

    nd1 = add_node(nd1,root,10);
    nd2 = add_node(nd2,nd1,20);
    nd3 = add_node(nd3,nd2,30);
    nd4 = add_node(nd4,nd3,40);
//    conductor->next = malloc(sizeof(struct node));
//    conductor = conductor->next;
    
    if(conductor == 0)
    {   
        printf("Out of Memory\n");
        return 0;
    } 
//    conductor->next = 0;
//    conductor->x = 42;

    conductor = root;
    if(conductor!=0) {
        while(conductor->next!=0)
        {
            printf("%d\n",conductor->x);
            conductor = conductor->next;
        }
        printf("%d\n",conductor->x);
         
    }
    
   return 0;    
}

