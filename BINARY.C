#include<stdio.h>
#include<conio.h>
struct node
{
int key;
struct node(int item)
};
struct node*new node(int item)
{
struct node*temp=(struct node*)malloc(sizeof(struct node))
{
temp->key=item;
temp->key=item;
temp->left=temp->right=NULL;
}
void preorder(struct node*root)
{
if(root!=0)
{
printf("%d",root->key);
preorder("root->left");
preorder("root->right");
}
void inorder(struct node*root)
{
if(root!=0)
{
inorder("root->left");
printf("%d",root->key);
inorder("root->right");
}
void postorder(struct node*root)
{
if(root!=0)
{
postorder("root->left");
postorder("root->right");
printf("%d",root->key);
}
