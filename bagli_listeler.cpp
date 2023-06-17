#include<iostream>

using namespace std;


class node{
    public:
    int data;
    node* ileri;
    node* prev;
};

class listem{
    private:
    node*head;
    public:
    listem();
    void basa_ekle(int x);
    void yazdir();
};

listem::listem(){
    head=NULL;
}



void listem::basa_ekle(int x){
    node* yeni_node= new node();
    yeni_node->data=x;
    yeni_node->prev=head;
    head=yeni_node;
}

void listem::yazdir(){
    node * adresim = head;
    while(adresim!=NULL){
        cout<<adresim->data<<" ";
        adresim=adresim->prev;
    }
}


int main(){
    
    listem list1;
    list1.basa_ekle(4);
    list1.basa_ekle(9);
    list1.yazdir();
}
    
    
    