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

     correoEnviarMensaje();//cuando creo un objeto en el main y pasa por aqui, creo un nuevo atributo


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
            cout<<"LLeva: "<<conteoAtributos<<endl;
        }


        void Correo::correoGuardarMensaje(){
           for(int i=0;i<3;i++){
             correoEnviarMensaje();
           }

           for(int i=0;i<3;i++){
            listaAtributos[i]->mensajeMostrarDatos();
           }


        }





