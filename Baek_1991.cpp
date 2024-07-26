#include<iostream>
#include<vector>
using namespace std;

struct node
{
    char c;
    node *left = NULL;
    node *right = NULL;
};

void preorder(node *A)
{
    cout << A->c;
    if(A->left!=NULL)
    preorder(A->left);
    if(A->right!=NULL)
    preorder(A->right);
}

void inorder(node *A)
{
    if(A->left!=NULL)
    inorder(A->left);
    cout << A->c;
    if(A->right!=NULL)
    inorder(A->right);
}

void postorder(node *A)
{   
    if(A->left!=NULL)
    postorder(A->left);
    if(A->right!=NULL)
    postorder(A->right);
    cout << A->c;
}

int main(void)
{
    int node_cnt;

    cin >> node_cnt;

    vector <node> nod(26);

    node *root;

    for(int i=0; i<node_cnt; i++)
    {
        char left, right, mid;    

        cin >> mid >> left >> right;

        nod[mid-'A'].c=mid;
        if(left!='.')
        nod[mid-'A'].left= &nod[left-'A'];
        if(right!='.')
        nod[mid-'A'].right= &nod[right-'A'];
    }   

    preorder(&nod[0]);
    cout << endl;
    inorder(&nod[0]);
    cout << endl;
    postorder(&nod[0]);
    cout << endl;
    
}