
#include <iostream>

using namespace std;
void selamla(){
    cout<<"selams"<<endl;  // fonksyon tanimladik
}
void selamla(string name){
    cout<<"selam "<<name<<endl;
}
void selamla(string name1,string name2){
    cout<<"selam"<<name1<<","<<name2<<endl;
}

int main()
{
    selamla();
    //selamla("hakan")  boyle yapamayiz ama bunun olmasi icin overloading yapmaliyiz foksyonu asiri yuklemeliyiz
    selamla("hakan");
    selamla("hakan","oz");
    return 0;
    
}