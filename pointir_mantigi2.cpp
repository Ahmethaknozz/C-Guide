

#include <iostream>

using namespace std;

/*
void degerdegistir(int af){   //void islemin deger donmemesini saglar.
    af=10;
    cout<<"af deger: "<<af<<endl;
}
int main(){
    int a=20;                    //gördugumuz gibi a nın degeri degismedi onun yerine af nın degeri degisti.
    cout<<"a nin ilk degeri"<<a<<endl;  //a nın degerinin degismesi icin pointer kullanmalıydik
    degerdegistir(a);
    cout<<"a nin yeni degeri: "<<a<<endl;
*/

void degerdegistir(int *pointerimiz){     // a nin  degerini degil adresini gondermis olucaz pointer ile
    *pointerimiz= 20;
    cout<<"fonksoyunun icindeki deger: "<<*pointerimiz<<endl;
    
}
int main(){
    int a=10;
    cout<<"a nin degeri: "<<a<<endl;   // deger degistirme basarili. pointer ile direk bellek adresine ulastık ve deger degistirdik. 
    degerdegistir(&a);
    cout<<"a nin yeni degeri: "<< a<<endl;
    
    
    
    return 0;
}
