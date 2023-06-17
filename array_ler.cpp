#include<iostream>

using namespace std;


int main() {
    
    /* 
    int array_ler[3];
    array_ler[0]=10;
    array_ler[1]=20;
    array_ler[2]=30;
    
    cout<<"1.index: "<<array_ler[0]<<endl;
    cout<<"2.index: "<<array_ler[1]<<endl;
    cout<<"3.index: "<<array_ler[2]<<endl;
    */
    //int array2[]={10,20,30,40,50}  //boyle istedigimiz kadar deger atayabiliriz.
    /*
    double array3[]={1.2,1.3,1.4,1.5};
    for(int i=0;i<4;i++){
        cout<<i<<". index degeri: "<<array3[i]<<endl;
       
        
    }
    */
    string array4[4];
    for(int i=0;i<4;i++){
        cin >>array4[i];
        
    }
    for(int i=0;i<4;i++){
        cout<<i<<".sehir:"<<array4[i]<<endl;
        
    }
    
    
    return 0;
}