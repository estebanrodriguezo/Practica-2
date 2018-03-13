/*3. Problemas
Problema 1. Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para
una cantidad de dinero determinada. Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000
y $1.000, y las monedas son de $500, $200, $100 y $50. Hacer un programa que entregue el número de billetes
y monedas de cada denominación para completar la cantidad deseada. Si por medio de los billetes y monedas
disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla. Use arreglos
y ciclos para realizar el programa.
Ejemplo: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10
Realice una versión en Arduino de este programa (en un Arduino físico o Tinkercad), la cantidad de dinero debe ser
ingresada con la ayuda del serial. Use el monitor serial de Arduino o Tinkercad para ingresar los valores necesarios
e imprimir.
*/

#include <iostream>

using namespace std;

int main()
{
    int dinero [10][2] ={ {50000,0}, {20000,0}, {10000,0}, {5000,0}, {2000,0}, {1000,0}, {500,0}, {200,0}, {100,0}, {50,0} };
    //se creo un arreglo donde tiene varios arreglos que contien el valor de billetes y monedas y ademas se tiene el numero necesarios para descomponer el monto deseado.
    int i=0, n;
    cout<<"Ingrese el dinero: "<<endl;
    cin>>n;
    while(i<10){
        while(n>=(*(*(dinero+i))+0)){
            *(*(dinero+i)+1)= n /(*(*(dinero+i))+0);
            n=n-((*(*(dinero+i))+0)*(*(*(dinero+i)+1)));
            cout<<"el numero de monedas o blilletes de: "<<(*(*(dinero+i))+0)<< " es de: "<<*(*(dinero+i)+1)<<endl;
        }
        i++;

    }
    cout<<"y el resto es de: "<<n<<endl;



}
