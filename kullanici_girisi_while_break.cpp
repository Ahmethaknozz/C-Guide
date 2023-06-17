#include<iostream>

using namespace std;

int main(){
    string sys_username= "abc";
    string sys_pass="123";
    string username;
    string pass;
    
    while(true){  //iceri true yazdik böylece sonsuza kadar dönmesini sagladik
        cout<<"kullanici adi: "<<endl;
        cin>>username;
        cout<<"sifre: "<<endl;
        cin>>pass;
        if(username==sys_username&&pass==sys_pass){
            cout<<"hosgeldiniz\n"<<username<<endl;
            break;
        }else if(username!=sys_username&&pass==sys_pass){
            cout<<"kullanici adi yanlis"<<endl;
        }else if(username==sys_username&&pass!=sys_pass){
            cout<<"sifre yanlis"<<endl;
        }else{
            cout<<"yanlis kullanici adi ve sifre"<<endl;
        }
        
        
    }
    
    
    
    
    return 0;
}