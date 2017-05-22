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

//atributosCorreo = new MensajeCorreo();


}

    Correo::Correo(char *correoElectronico, char *nombreRemitente){

     this->correoCorreoElectronico=new char[strlen(correoElectronico)+1];
     strcpy(this->correoCorreoElectronico,correoElectronico);
     this->correoNombreRemitente=new char[strlen(nombreRemitente)+1];
     strcpy(this->correoNombreRemitente,nombreRemitente);

    // correoEnviarMensaje();//cuando creo un objeto en el main y pasa por aqui, creo un nuevo atributo


    }




Correo::~Correo()
{
    delete []this->correoCorreoElectronico;
    delete []this->correoNombreRemitente;
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
            char *para="para";
            char *asunto="asunto";
            char *cC="Cc";
            char *mensaje="Mensjae";
            listaAtributos[conteoAtributos]=new MensajeCorreo("1", "2","3","4");
            conteoAtributos++;
            cout<<"Mensaje enviado Exitosamente"<<endl;
        }


        void Correo::correoHistorialMensaje(int numero){

            //cout<<"Asunto"<<listaAtributos[numero]->obtenerMensajeAsunto();
        for(int i=0;i<conteoAtributos;i++){
            cout<<"Asunto"<<listaAtributos[i]->obtenerMensajeAsunto();

            }

        }


void Correo::mostrarRemitentes(){

cout<<"Correo Remitente"<<this->correoCorreoElectronico<<endl;
cout<<"Nombre Remitente"<<this->correoNombreRemitente<<endl;

}


