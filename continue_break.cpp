#include<iostream>

using namespace std;

int main(){
    /*break:  dongude break dendiginde dongu aninda sona erer
    continue: 
    dongude continue calistirildigi zaman altındaki satırlari calistarmadan basa doner
    */
    int i;
    
    while(i<10){
        i++; //i yi burada arttırdik eger arttırmasaydik cout kısmına gelemeden continue basa döndurecekti.
        if(i==3||i==5){
            continue;
        }
        cout<<i<<endl;
        
    }
    
    
    return 0;
}