#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout <<"a yi girin: ";
    cin >> a;
    cout <<"b yi girin: ";
    cin >>b;
    if(a<b){
        cout<<"b a dan büyük.\n"<<b <<"\n";
    }
    else{
        if(a==b){
            cout<<"a esit b";
        }
        else{
            cout<<"a b den büyük";
        }
    }
    
    
    
}