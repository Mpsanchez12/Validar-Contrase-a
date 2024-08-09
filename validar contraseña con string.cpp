#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string admind_user = "Sultana";
    string admind_password = "1234";
    string password;
    string user;

    cout << "Ingrese su usuario" << endl;
    cin >> user;
    cout << "Ingrese su clave" << endl;
    cin >> password;

    if (admind_user == user && admind_password == password) {
        cout << "Usuario y contraseña correctas" << endl;
    } else {
        cout << "Usuario o Contraseña incorrectas" << endl;
        cout<<"Ingrese Usuario nuevamente"<<endl;
        cin>>user;
        cout<<"Ingrese Contraseña nuevamente"<<endl;
        cin>>password;
    }

    return 0;
}

