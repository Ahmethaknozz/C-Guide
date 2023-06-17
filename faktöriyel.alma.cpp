#include<iostream>
using namespace std;


int main(){
    int sayi;
    cout<<"sayi: ";
    cin >> sayi;
    int faktoriyel=1;
    for(int i=1;i<=sayi;i++){
        faktoriyel*=i;
        
        cout<<faktoriyel<<endl;
    }
    cout<<"faktoriyel: "<<faktoriyel<<endl;
    
    
}
    
    