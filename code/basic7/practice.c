#include <stdio.h>

typedef struct Node {
   int data;
   struct Node *next;
} Node;

int main() {
   Node a = {10, NULL};
   Node b = {20, NULL};
   Node c = {30, NULL};

   a.next = &b;
   b.next = &c;

   Node *p = &a;
   p = p->next->next;
   printf("%d\n", p->data);
   return 0;
}