/*Problema 5. Haga una función que reciba un numero entero (int) y lo convierta a cadena de caracteres. Use
parámetros por referencia para retornar la cadena. Escriba un programa de prueba.
Ejemplo: si recibe un int con valor 123, la cadena que se retorne debe ser “123”.
*/

#include <iostream>

using namespace std;

static int printdig(int numero,int nDigitos);
static int potencia(int base, int exp);
int main()
{

    int x,nDigitos=1,z;
    cout << "Ingrese un numero: " << endl;
    cin>>x;
    cout<<endl<<endl;
    z=x;
    while(z>=10){//este while tiene como funcion hallar el numeros de digitos del numero ingresado
        z=z/10;
        nDigitos++;
}
    if(nDigitos==1){
        char numer [] ={ 48,49,50,51,52,53,54,55,56,57 };
        int i=0;
        while(i<10){ // este ciclo tiene como fin ir imprimiendo numero por numero en forma de caracter (char) utilizando la tabla ascii
            if (x==i){
                cout<<numer[i]<<endl;
            }
            i++;
    }
    }
    else{
    cout<<printdig(x,nDigitos)<<endl;
    }
}


static int printdig(int numero,int nDigitos){
    char numer [] ={ 48,49,50,51,52,53,54,55,56,57 };
    int digitoActual=0,i=0;

    for(int j=nDigitos;j>=1;j--){//lo que hace este for es sacar digito por digito

    digitoActual=numero/(potencia(10,j-1));//se saca el primer digito haciendo una division entera por 10^numero de digitos menos uno

    //y=digitoActual;
    while(i<10){
        if (digitoActual==i){
            cout<<numer[i];
        }
        i++;
        numero= numero%(potencia(10,j-1));//para ir eliminando digitos se hace una division modulo
    }

    }
    return numero;
}


static int potencia(int base, int exp){ // funcion potencia
 int ayuda=base;
    if(exp>1){
        for(int i=1;i<exp;i++){
            base = base *ayuda ;
        }
        return base;
    }
    else{
        if (exp==1){
            return base;
        }else{
            return 1;
        }
    }
}
