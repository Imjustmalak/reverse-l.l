#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*create_node(){
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter the data : ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    return new_node;

    }
    void add(struct node**head){
        struct node*new_node=create_node();
        if(*head== NULL){
            *head=new_node;
        }else{
            struct node*ptr=*head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=new_node;}
    }
    void reverse(struct node**head){
        if(*head==NULL){
            printf ("list is empty");}else{
                struct node*p=*head,*q=NULL,*next;
                while(p!=NULL){
                    next=p->next;
                    p->next=q;
                    q=p;
                    p=next;
                }
                *head=q;
                
                    
                       
                    }
            }
            void print(struct node*head){
                if(head==NULL){
                    printf("list is empty");

                }else{
                    struct node*p=head;
                    while(p!=NULL){
                        printf("%d ",p->data);
                        p=p->next;
                    }
                }
                
            }
            int main(){
                int n;
                struct node*head=NULL;
                printf("enter number of nodes :");
                scanf("%d",&n);
                for(int j=0;j<n;j++){
                    add(&head);
                }
                reverse(&head);
                print(head);
            }
    
