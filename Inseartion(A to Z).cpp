#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head;

int print(){
struct node *p=head;
while(p != NULL){
    printf("%d->",p->data);
    p=p->next;
}
printf("NULL\n");
return 0;
}
//code of added node in fast position.
int fast(){
struct node *new_node;
new_node=(struct node *)malloc(sizeof(struct node));
printf("Added a new node in fast position.\n");
printf("Data of new_node: ");
scanf("%d",&new_node->data);
new_node->next=head;
head=new_node;
return print();
}
//code of added node at Nth position
int meddle(){
struct node *medle_node,*p1,*p2;
p1=head;
printf("Added a new node in Nth position\n");
int a;
printf("The position of added the node: ");
scanf("%d",&a);
printf("The data is: ");
for(int i=0;i<a-2;i++){
    p1=p1->next;
}
medle_node=(struct node *)malloc(sizeof(struct node));
scanf("%d",&medle_node->data);
p2=p1->next;
p1->next=medle_node;
medle_node->next=p2;
return print();
}
//code of added data in last position
int last(){
    printf("Added node in last position\n");
struct node *last_node;
last_node=(struct node *)malloc(sizeof(struct node));
printf("The last node data is: ");
scanf("%d",&last_node->data);
last_node->next=NULL;
struct node *p=head;
while(p->next!=NULL){
    p=p->next;
}
p->next=last_node;
return print();
}
int main(){
struct node *node,*prev;
int x;
printf("How many node I creat: ");
scanf("%d",&x);
printf("Data of node: ");
for(int i=0;i<x;i++){
    node=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&node->data);
    if(i==0){
        head=node;
    }
    else{
        prev->next=node;
    }
    prev=node;
}
node->next=NULL;
print();
fast();
meddle();
last();
return 0;
}
