/*#include <iostream>
using namespace std;
void fun_a(int *px, int *py);
void fun_b(int a[], int tam);
int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun_b(array, 10);
}
void fun_a(int *px, int *py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}
void fun_b(int a[], int tam){
    int f, l;
    int *b = a;
    for (f = 0, l = tam -1; f < l; f++, l--) {
        fun_a(&b[f], &b[l]);
    }
}
*/

#include <iostream>
using namespace std;
void fun_c(double *a, int n, double *promedio, double *suma);
int main()
{
    double promedio;
    double suma;
    double array [18]={0,1,2,3,4,5,6,7,8,9};
    fun_c(array,18,&promedio,&suma);
    cout<<promedio<<endl;
    cout<<suma<<endl;
}
void fun_c(double *a, int n, double *promedio, double *suma){
    int i;
    *suma = 0.0;
    for (i = 0; i < n; i++)
        *suma += *(a + i);
    *promedio = *suma / n;
}
