
#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int size;
    cout<<"kac deger saklanacak?"<<endl;
    cin>>size;
    ptr = new int[size];
    for(int i =0;i<size;i++){  // memory de yerlerimiz ayrıldi
        cout<<"deger: "<<endl;
        cin>>ptr[i];            // dikkat cin de >>endl; yi kabul etmiyor
    }
    for(int a=0;a<size;a++){
        cout<<"eleman"<<ptr[a]<<endl;
    }
    delete [] ptr;  // birden fazla eleman kullandigimiz icin  "[]" koyduk

    return 0;
}