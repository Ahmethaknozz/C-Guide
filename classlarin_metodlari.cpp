#include<iostream>

using namespace std;

class urun{
    public:
    string name;
    
    void tellname(){   //bir fonksyon bir metod yazmak istiyoruz.
        cout<<"urunumuzun adi: "<<name<<endl;
    };
};

int main(){
    urun urun1;
    urun urun2;
    urun1.name="cikolatam";     //public oldugu icin her taraftan erisim saglayabiliyoruz
    urun1.tellname();  // yazima dikkat!!
    urun2.name="dondurmam";
    urun2.tellname();
    
    return 0;
}
