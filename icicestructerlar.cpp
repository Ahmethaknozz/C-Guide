#include <iostream>

using namespace std;

struct adress{
    string cityname;
    int no;
};

struct kayit{
    int id;
    string name;
    string department;
    adress adresimiz;
};

int main(){
    
    //kayit evadres1={12,"hakan","abm",{"elazig",34}};  idtersek boylede tanimlayabiliriz
    
    kayit evadres1;
    //evadres1.adresimiz={"elazig",34}; istersek boylede olur
    evadres1.id=12;
    evadres1.name="hakan";
    evadres1.department="abm";
    evadres1.adresimiz.cityname="elazig";
    evadres1.adresimiz.no=34;
    cout<<evadres1.id<<endl;
    cout<<evadres1.name<<endl;
    cout<<evadres1.department<<endl;
    
    cout<<evadres1.adresimiz.cityname<<endl;  // dikkat!!
    cout<<evadres1.adresimiz.no<<endl;
    return 0;
}

