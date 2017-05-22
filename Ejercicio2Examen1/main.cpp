#include <iostream>

using namespace std;




int contar(char *cadena)
{
    int contador=0;
    for(contador=0; *cadena!='\0'; cadena++)
    {
        contador++;

    }

    return contador;
}



int main()
{


    char cadenaTexto[200];
    cout<<"Ingrese una cadena"<<endl;
    cin>>cadenaTexto;

    int totalLetras=contar(cadenaTexto);

    cout<<"El total de letras es de :"<<totalLetras<<endl;




    return 0;
}
