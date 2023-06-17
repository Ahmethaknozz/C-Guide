#include<iostream>

using namespace std;


class node{
    public:
    int data;
    node* right;
    node* left;
    node(){data=0,right=NULL,left=NULL;};
    node(int x){data=x,right=NULL,left=NULL;};
    
};

class tree{
    private:
    node* root;
    node* ekle1(int x,node* r);
    void showtree1(node* r);
    int size1(node* r);
    int minimum1(node* r);
    int maximum1(node* r);
    node* delete2(int x, node* r);
    public:
    tree(){root=NULL;};
    int minimum();
    int maximum();
    void ekle(int x);
    void delete1(int x);
    void showtree();
    int size();
    
    
};

void tree::delete1(int x){
    root=delete2(x,root);
}

node* tree::delete2(int x,node* r){
    if(x>r->data){
        r->right=delete2(x,r->right);
    }
    else if(x<r->data){
        r->left=delete2(x,r->left);
    }
    else{
        if(r->left==NULL&&r->right==NULL){
            return NULL;
        }
        else if(r->right==NULL){
            node* temp=r->left;
            delete(r);     // buradaki delete yi biz tanimlamadik demekki komutmus
            return temp;
        }
        else if(r->left==NULL){
            node* temp=r->right;
            delete(r);    //yukari ile ayni olay
            return temp;
        }
        else{
            int min=minimum1(r->right);
            r->data=min;
            r->right=delete2(min,r->right);
        }
    }
    return r;
}


void tree::ekle(int x){
    root=ekle1(x,root);
}

node* tree::ekle1(int x,node* r){
    if(r==NULL){
        node* yeninode=new node(x);
        return yeninode;
    }
    else{
        if(x>r->data){
            r->right=ekle1(x,r->right);
        }
        else{
            r->left=ekle1(x,r->left);
        }
    }
    return r;
}

int tree::maximum(){
    return maximum1(root);
}

int tree::maximum1(node* r){
    node* temp=r;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}

int tree::minimum(){
    return minimum1(root);
}

int tree::minimum1(node* r){
    node* temp= r;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
    
}

void tree::showtree(){
    showtree1(root);
}

void tree::showtree1(node* r){
    if(r==NULL){
        return ;
    }
    else{
        showtree1(r->left);
        cout<<r->data<<endl;
        showtree1(r->right);
    }
}

int tree::size(){
    return size1(root);
}

int tree::size1(node* r){
    if(r==NULL){
        return 0;
    }
    else{
        return(1+size1(r->left)+size1(r->right));
    }
}



int main(){
    tree agac;
    agac.ekle(6);
    agac.ekle(100);
    agac.ekle(3);
    agac.ekle(7);
    agac.ekle(12);
    agac.ekle(23);
    agac.ekle(35);
    agac.delete1(100);
    agac.showtree();
    cout<<"min deger: "<<agac.minimum()<<endl;
    cout<<"max deger: "<<agac.maximum()<<endl;
    cout<<agac.size()<<endl;
}


