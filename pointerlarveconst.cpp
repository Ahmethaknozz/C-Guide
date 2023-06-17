#include <iostream>

using namespace std;

void numarabul(const int *ptr1, const int *ptr2){
    for(;ptr1!=ptr2;ptr1++){
        cout<<"aradaki sayilar: "<<*ptr1<<endl;  // dikkat et ptr1++ da deger degismior mu?
                                                    // hayır sadece ptr si adresi degisiyor sadece gosterdigi yerin
                                                    //degerini degistiremiyoruz
    }
    
    
}


int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10};
    numarabul(array+2,array+7);  // array+2 3. indexteki elemandir.
    return 0;
}