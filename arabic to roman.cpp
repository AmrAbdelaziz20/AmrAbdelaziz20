#include <iostream>
using namespace std;

int main() {
    int arabic_num;
    cout<<"please enter the number :";
    cin>>arabic_num;
    while(arabic_num>=1000){
        arabic_num=arabic_num-1000;
        cout<<"M";
    }
    while(arabic_num>=500){
        arabic_num=arabic_num-500;
        cout<<"D";
    }
    while (arabic_num >= 100){
        arabic_num= arabic_num - 100;
        cout<<"C";    
    }
    while(arabic_num<1000 && arabic_num>=900){
        cout<<"CM";
        arabic_num=arabic_num-900;
    }
    while(arabic_num<900 && arabic_num>=400){
        cout<<"CD";
        arabic_num=arabic_num-400;
    }
    while(arabic_num>=90 && arabic_num<100){
        cout<<"XC";
        arabic_num=arabic_num-90;
    }
    
    while (arabic_num>=50 && arabic_num < 100) {
        arabic_num= arabic_num - 50;
        cout<<"L";
        
    }
    
    while (arabic_num>=40 && arabic_num < 50) {
        arabic_num= arabic_num - 40;
        cout<<"XL";
        
    }
    while(arabic_num >= 10 && arabic_num < 40){
        arabic_num= arabic_num - 10;
        std::cout<<"X";    
    }
    while(arabic_num >= 5 && arabic_num < 10){
        if(arabic_num == 9){
            std::cout<<"IX";
        }
        arabic_num= arabic_num - 5;
        std::cout<<"V";
    
    }
    while(arabic_num < 5 && arabic_num>0 ){
        if(arabic_num == 4){
            cout<<"IV";
            arabic_num=arabic_num-4;
        }
        else{cout<<"I";
        arabic_num= arabic_num - 1;
    }
    }
    return 0;
}
