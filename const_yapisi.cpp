
#include <iostream>

using namespace std;

int main(){
    const int i=15;   // const dedigimiz icin deger degistirme yapamadik
                      // yani const ile tanimladigimiz degerin degerini degistiremeyiz    
    i+=5;
    cout<<i<<endl;
    
    
    const int arrayimiz[]={1,2,3,4};
    arrayimiz[3]=10
    
    return 0;
}