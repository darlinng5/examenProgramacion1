#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
using namespace std;



bool empezar2()
{



    char cadena[30];
    char cadena2[30];
    cout<<"Ingrese una cadena. Puede ser en minusculas o mayusculas"<<endl;
    cin>>cadena;
    cout<<"Ingrese una segunda cadena. Puede ser en minusculas o mayusculas"<<endl;
    cin>>cadena2;


    for(int i= 0; cadena[i]; i++)
    {
        cadena[i] = tolower(cadena[i]);

    }

    for(int i= 0; cadena2[i]; i++)
    {
        cadena2[i] = tolower(cadena2[i]);

    }

    char *cadenaFinal1=new char[strlen(cadena)];
    strcpy(cadenaFinal1,cadena);
    char *cadenaFinal2=new char[strlen(cadena2)];
    strcpy(cadenaFinal2,cadena2);


    int resultado = strcmp(cadenaFinal1, cadenaFinal2);

    if(resultado ==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}






int main()
{


    bool sonIguales=empezar2();
    cout<<""<<endl;
    if(sonIguales)
    {
        cout<<"Las cadenas son iguales"<<endl;

    }
    else
    {
        cout<<"Las cadenas no son iguales"<<endl;

    }


    return 0;
}
