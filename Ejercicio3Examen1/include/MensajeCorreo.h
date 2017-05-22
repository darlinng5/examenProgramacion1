#ifndef MENSAJECORREO_H
#define MENSAJECORREO_H


class MensajeCorreo
{
    public:
        MensajeCorreo();
        MensajeCorreo(char *,char *,char *,char *);
        virtual ~MensajeCorreo();

        void establecerMensajePara(char *);
        void establecerMensajeCc(char *);
        void establecerMensajeAsunto(char *);
        void establecerMensajeMensaje(char *);


        char *obtenerMensajePara();
        char *obtenerMensajeCc();
        char *obtenerMensajeAsunto();
        char *obtenerMensajeMensaje();

        void mensajeMostrarDatos();







    protected:

    private:
        char *mensajePara;
        char *mensajeCc;
        char *mensajeAsunto;
        char *mensajeMensaje;







};

#endif // MENSAJECORREO_H
