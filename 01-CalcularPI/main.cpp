#include <iostream>

using namespace std;

float calcularSerie(int vueltas){
    long double serie=1.0;
    for(int i=1; i<vueltas; i++){
        long double valorSerie = 1.0/((2.0*i)+1.0); 
        if(i%2!=0){
            serie-= valorSerie;
        }
        else serie+= valorSerie;
    }

    return serie*4.0;
}

int main(){
    int vueltas= 1000000;
    long double valor = calcularSerie(vueltas);
    cout<<valor;

}