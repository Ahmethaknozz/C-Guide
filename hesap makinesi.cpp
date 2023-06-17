#include<iostream>
using namespace std;

int main(){
    int a,b;
    string islem;
    int sonuc;
    
    cout<<"1. islem toplama"<<endl;
    cout<<"2. islem cikarma"<<endl;
    cout<<"3. islem carpma"<<endl;
    cout<<"4. islem bolme"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout <<"islem seciniz"<< endl;
    cin >> islem;
    if(islem=="1"){
        sonuc=a+b;
    }
    else if(islem=="2"){
        sonuc=a-b;
    }
    else if(islem=="3"){
        sonuc=a*b;
        
    }
    else if(islem=="4"){
        sonuc=a/b;
    }
    else{
        cout<<"yanlis islem girdiniz"<<endl;
    }
    
    
    return 0;
}