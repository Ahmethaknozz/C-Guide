#include <iostream>

using namespace std;

int main(){
    int a=5;
    int *pointirimiz=&a;  // * ve & isareti kullanılmali.
    cout<<"bellekte saklanan degerimiz: "<<&a<<endl;
    cout<<"bellekte saklanan degerimiz: "<<pointirimiz<<endl;
    cout<<"degerimiz: "<<*pointirimiz<<endl;
    *pointirimiz = 6;    // * koydugumuzda o bellekte sakalanan deger(pointırıdan)den a nin bizim verdigimiz degerine gider, yani a nın artık degeri 6 dir
    cout<<"yeni degerimiz: "<<a<<endl;
    
    



    return 0;
}
