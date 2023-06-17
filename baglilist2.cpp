#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* ileri;
    node* onceki;
};

class hakan{
    private:
    node * head;
    public:
    hakan();
    void basa_ekle(int x);      // eger int mainin icinden (5) gibi bir deger vereceksek void imizin icine x i tanimlamaliyiz
    void yazdir();
    void sona_ekle(int x);
    void sirali_ekle(int x);
};


hakan::hakan()
{
    head=NULL;
}
void hakan::yazdir(){
    node* adres= head;      // head gibi 2. bir etiket belirledik adina da adres dedik // int adres=0 gibi dusun   //yani sayac tanimliyor gibi
    while(adres!=NULL){
        cout<<adres->data<<endl;
        adres=adres->ileri;         // adres++ diye dusunebilirsin
    }
}

void hakan::basa_ekle(int x){
    node * yeni_node= new node();     // etikete ihtiyac yok basa ekle de
    yeni_node->data=x;
    yeni_node->ileri=head;    // yeni_node nin ileri si head olursa yeni tanimlayacagimiz yeni_donemiz onun oncesine gelir //aslinda adres gibi 2. bir head tanimladik da denebilir
    head=yeni_node;
}

void hakan::sona_ekle(int x){
    if(head!=NULL){
        node* adres=head;            // while oncesinde yine sayac niyetine adres i tanimladik
        while(adres->ileri!=NULL){
            adres=adres->ileri;         // yazdir daki ile ayni adres++ diye dusun
        }
        node* yeni_node=new node();
        yeni_node->data=x;
        yeni_node->ileri=NULL;
        adres->ileri=yeni_node;    // adres i head a esiıtlemistik yani head in ileri si yeni_node demis olduk
    }
    else{
        basa_ekle(x);  
    }
}


int main()
{
    hakan list;
    list.basa_ekle(4);
    list.basa_ekle(9);
    list.basa_ekle(6);
    list.basa_ekle(17);
    
    list.yazdir();
}


