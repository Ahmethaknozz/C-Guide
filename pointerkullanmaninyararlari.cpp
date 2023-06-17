#include <iostream>

using namespace std;

class employee{
    private:
        string name;
        int salary;
        int id;
    public:
        employee(){
            this->name="bilgi yok";
            this->salary=0;
            this->id=0;
        }
        employee(string name,int salary){
            this->name=name;
            this->salary=salary;
            
        }
        employee(string name,int salary,int id){
            this->name=name;
            this->salary=salary;
            this->id=id;
        }
        void setsalary(int salary){
            this->salary=salary;
        }
        int getsalary(){
            return salary;
        }
        void setname(string name){
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
            cout<<"kimlik: "<<this->id<<endl;
            cout<<"maas: "<<this->salary<<endl;
        }
    
    
    
};          // dikkat class imizin sonuna ; koyuyoruz icindekieri de kapsadigi icin icindekilere koymadik


/*void deneme(employee emp){   // dikkat fonksyonda kullanacagimiz bir parametre varsa onu ( )icinde belirtiyoruz
    emp.showinfos();         // eger yoksa yukarıda oldugu gibi cout larda gerek kalamdi
                             // dikkat employee emp demek assagida yaptıgımiz employee info1 demek ile ayni
};
*/

    // simdi birde pointer kullanarak yapalim bakalim nasil olacak.

void deneme(employee *abc){  // pointer olusturduk   // * isareti employee* da *abc biciminde de yazilabiliyor dikkat.
    abc->showinfos();        // pointer ile diger yonteme gore daha az yer kullanilmis oldu 4 byte gibi 
    

    
}

int main()
{
    employee info1("hakan",25000,3);  // bu sirayi yukarıda showinfos da tanımladigimiz cout lara gore yapacaz
    info1.showinfos();
    //deneme(info1);
    deneme(&info1);    // abc artik burdaki objemizin(info1) in yerini tutuyor
    
    return 0;
}
