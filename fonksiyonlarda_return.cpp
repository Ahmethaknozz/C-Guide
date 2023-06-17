#include<iostream>

using namespace std;
/*
void toplama(int a,int b,int c){
    cout<<"toplama sonucu: "<<a+b+c<<endl;  //void döndurmeyen bir fonksiyondur return kullanılmalidir
}
   


int main(){
    toplama(1,2,3);
*/    

int toplama(int a,int b,int c){  //return fonksyonun son elemani olamali
    return a+b+c;
}
   


int main(){
    int a=toplama(1,2,3);
    cout<<"a:"<<a<<endl;




    
    
    
    return 0;
    
}