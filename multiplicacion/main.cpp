#include <iostream>
#include <math.h>
#include <bitset>

using namespace std;

void multiplicar_con_signo(int a, int b){
    bitset<16>(x);
    x = a*b;
    cout<<"Resultado: "<<x<<endl;
}

void multiplicar(int a,int b)
{
    bitset<8>(x);
    x = a*b;
    cout<<"Resultado: "<<x<<endl;
}

void division(int e,int f){

    int z=0;
    if(e>f){
        bitset<8>(r);
        bitset<8>(y);
        r= e%f;
        y= e/f;
        cout<<"Residuo: "<<r<<endl;
        cout<<"Cociente: "<<y<<endl;
    }else{
        bitset<8>(z);
        cout<<"Cociente: "<<z<<endl;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
