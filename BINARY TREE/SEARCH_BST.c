#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node *l;
    struct node *r;
};

struct node *create(int n)
{
    struct node *m = (struct node *)malloc(sizeof(struct node));
    m->x = n;
    m->l = NULL;
    m->r = NULL;
    return m;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->l);
        printf("%d ", root->x);
        inorder(root->r);
    }
}
/*want to search in bst
             50
            /  \
           40   60
          / \   / \
         20 45 55  70

*/
struct node* search(struct node *root, int n)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->x == n)
    {
        return root;
    }else if(root->x>n){
        return search(root->l , n);
    }else{
        return search(root->r , n);
    }
}
int main()
{
    struct node *p = create(50);
    struct node *p1 = create(40);
    struct node *p2 = create(60);
    struct node *p3 = create(20);
    struct node *p4 = create(45);
    struct node *p5 = create(55);
    struct node *p6 = create(70);

    // linking
    p->l = p1;
    p->r = p2;
    p1->l = p3;
    p1->r = p4;
    p2->l = p5;
    p2->r = p6;

    inorder(p);
    printf("\n");
    int j=53;
    struct node* h= search(p,j);
    if( h != NULL && h->x==j){
        printf("found");
    }
else{
        printf("not found");
    }

    return 0;
}