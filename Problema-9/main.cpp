/*Problema 9. Escribir un programa que reciba un número n y lea una cadena de caracteres numéricos, el programa
debe separar la cadena de caracteres en números de n cifras, sumarlos e imprimir el resultado. En caso de no poderse
dividir exactamente en números de n cifras se colocan ceros a la izquierda del primer número.
Ejemplo: Si n=3 y se lee el arreglo 87512395 la suma seria 087+512+395=994.
Nota: la salida del programa debe ser:
Original: 87512395.
Suma: 994.
*/

#include <iostream>

using namespace std;

int x,numDiv,i;
int NumCeros(int cifrasNumero, int numDiv);
int returnStr2();
int main()
{
    int y;
    int n=0;
    char * str2; // guardara el string con tantos ceros a la izquierda como se necesite

    char * str; // guarda el string original

    //reserva de espacio para los strings
    str=new char[20];
    str2=new char[20];


    //Se pide al usuario la cadena de caracteres numericos original a trabajar
    std::cout << "Ingrese una cadena de caracteres numericos" <<std::endl;
    std::cin.getline(str,20);
    std::cout<<std::endl;
    y= std :: cin.gcount()-1; //tamaño de la cadena
    //std::cout<<str_size(str)<<std::endl; //esto era para el debug

    //Se pide al usuario el numero entre el que sea va a subdividir la cadena
    std::cout << "Ingrese el numero entre el que se desea subdividir la cadena" <<std::endl;
    std::cin>>n;
    std::cout<<std::endl;

}

int NumCeros(int cifrasNumero, int numDiv){
    int v=0;
    while(((cifrasNumero+v) % numDiv)!=0){
        v++;
        }
        return v;
    }

int returnStr2(){


}







