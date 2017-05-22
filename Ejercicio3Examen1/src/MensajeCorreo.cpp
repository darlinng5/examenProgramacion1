#include "MensajeCorreo.h"
#include <cstring>
#include <iostream>

using namespace std;





MensajeCorreo::MensajeCorreo()
{
    this->mensajePara="prueba@prueba.com";
    this->mensajeAsunto="vacio";
    this->mensajeCc="vacio";
    this->mensajeMensaje="vacio";


}

MensajeCorreo::MensajeCorreo(char *para,char *cC,char *asunto,char *mensaje){

    this->mensajePara=new char[strlen(para)+1];
    strcpy(this->mensajePara,para);

    this->mensajeCc=new char[strlen(cC)+1];
    strcpy(this->mensajeCc,cC);

    this->mensajeAsunto=new char[strlen(asunto)+1];
    strcpy(this->mensajeAsunto,asunto);
    this->mensajeMensaje=new char[strlen(mensaje)+1];
    strcpy(this->mensajeMensaje,mensaje);




}//fin de constructor con parametros



MensajeCorreo::~MensajeCorreo()
{
    delete []this->mensajePara;
    delete []this->mensajeAsunto;
    delete []this->mensajeCc;
    delete []this->mensajeMensaje;
}


//inicio de metodos establecer

        void MensajeCorreo::establecerMensajePara(char *para){
        delete[] this->mensajePara;
        this->mensajePara=new char[strlen(para)+1];
        strcpy(this->mensajePara,para);


        }

        void MensajeCorreo::establecerMensajeCc(char *cC){
        delete[] this->mensajeCc;
        this->mensajeCc=new char[strlen(cC)+1];
        strcpy(this->mensajeCc,cC);

        }
        void MensajeCorreo::establecerMensajeAsunto(char *asunto){
        delete[] this->mensajeAsunto;
        this->mensajeAsunto=new char[strlen(asunto)+1];
        strcpy(this->mensajeAsunto,asunto);



        }
        void MensajeCorreo::establecerMensajeMensaje(char *mensaje){
        delete[] this->mensajeMensaje;
        this->mensajeMensaje=new char[strlen(mensaje)+1];
        strcpy(this->mensajeMensaje,mensaje);

        }

        //inicio de metodos obtener

        char *MensajeCorreo::obtenerMensajePara(){

            return this->mensajePara;
        }
        char *MensajeCorreo::obtenerMensajeCc(){

            return this->mensajeCc;
        }
        char *MensajeCorreo::obtenerMensajeAsunto(){

            return this->mensajeAsunto;
        }
        char *MensajeCorreo::obtenerMensajeMensaje(){

            return this->mensajeMensaje;
        }

        void MensajeCorreo::mensajeMostrarDatos(){
            cout<<"Para:       "<<this->mensajePara<<endl;
            cout<<"Cc:         "<<this->mensajeCc<<endl;
            cout<<"Asunto:     "<<this->mensajeAsunto<<endl;
            cout<<"Mensaje:    "<<this->mensajeMensaje<<endl;

        }






