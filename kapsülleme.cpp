
#include <iostream>

using namespace std;

class infolarimiz{
private:
    string name;
    int age;

public:
    void setage(int yas){     // private ile kullanicinin yaptiklarini kontrol altina alabiliriz 
        if(yas<0){
            cout<<"boyle deger verilemez"<<endl;  // 0 in altında deger vermesini engellemis olduk
            
        }             // encapsulation(kapsulleme) bir class in detaylarini olabildigince saklamaya denir
        else{
            age=yas;
        }
    }
    int getage(){             // get ve set kelimelerine dikkat bunlar komut gibi
        return age;           // return kullanımına dikkat
    }
    void setname(string isim){
        name=isim;            
    }
    string getname(){         // dikkat string ve int yapilarinda void degilde kendi türleri ile tanimliyoruz
        return name;
    }

    
    
};

int main()
{
    infolarimiz info1;
    info1.setname("hakan");
    info1.setage(-5);
    cout<<info1.getname()<<endl;
    cout<<info1.getage()<<endl;
    return 0;
}
