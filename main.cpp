#include <iostream>
#include "Sistema.h"
using namespace std;
int main()
{
    Sistema st;
    string op;
    while(true)
    {
        cin.ignore();
        cout << "a) Agregar neurona al inicio" << endl;
        cout << "b) Agregar neurona al final" << endl;
        cout << "c) Mostrar" << endl;
        cout << "d) Salir" << endl;
        getline(cin, op);
        if(op=="a")
        {
            Neurona n;
            cin >> n;
            st.agregar_inicio(n);
        }
        else if(op=="b")
        {
            Neurona n;
            cin >> n;
            st.agregar_final(n);
        }
        else if(op=="c")
        {
            st.mostrar();
        }
        else if(op=="d")
        {
            break;
        }
    }
}
