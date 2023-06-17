#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node(){data=0,next=NULL;};
    node(int x){data=x,next=NULL;};
};

class yigin{
    private:
    node* root;
    public:
    yigin(){root=NULL;};
    bool isempty(){
        return root==NULL;   //root== NULL ise 1 degeri verir
    }
    void ekle(int x){
        if(isempty()){   // eger bos ise 1 degeri dondurecek
            root=new node(x);
        }
        else{
            node* temp= root;
            while(temp->next!=NULL){  // eger next ileri geri yukari assagi gibi node lar var ise o zaman ekle fonks void deriz diger turlu int driz
                temp=temp->next;      //yukarida bahsettigim delete icin de gecerli
                
            }
            temp->next=new node(x);
        }
    }
    
    void yazdir(){
        if(isempty()){
            cout<<"kuyruk bostur,"<<endl;
        }
        else{
            node* temp=root;
            while(root!=NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
                
            }
            
        }
    }
};

int main(){
    yigin y1;
    y1.ekle(3);
    y1.ekle(5);
    y1.ekle(8);
    y1.yazdir();
}
    
    
    
    
    
    