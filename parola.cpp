#include<iostream>
using namespace std;

int main(){
    string parola;
    string input;
    cout<<"parola belirleyiniz: "<<endl;
    cin>>parola;
    do{
        cout<<"parolayi giriniz: "<<endl;  //while de icine tanimladigimiz kosul true verene kadar dondurur.
        cin>>input;
        if(input!=parola){
            cout<<"yanlis parola"<<endl;
        }
        
    }while(input!=parola);
    
    
    cout<<"dogru giris"<<endl;
    
    }