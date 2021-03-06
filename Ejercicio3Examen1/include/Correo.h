#ifndef CORREO_H
#define CORREO_H

#include "MensajeCorreo.h"


class Correo
{
    public:
        Correo();
        Correo(char *, char*);
        virtual ~Correo();

        char establecerCorreoCorreoElectronico(char *);
        char establecerCorreoNombreRemitente(char *);

        void correoHistorialMensaje(int);
        void correoEnviarMensaje();
        void mostrarRemitentes();



        static int obtenerConteoAtributos();


    protected:

    private:

        char *correoCorreoElectronico;
        char *correoNombreRemitente;


        MensajeCorreo * atributosCorreo;
        static int conteoAtributos;
        MensajeCorreo * listaAtributos[50];


};

#endif // CORREO_H
