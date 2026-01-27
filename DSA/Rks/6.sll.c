#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} *node;

struct node *createLL() {
  printf("Enter the length of LL you want to create: ");
  int n;
  scanf("%d", &n);
  if (n < 1) {
    printf("'%d' is not valid length for creation of LL\n", n);
    return NULL;
  } else {
    struct node *root, *p, *q;
    root = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value for root node's data: ");
    scanf("%d", &root->data);
    root->next = NULL;
    p = root;
    while (--n) {
      q = (struct node *)malloc(sizeof(struct node));
      q->next = NULL;
      printf("Enter the value of next node: ");
      scanf("%d", &q->data);
      p->next = q;
      p = p->next;
    }
    return root;
  }
}

void printLL(struct node *root) {
  struct node *tmp = root;
  while (tmp != NULL) {
    printf("%d ", tmp->data);
    tmp = tmp->next;
  }
  printf("\n");
}

int main() {
  printf("***** Hello, Welocome to my Program *****\n");
  node myLL = createLL();
  printLL(myLL);

  return 0;
}