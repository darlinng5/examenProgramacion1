#include <iostream>
#include "Correo.h"
#include <iostream>

using namespace std;

int totalRemitentes=0;
int posicionRemitente[10];
Correo *listaRemitentes[10];



void verRemitentes(){
    if(totalRemitentes!=0){
        for(int i=0;i<totalRemitentes;i++){
            listaRemitentes[i]->mostrarRemitentes();
        }
    }else{

    cout <<"Aun no a ingresado ningun remitente"<<endl;
    }



}

void crearRemitente(){
    if(totalRemitentes>10){
        cout<<"No se puede crear otro remitente porque ya creo el maximo de capacidad"<<endl;
    }else{
        listaRemitentes[totalRemitentes] = new Correo("darlinng5@gmail.com","DarlinGonzales");
        totalRemitentes++;
    }



}

int main()
{

   Correo correo1;

   char centinela='s';
    int opcion=0;
   while(centinela!='n'){
    cout<<"1) Crear un remitente\n2) Ver Remitentes creados\n3) Enviar un Mensaje"<<endl;
    cout<<"4) Ver historial de mensajes enviados"<<endl;
    cin>>opcion;
    switch (opcion){
    case 1:
        crearRemitente();
        break;
    case 2:
        verRemitentes();
        break;
    case 3:
            if(totalRemitentes>0){
                cout<<"Seleccione un remitente"<<endl;
                correo1.correoEnviarMensaje();
            }else{
                cout<<"Llene los siguientes datos"<<endl;
                crearRemitente();
                correo1.correoEnviarMensaje();


            }

        break;
    case 4:
       correo1.correoHistorialMensaje(0);
    default:
        cout<<"Seleccione una opcion valida"<<endl;
        break;
    }








    cout <<"Para salir presione n"<<endl;
    cin>>centinela;
   }


   //correo1.correoGuardarMensaje();



   // Correo *correo1=new Correo("darlinng5@gmail.com","DarlinGonzales");
     //       correo1->correoGuardarMensaje();









    return 0;
}
