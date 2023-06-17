#include<iostream>

using namespace std

class infolarimiz{
    private:
    string name;
    int age;
    public:
    void setage(int yas){
        if(yas<0){
            cout<<"boyle bir deger giremezsiniz"<<endl;
        }
        else{
            age = yas;
        }
    int getage(){
        return age;
    }
    void setname(string isim){
        name=isim;
    }
    string getname(){
        return name;
    }
        
    };

    
    
}

int main(){
    
    infolarimiz* info1= new infolarimiz();   // pointer kullandiigimiz icin yine ok(->) ile erisecegiz
    info1->setname("hakan oz");
    info1->setage(21);
    cout<<info1->getage()<<endl;
    cout<<info1->getname()<<endl;  // parantezlere dikkat
    return 0;
}