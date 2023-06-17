#include <iostream>

using namespace std;

struct kayit{
    int id;
    string name;
    string department;
};

int main(){
    kayit ogrenci1={12,"hakan","abm"};
    kayit* ptr= &ogrenci1;
    cout<<ogrenci1.id<<endl; // obje uzerinden ulasma.
    cout<<ptr->id<<endl;    // dikkat!!!   , pointer uzerinden ulasma.
    cout<<ptr->department<<endl;

    return 0;
}