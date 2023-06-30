#include <iostream>
#include<math.h>
using namespace std;

float calcularSerie(){
    long double serie=1.0;
    for(int i=1; i>0; i++){ 
        serie+= pow(-1, i) /((2.0* double(i))+1.0);
        if(fabs(serie*4 - 3.141592) < 0.0000001) break;
    }
    return serie*4.0;
}

int main(){
    long double valor = calcularSerie();
    cout<<valor;

}
