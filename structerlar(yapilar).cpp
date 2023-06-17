


#include <iostream>

using namespace std;

struct kayit{
    int id;
    string name;
    string department;
};

int main(){
    kayit ogrenci1={12,"mustafa murat","bilisim"};
    cout<<ogrenci1.name<<" isimli ogrencinin numarasi: "<<ogrenci1.id<<endl;
    ogrenci1.name="hakan";       // degisiklik yapabiliyoruz
    cout<<ogrenci1.name<<endl;
    kayit ogrenci2;
    ogrenci2.id=15;
    ogrenci2.name="baris";
    ogrenci2.department="abm";   // bu sekilde de deger atiyabiliyoruz.
    cout<<ogrenci2.department<<endl;
    

    return 0;
}