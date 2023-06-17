
#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    /*for(int i=0;i<5;i++){  //for biraz uzun
        cout<<a[i]<<endl;
    }
    */
    for(int item:a){
        cout<<2*item<<endl;  // ayni seyi cok daha hizli bir sekilde yaptik. 2* 2 ile carptik
    }
    
    return 0;
}
