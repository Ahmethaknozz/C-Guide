#include <iostream>

using namespace std;

int main(){
    /*
    int arrayimiz[]={1,2,3,4};
    int *ptr =&arrayimiz[2];
    cout<<ptr<<endl;
    */
    
    /*cout<<ptr<<endl;
    cout<<ptr+1<<endl;      // 4 bit degisiyor   
    ptr+=1;
    cout<<"pointerimizzin yeni degeri: "<<ptr<<endl;
*/
    string array[]={"mustafa","murat","coskun"};   // yazdigimiz array ve ptr bizim sectigimiz degiskenlerdir.
    string *ptr=array;
    cout<<ptr<<endl;   // * koydugumuzda ve koymadıgımızda fark etti dikkat et. 
    cout<<*(ptr+1)<<endl;
    cout<<ptr[1]<<endl;  // & bu isaret adresini gosteriyor.
    cout<<array[0];


    return 0;
}