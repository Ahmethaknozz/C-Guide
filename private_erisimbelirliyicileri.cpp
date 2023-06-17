#include <iostream>

using namespace std;

class infolarimiz{
private:   //private icendekilere sadece kendi class i icindeyken ulasilabilir
    string name;
    int id;
    int salary;
public:    
    void setname(string isim){
        name=isim;
        
    };

    string getname(){
        return name;                  //bur kodumuzda private bir degere dolayli yoldan nasil ulasacagimizi gorduk
    };                          //set ve get onemli komut  gibiler
};


int main()
{
    infolarimiz info1;
    
    info1.setname("hakan oz");   
    cout<<info1.getname()<<endl;
    return 0;
}