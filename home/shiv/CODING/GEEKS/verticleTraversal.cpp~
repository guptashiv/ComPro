#include<iostream>
#include<vector>

using namespace std;
int O=5000; 
struct node
{
  int data;
  struct node *right, *left;
}*root;

node *insert(struct node *root, int key)
{
  struct node *ptr = new node;
  ptr->data = key;
  ptr->right= NULL; 
  ptr->left = NULL;
  
  if(!root)
    return ptr;        
  else
  {
    if(root->data > key)
      root->left=insert(root->left, key);
    else
      root->right=insert(root->right, key);     
  }
  return root;
}

void inorder(struct node *ptr)
{
  if(!ptr)return;
  else{
    inorder(ptr->left);
    cout<<ptr->data<<" ";
    inorder(ptr->right);
  }
}

vector<vector<int> >p(100000);
void verticleTraversalUtil(struct node *ptr, int k)
{
  if(!ptr) return;
  p[k+O].push_back(ptr->data);
  verticleTraversalUtil(ptr->left, k-1);
  verticleTraversalUtil(ptr->right, k+1);  
}

void verticleTraversal(struct node* ptr)
{
  verticleTraversalUtil(ptr,0);
  for(int i=0;i<100000;i++)
  {
    if(p[i].begin()!=p[i].end())
    {
      for(vector<int>::iterator j=p[i].begin();j!=p[i].end();j++)
      {
	cout<<(*j)<<" ";
      }cout<<endl;
    }
  }
}



int main()
{
  struct node *root= NULL;
  inorder(root); 
  for(int i=1;i<10;i+=1)
  {
    int n;
    cin>>n;
    root=insert(root,n);
    
  }
  inorder(root); 
  cout<<endl;
  verticleTraversal(root);
  
}