#include<iostream>
#include<vector>
using namespace std;
#include<cstring>
#include<cstdio>
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


void printPath(struct node *root, vector<int> a)
{
  if(!root) return;
  
    if(!root->left && !root->right) {
       for(vector<int>::iterator i=a.begin();i!=a.end();i++)
	{
	cout<<*i<<" ";
	}
	cout<<root->data<<endl; return;
      
    }
    a.push_back(root->data);
    if(root->left)printPath(root->left,a);
    if(root->right)printPath(root->right,a); 
}


bool checksum(struct node *root, int k)
{
  if(!root && k!=0) return 0;
  if(root->data==k)return true;
  else return (checksum(root->left,k-root->data) || checksum(root->right, k-root->data));
}

struct node* mirror(struct node *root)
{
  if(!root) return root;
  struct node *temp=new node;
  temp->data= root->data;
  temp->left= mirror(root->right);
  temp->right=mirror(root->left);
  return temp;
}


void rev(struct node *root)
{
  static int k=0;
  if(!root)return ;
  else
  {
    rev(root->right);
    cout<<k<<" ";
    k+=root->data;
    rev(root->left);
  }
}


struct node* greaterSumUtil(struct node *root, int k)
{
  if(!root) return root;  
  else
  {
    if(!root->right)
    {
      int d = root->data;
      root->data = k;
      root->left= greaterSumUtil(root->left,k+d);
    }
    else
    {
      int d= root->data;
      int tmp=root->right->data;
      root->right=greaterSumUtil(root->right,0);
      root->data=root->right->data+ k+tmp;
      root->left = greaterSumUtil(root->left,root->data+d);      
    }
    return root;
  }
}

int main()
{
  string str;
  getline(cin,str);
  cout<<str;
  
  
    for(int i=2;i<10;i+=1)
  {
    int n;
    cin>>n;
    root=insert(root,n);
    
  }
  struct node *sroot=new node;
 // sroot = greaterSumUtil(root,0);
  rev(root); 
//  cout<<endl;
  //vector<int>a;
 // printPath(root,a);
//cout<<checksum(root,5)<<" "<<checksum(root, 23)<<" "<<checksum(root, 8)<<" "<<checksum(root, 9);
 //inorder(mirror(root));
}