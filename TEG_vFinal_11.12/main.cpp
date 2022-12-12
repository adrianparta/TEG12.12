//v7
#include <iostream>
#include "Constantes"

using namespace std;

#include "funciones.h"

int main(){

    //inicializa todos los parametros necesarios para jugar y ejecuta la primer ronda que es distinta a las siguientes

    PantallaDeInicio();///Menu de presentacion del juego

    InicializarPartida();

    while(0!=1){

        DibujarCantCartas();

        locate(1,60);
        cout<<"Para ver su objetivo secreto, rueda hacia abajo";
        locate(1,100);
        printf("\33[2K\r");
        locate(1,100);
        cout<<"su objetivo secreto es: "<<textoSecreto[objetivos[(int)turnoDe]];
        locate(1,1);

        for(int i=0;i<2;i++){

            locate(1,54);
            printf("\33[2K\r");
            locate(1,54);
            if(turnoDe == 0){
                cout<<"Turno del jugador rojo";
            }else{
            cout<<"Turno del jugador azul";
            }
            IncorporarEjercitos();
            turnoDe=!turnoDe;
        }
        for(int i=0;i<2;i++){

            locate(1,54);
            printf("\33[2K\r");
            locate(1,54);
            if(turnoDe == 0){
                cout<<"Turno del jugador rojo";
            }else{
            cout<<"Turno del jugador azul";
            }

            Atacar();

            Reagrupar();

            RecompensaPorConquista();

            turnoDe=!turnoDe;
        }
    }
    return 0;
}
