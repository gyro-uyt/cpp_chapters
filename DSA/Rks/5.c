#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void printLL(struct node *head){
	struct node *tmp=head;
	while(tmp!=NULL){
		if (tmp->next ==NULL){
			printf("%s\n"," ");
		}else{
		printf("%d%s", tmp->data, " -> ");
		tmp=tmp->next;
		}
	}
}
int main(){
	struct node *root,*p,*q;
	root=(struct node*)malloc(sizeof(struct node));
	printf("%s","Enter root data: ");
	scanf("%d",&root->data);
	root->next=NULL;
	p=root;
	printf("%s","Enter no. of nodes: ");
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		q=(struct node*)malloc(sizeof(struct node));
		printf("%s","Enter value of next node: ");
		scanf("%d", &q->data);
		q->next=NULL;
		p->next=q;
		p=p->next;
	}
	
	printLL(root);
	
	return 0;
}
