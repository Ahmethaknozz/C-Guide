#include<iostream>

using namespace std;

struct student{
    int id;
    char latter;
};

int main(){
    int a= 50;
    cout<<"integer: "<<sizeof(a)<<endl;  // bellekte kapladigi yer sizeof
    cout<<sizeof(char)<<endl; // harf leri falan turar
    cout<<sizeof(double)<<endl;
    cout<<sizeof(float)<<endl;  // double nin biraz az gosterimli hali
    cout<<sizeof(student)<<endl; 
    
    return 0;
}