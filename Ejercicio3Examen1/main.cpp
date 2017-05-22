#include <iostream>
#include "Correo.h"
#include <iostream>

using namespace std;

int totalRemitentes=0;
int posicionRemitentes[10];
int contadorMensajes=0;
int control=0;

Correo *listaRemitentes[10];


void verRemitentes();
void crearRemitente(int);

int main()
{
    Correo correo1;

    char centinela='s';
    int opcion=0;
    while(centinela!='n')
    {
        cout<<"1) Crear un remitente\n2) Ver Remitentes creados\n3) Enviar un Mensaje"<<endl;
        cout<<"4) Ver historial de mensajes enviados"<<endl;
        cin>>opcion;
        switch (opcion)
        {
        case 1:
            crearRemitente(1);
            break;
        case 2:
            verRemitentes();
            break;
        case 3:
            crearRemitente(2);
            correo1.correoEnviarMensaje();
            break;
        case 4:
        {
            int eleccion=0;
            cout<<"Presione 1 para mostrar solo los Asuntos de todos los mensajes"<<endl;
            cout<<"O cualquier otro numero para ver todo el mensaje"<<endl;
            cin>>eleccion;

            if(eleccion==1)
            {
                correo1.correoHistorialMensaje(1);
            }
            else
            {
                correo1.correoHistorialMensaje(2);
            }

            int j=1;
            for(int i=0; i<totalRemitentes; i++)
            {

                if(posicionRemitentes[i]!=0)
                {
                    cout<<"Remitente de Mensaje con Id No. "<<j<<endl;
                    listaRemitentes[i]->mostrarRemitentes();
                    j++;
                }

            }


        }



        break;

        default:
            cout<<"Seleccione una opcion valida"<<endl;
            break;
        }




        cout <<"Para salir presione n"<<endl;
        cin>>centinela;
    }


       for(int i=0;i<totalRemitentes;i++){
        delete listaRemitentes[i];
    }



    return 0;
}



void verRemitentes()
{
    if(totalRemitentes!=0)
    {
        for(int i=0; i<totalRemitentes; i++)
        {
            listaRemitentes[i]->mostrarRemitentes();
        }
    }
    else
    {

        cout <<"Aun no a ingresado ningun remitente"<<endl;
    }



}


void crearRemitente(int num)
{
    if(totalRemitentes>10)
    {
        cout<<"No se puede crear otro remitente porque ya creo el maximo de capacidad"<<endl;
    }
    else
    {
        char correo[30];
        cout<<"Ingrese la direccion del correo"<<endl;
        cin>>correo;
        char nombre[30];
        cout<<"Ingrese el nombre del remitente"<<endl;
        cin>>nombre;

        listaRemitentes[totalRemitentes] = new Correo(correo,nombre);

        if(num==2)
        {
            posicionRemitentes[totalRemitentes]=1;
            //control++;
        }
        totalRemitentes++;
    }



}
