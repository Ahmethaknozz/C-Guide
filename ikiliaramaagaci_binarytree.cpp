#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node * right;
    node *left;
    node(){ data=0, right=NULL,left=NULL;}; //parametresiz constructor
    node(int x){data=x, right=NULL,left=NULL;};  //parametreli constructor
    
};

class tree{
    private:
    node * root;
    node * ekle2(int x,node* r);
    void showtree1(node * r);
    int size1(node* r);
    int min1(node* r);
    
    
    public:
    tree(){root=NULL;};
    void ekle(int x);
    void showtree();
    int size();
    int min();
    
};

void tree::ekle(int x){
    root=ekle2(x,root);
}

node* tree::ekle2(int x, node* r){
    if(r==NULL){
        node* yeni= new node(x);
        return yeni;
    }
    else{
        if(x>r->data){
            r->right=ekle2(x,r->right);
        }
        else{
            r->left=ekle2(x,r->left);
        }
        
    }
    return r;
}

void tree::showtree(){
    showtree1(root);
}

void tree::showtree1(node* r){
    if(r==NULL){
        return;
    }
    else{
        showtree1(r->left);
        cout<<r->data<<endl;  //cout u uste alırsak pre order olur önce kok sonra sol sonra sag
        showtree1(r->right);  //cout u en alta alırsak post order olur ilk once sol sag sonra kok
    }
}

int tree::size(){    // int dedik cunku bize geri dondermesini istedik,yazdirmak isteseydik void yazardik
    return size1(root);
}

int tree::size1(node* r){
    if(r==NULL){
        return 0;
    }
    else{
        return (1+size1(r->right)+size1(r->left));
    }
}



int main(){
    tree agac;
    agac.ekle(10);
    agac.ekle(20);
    agac.ekle(5);
    agac.ekle(6);
    agac.ekle(34);
    cout<<agac.size()<<endl;
    agac.showtree();
}