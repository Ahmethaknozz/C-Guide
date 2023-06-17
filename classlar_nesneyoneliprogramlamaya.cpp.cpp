
#include <iostream>

using namespace std;

class student{
public:            // ulasilabilir olmasi icin   dikkat publicten sonra ":" isareti geldi
    string name;  //clasimiz olustu
    
};


int main()
{
    student student1;  // objemiz olustu
    student student2;
    student1.name="hakan";
    student2.name="mustafa";
    
    cout<<"ogrenci 1 adi: "<<student1.name<<endl;
    cout<<"ogrenci 2 adi: "<<student2.name<<endl;
    
    return 0;
}