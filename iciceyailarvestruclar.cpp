#include <iostream>

using namespace std;

struct adress{
    string cityname;
    int no;
};

struct kisikayit{
    int id;
    string name;
    string department;
    adress* adresimiz;    // * koyarak adresimiz i pointer yaptik.
};

int main()
{
    kisikayit kisi1;
    kisi1.id=15;
    kisi1.name="hakan";
    kisi1.department="abm";
    //kisi1.adresimiz.cityname="elazig";  boyle yapamadik cunku adress pointer yaptik.
    //kisi1.adresimiz.no=1;
    
    
    adress adres2 ={"ankara",5};  // boyle yapmaliyiz.
    kisi1.adresimiz= &adres2;
    
    kisikayit* ptr=&kisi1;
    
    cout<<ptr->adresimiz->cityname<<endl;  // ptr bir adres o adresten adresimiz e gittik o da bir adres
    cout<<ptr->id<<endl;
    cout<<ptr->adresimiz->no<<endl;
    
    
    
    
    return 0;
}