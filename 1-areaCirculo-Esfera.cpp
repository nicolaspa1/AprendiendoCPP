#include <iostream>

using namespace std;

    float pi = 3.1416;
    float aCirculo(float r){
    return pi*r*r;
    }
    float aEsfera(float r){
    return 4*pi*r*r;
    }

int main()
{
    float r;
    int opcion;
    cout << "Que area desea calcular, seleccione una opcion" << endl;
    cout << "(1) Circunferencia" << endl;
    cout << "(2) Esfera" << endl;
    cin >> opcion;
    if(opcion==1){
        cout << "El area de la Circunferencia es" << endl;
        cin >> r;
        cout << "El area de la Circunferencia es" << endl;
        cout << aCirculo(r);
    }else
     if(opcion==2){
        cout << "Digite el radio de la Esfera es" << endl;
        cin >> r;
        cout << "El area de la Esfera es" << endl;
        cout << aEsfera(r);
     }


    return 0;
}
