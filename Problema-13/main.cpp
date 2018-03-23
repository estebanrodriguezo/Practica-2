/*Problema 13. Se tiene una fotografía digitalizada de una porción de la galaxia NGC 1300 que está ubicada a
61.000.000 de años luz del planeta Tierra. La representación digital de la imagen está constituida por una matriz
de números enteros; en la cual, cada uno representa la cantidad de luz en ese punto de la imagen, así:

0 3 4 0 0 0 6 8
5 13 6 0 0 0 2 3
2 6 2 7 3 0 10 0
0 0 4 15 4 1 6 0
0 0 7 12 6 9 10 4
5 0 6 10 6 4 8 0

Se puede determinar si el elemento ai,j de la matriz representa una estrella si se cumple que:

ai,j + ai,j−1 + ai,j+1 + ai−1,j + ai+1,j
----------------------------------------   > 6
                 5


Elabore y pruebe una función que reciba un puntero a la matriz de enteros como argumento y que retorne el número
de estrellas encontradas en la imagen. Ignore las posibles estrellas que puedan existir en los bordes de la matriz.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
//int numStars(int filas, int columnas, int matriz[][]);
int main()
{
    int n,m,num,i,j;
    cout<<"Ingrese numero de filas"<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Ingrese numero de columnas"<<endl;
    cin>>m;
    int galaxy [n][m];//Se declara la matriz con el tamaño indicado
    srand(time(NULL));//se inicializa el random para generar los numeros

    for (i=0; i<n; i++){ //este for es quien pone los numeros al azar en las filas de la matriz
        cout<<endl;
        for(j=0; j<m; j++){//este for es quien pone los numeros al azar en las columnas de la matriz
            num=rand()%16; // generador de numeros aleatorios
            galaxy[i][j]=num;
            num=0;
            cout<<"\t"<<galaxy[i][j];
        }
    }
    cout<<endl<<endl;

    int x,y,str=0;
    for(j=1;j<m-1;j++){//inicializamos unos contadores que van a recorrer la matriz j(para las columnas; i(para las filas)
        for(i=1;i<n-1;i++){
           x=(*(*(galaxy+i)+j))+(*(*(galaxy+i)+j-1))+(*(*(galaxy+i)+j+1))+(*(*(galaxy+i-1)+j))+(*(*(galaxy+i+1)+j));//se realiza la suma de las posiciones Aij que conforman la estrella
           y=x/5; // se divide la suma de las posiciones de la estrella (cruz) entre cinco para saber si en realidad es una estrella
           if(y>6){ // se comprueba se es estrella o no y se suma una si lo es
               str++;
           }

        }
    }


    cout<<"El numero de estrellas en la porcion de galaxia es de: "<<str<<endl;
}
