#include <iostream>

using namespace std;
int opc;

int main() {
    cout << "ingrese una de las siguientes opciones"<< endl;
    cout << "opcion 1: pedirle al usuario su edad y determinar si es mayor de edad o no" << endl;
    cout << "opcion 2 :pida al usuario dos numeros y determine cual es el mayo de los dos"<< endl;
    cout << "opcion 3: pida un numero entero y determine si es par o impar"<< endl;
    cout << "opcion 4: Escribir un programa que pida al usuario un numero del 1 al 5 y muestre por pantalla el nombre del dia de la semana correspondiente utilizando una estructura switch"<< endl;
    cin >> opc;

    switch (opc) {

        case 1:
            int q;

            cout << "ingrese su edad para determinar si es mayo o menor de edad";
            cin >> q;
            if (q <= 17) {
                cout<< "su edad es : " << q << "usted es menor de edad"<< endl;

            } else {
                cout<< "su edad es de:" << q << "usted es mayor de edad" << endl;
            }
        break;

        case 2:

            int w,e;
            cout << "ingrese dos numeros para determinar cual es el mayor de los dos"<< endl;
            cin >>w;
            cin >> e;

            if(w==e){
                cout<< "son numeros iguales" << endl;
            }else if( w > e){
                cout<< "este es el numero mayor"<< w << endl;
            }else if (e> w){
                cout << " este numero es mayor"<< e << endl ;
            }
            break;

        case 3 :
            int r;
            printf( "\n   Introduzca un nucmero para verificar si es par o impar: ", 163 );
            scanf( "%d", & r );

            if ( r % 2 == 0 )
                printf( "\n   ES PAR" );
            else
                printf( "\n   ES IMPAR"  );
            break;

        case 4:

            cout << "ingrese un numero para calcular el factorial" << endl;
            int t,tol ;
            cin>> t;
            tol =1;
            for (int i = 1; i <=t ; i++) {
                tol = tol*i ;
            }

            cout<< "El factoria de "<< t << "es:"<< tol << endl;


            break;

        case 5:
            int opc2;
            cout << "introdusca un numero del 1 al 5 para poder ver un dia de la semana";
            switch (opc2) {
                case 1:
                    cout << "dia 1 lunes" << endl;
                    break;

                case 2:
                    cout << "dia 2 martes" << endl;
                    break;

                case 3:
                    cout << "dia 3 miercoles" << endl;
                    break;
                case 4:
                    cout << "dia 4 miercoles" << endl;
                    break;
                case 5:
                    cout<< "dia 5 jueves"<< endl;
                    break;
            }

            break;
    }
    return 0;
}
