#include <iostream>

using namespace std;

int main()
{
    /*int a[]={1,2,3,4,5};
    int *ptr;
    ptr=a;
    cout<<ptr<<endl;
    */
    int *ptr= new int; // ilk kisim:suan pointer olusturduk.  ve bir tane int e yer tutacak yer ayir diyoruz
    *ptr=5; // 5 lik bir bellek ayrıldi
    delete ptr; // bellege geri verir.
    
    return 0;
}
