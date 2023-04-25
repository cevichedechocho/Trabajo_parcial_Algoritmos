#include "pch.h"
#include "CControlador.h"
using namespace System;

int main()
{
    //Console::SetWindowSize(40, 40);
    Console::SetWindowSize(90, 40);
    int time = 0;
    while (true)
    {
        time++;
        cout << time;

        _sleep(100);

    }
    /*while (true)
    {
        std::cout << "ggg\t";
        _sleep(20);
    }*/
    //CControlador* inicio = new CControlador();

    //inicio->Iniciar_Simulacion();
    system("pause>0");

    return 0;
}
