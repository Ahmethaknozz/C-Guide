#include <iostream>

using namespace std;

int main()
{
    /*int *ptr=nullptr;  //bellekte herhangi bir yeri göstermiyor.bu cok daha güvenli bir yol
    ptr=new int;  // suanda pointerimiza bir yer ayirdik
    *ptr=10;
    delete ptr; // simdide o yeri belleke geri verdik  // buna dengling pointer deniyor gosterdigi yerde gecerli bir olmayan dir 
    *ptr=10;
    cout<<*ptr<<endl;  //hata verir cunku biz o adresi bilgisayara geri vermistik
    */
    
    
    int *ptr1=nullptr;
    int *ptr2=nullptr;
    ptr= new int;
    *ptr1=10;
    ptr2=ptr1
    delete ptr1;  // artik ikisi de dengling referans oldu: gecersiz bir alana deger yazıp islem yapmaya calismaya ve hata alinmasina denir
    
    return 0;
}