
#include <iostream>

using namespace std;

class employee{
private:
    string name;
    int id;
    int salary;
public:
    /*employee(){
        this->name="bilgi yok";   // bos bir constructer olusturduk
        this->salary=0;
        this->id=0;
    }
    employee(string name,int salary){ // suan asiri yüklüyoruz(overloading) yapiyoruz  // constructer tanimladik
        this->name=name;
        this->salary=salary;
        this->id=0;   // gonderilmemis oldugu icin 0 verebiliriz
        
    }
    
    
    employee(string name,int salary,int id){
        this->name=name;
        this->salary=salary;
        this->id=id;
    
       
    }*/
    void setsalary(int salary){
        this->salary=salary;
    }
    int getsalary(){
        return salary;
    }
    void setname(int name){
        this->name=name;
    }
    string getname(){
        return name;
    }
    void setid(int id){
        this->id=id;
    }
    int getid(){
        return id;
    }
    void showinfos(){
        cout<<"isim: "<<this->name<<endl;
        cout<<"maas: "<<this->salary<<endl;
        cout<<"kimlik"<<this->id<<endl;
    }
};


int main()
{
    //employee info1("hakan oz",25000,15);
    //employee info2("mustafa",10000);
    employee info3;  // bos constructer oldugu icin boyle cagiriyoruz   
    //info2.showinfos();             //gordugumuz gibi bu yerleri yorum satiri yaptıgımızda info3 calisti 
    //info1.showinfos();             //bos constructer da yorum satiri olmasina ragmen calisti 
    info3.showinfos();               //calisti cunku c++ kendidi defoult(bos) bir constructer olusturdu
    return 0;
}