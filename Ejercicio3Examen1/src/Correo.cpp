#include "Correo.h"
#include <cstring>
#include <iostream>

using namespace std;



MensajeCorreo * listaAtributos[50];
int Correo::conteoAtributos = 0; //inicializacion

int Correo::obtenerConteoAtributos()
{
    return conteoAtributos;
}



Correo::Correo()
{
            this->correoCorreoElectronico="direccion@prueba.com";
            this->correoNombreRemitente="nombreDePrueba";

}

    Correo::Correo(char *correoElectronico, char *nombreRemitente){

     this->correoCorreoElectronico=new char[strlen(correoElectronico)+1];
     strcpy(this->correoCorreoElectronico,correoElectronico);
     this->correoNombreRemitente=new char[strlen(nombreRemitente)+1];
     strcpy(this->correoNombreRemitente,nombreRemitente);
    }

Correo::~Correo()
{
    delete []this->correoCorreoElectronico;
    delete []this->correoNombreRemitente;
    conteoAtributos--;
}

        char Correo::establecerCorreoCorreoElectronico(char *correoElectronico){
            delete [] this->correoCorreoElectronico;
            this->correoCorreoElectronico=new char[strlen(correoElectronico)+1];
            strcpy(this->correoCorreoElectronico,correoElectronico);


        }
        char Correo::establecerCorreoNombreRemitente(char *nombreRemitente){
        delete [] this->correoNombreRemitente;
        this->correoNombreRemitente=new char[strlen(nombreRemitente)+1];
        strcpy(this->correoNombreRemitente,nombreRemitente);
        }



        void Correo::correoEnviarMensaje(){
            char para[30];
            cout <<"Ingrese el nombre del destinatario"<<endl;
            cin>>para;
            char cC[30];
            cout <<"si tiene Cc ingreselo aqui"<<endl;
            cin>>cC;
            char asunto[30];
            cout<<"Ingrese el asunto"<<endl;
            cin>>asunto;
            char mensaje[100];
            cout<<"Ingrese aqui todo su mensaje"<<endl;
            cin>>mensaje;
            listaAtributos[conteoAtributos]=new MensajeCorreo(para,cC,asunto,mensaje);
            conteoAtributos++;
            cout<<"Su mensaje ha sido enviado Exitosamente"<<endl;
        }


        void Correo::correoHistorialMensaje(int numero){
            if(conteoAtributos<=0){
                cout<<"Bandeja de salida vacia"<<endl;

            }else{
                    for(int i=0;i<conteoAtributos;i++){
                        cout<<"Atributos de Mensaje No."<<(i+1)<<endl;
                        if(numero==1){
                           cout<<"Asunto: "<<listaAtributos[i]->obtenerMensajeAsunto()<<endl;
                           cout<<"Id de remitente: "<<conteoAtributos<<endl;
                        }else{
                            listaAtributos[i]->mensajeMostrarDatos();
                            cout<<"Id de remitente: "<<conteoAtributos<<endl;

                        }

                        cout<<endl;
                    }

            }


        }


void Correo::mostrarRemitentes(){

cout<<"Correo Remitente: "<<this->correoCorreoElectronico<<endl;
cout<<"Nombre Remitente: "<<this->correoNombreRemitente<<endl;
cout<<endl;
}


