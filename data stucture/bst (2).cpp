#include<bits/stdc++.h>

using namespace std;

struct Bnode{
    int data;
    Bnode* left;
    Bnode* right;
};

Bnode* GetNewNode(int data){
    Bnode* newNode = new Bnode();

    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Bnode* Insert(Bnode* root,int data){
    if(root== NULL){
        root = GetNewNode(data);
    }
    else if(data<= root->data){
        root->left = Insert(root->left,data);
    }
    else{
        root->right = Insert(root->right,data);
    }
    return root;

}

bool Search(Bnode* root,int data){
    if(root == NULL){
        return false;
    }
    else if(root->data == data){
        return true;
    }
    else if(data<= root->data){
        return Search(root->left,data);
    }
    else{
        return Search(root->right,data);
    }

}

int main(){
    Bnode* root = NULL;
    root = Insert(root,15);
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root,25);
    root = Insert(root,8);
    root = Insert(root,12);
    int number;
    cout<<"Enter number be searched\n";
    cin>> number;
    if(Search(root,number)== true) cout<<"Found\n";
    else
        cout<<"Not Found\n";
}
