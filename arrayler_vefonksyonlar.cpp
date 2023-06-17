
#include <iostream>

using namespace std;
/*
void printarray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
}

int main(){
    int a[]={1,2,3,4,5};
    printarray(a,5);  // 5 size miz oldu
    
    return 0;
}
*/
void printarray(int *ptr,int size){
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<endl;   // bu sekilde de pointer ile yaptik ayni seyi.
    }
}

int main(){
    int a[]={1,2,3,4,5};
    printarray(a,5);
    
    
    return 0;
}