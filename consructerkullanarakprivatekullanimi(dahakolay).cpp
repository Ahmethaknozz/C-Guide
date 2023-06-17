#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class node{
    public:
    int data;
    node* sag;
    node* sol;
    node(){ data=0,sag=NULL,sol=NULL;};
    node(int x){ data=x,sag=NULL,sol=NULL;};
    
};

class tree{
    private:
    node* root;
    node* ekle1(int x,node* r);
    void yazdir1(node* r);
    int minimum1(node* r);
    int size1(node* r);
    
    public:
    tree(){root=NULL;};
    void ekle(int x);
    void yazdir();
    int minimum();
    int size();
};

void tree::ekle(int x){
    root=ekle1(x,root);
}

node* tree::ekle1(int x,node* r){
    if(root==NULL){
        node* yeni=new node(x);
        return yeni;
    }
    else{
        if(x>r->data){
            r->sag=ekle1(x,r->sol);
        }
        else{
            r->sol=ekle1(x,r->sag);
        }
        
    }
    return r;
}

void tree::yazdir(){
    yazdir1(root);
}

void tree::yazdir1(node* r){
    if(r==NULL){
        return;
    }
    else{
        yazdir1(r->sol);
        cout<<r->data<<endl;  
        yazdir1(r->sag);  
    }
}

int main(){
    tree agac;
    agac.ekle(5);
    agac.ekle(3);
    agac.ekle(1);
    agac.yazdir();
    
}
