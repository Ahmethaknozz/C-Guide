#include<iostream>

using namespace std;

void factorial(int sayi){   //void dondurmuyor fonksyonu
    int faktoriyel=1;
    for(int i=1;i<=sayi;i++){
        faktoriyel*=i;
    }
    cout<<"faktoriyel: "<<faktoriyel<<endl;
    
    
    
    
}



int main(){
    int sayi;
    cout<<"sayi giriniz: "<<endl;
    cin>>sayi;
    factorial(sayi);
    
    
    
    
    
    
    return 0;
}