#include <iostream>

using namespace std;

struct kayit{
    int id;
    string name;
    string department;
};

void showkayitptr(kayit* ogrenci1){
    ogrenci1->id=30;
    
    cout<<"id: "<<ogrenci1->id<<endl;
}



void showkayit(kayit ogrenci1){
    ogrenci1.id=30;                   // burada degisiklik yapamayız pointer kullanmaaliyiz yukaridaki gibi.
    cout<<"id: "<<ogrenci1.id<<endl;
    cout<<"name:"<<ogrenci1.name<<endl;
    cout<<"department: "<<ogrenci1.department<<endl;
}

int main(){
    kayit ogrenci1={20,"hakan","abm"};
    
    
    
    showkayit(ogrenci1);    
    showkayitptr(&ogrenci1);
    cout<<ogrenci1.id<<endl;
    
    
    
    return 0;
}