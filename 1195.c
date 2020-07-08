#include <stdio.h>

typedef struct node {
   int v;
   struct node *d, *e;
} node;

node *novo(int n) {
   node *nv = (node *) malloc(sizeof(node));
   nv->v = n;
   nv->e = nv->d = 0;
   return nv;
}

void pre(node *r) {
   if (r) {
      printf(" %d", r->v);
      pre(r->e);
      pre(r->d);
   }
}

void in(node *r) {
   if (r) {
      in(r->e);
      printf(" %d", r->v);
      in(r->d);
   }
}
void post(node *r) {
   if (r) {
      post(r->e);
      post(r->d);
      printf(" %d", r->v);
   }
}

void inserir(int n, node *r) {
   if (n < r->v)
      if (r->e != NULL) inserir(n, r->e);
      else r->e = novo(n);
   else
      if (r->d != NULL) inserir(n, r->d);
      else r->d = novo(n);
}

int main(void) {
   int c, n, i, j, v;
   scanf("%d", &c);
   for (i = 1; i <= c; ++i) {
      scanf("%d", &n);
      scanf("%d", &v);
      node *r = novo(v);
      for (j = 0; j < n-1; ++j) {
         scanf("%d", &v);
         inserir(v, r);
      }
      printf("Case %d:", i);
      printf("\nPre.:"); pre(r);
      printf("\nIn..:"); in(r);
      printf("\nPost:"); post(r);
      printf("\n\n");
   }

   return 0;
}


