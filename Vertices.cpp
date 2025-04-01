#include <iostream>
using namespace std;

int main() {
    int vertices;  
    cout << "Ingresa el numero de vertices: ";
    cin >> vertices;
    float x[100], y[100], z[100];
    
    for (int i = 0; i < vertices; i++) {
        cout << "Vertice x " << i + 1 << ": ";
        cin >> x[i];
        cout << "Vertice y " << i + 1 << ": ";
        cin >> y[i];
        cout << "Vertice z " << i + 1 << ": ";
        cin >> z[i];
    }
    
    int faces;
    cout << "Ingresa el numero de caras: ";
    cin >> faces;

    int caras[100][3];

    for (int i = 0; i < faces; i++) {
        cout << "Ingresa los indices de los 3 vertices de la cara " << i + 1 << " (entre 1 y " << faces << "):" << endl;
        cin >> caras[i][0] >> caras[i][1] >> caras[i][2];
    }

    cout << "Estructura total:" << endl;

    cout << "Numero de Vertices:" << endl;
    for (int i = 0; i < vertices; i++) {
        cout << "v " << x[i] << " " << y[i] << " " << z[i] << endl;
    }

    cout << "Caras (definidas por los índices de los vértices):" << endl;
    for (int i = 0; i < faces; i++) {
       
        cout << "f " << caras[i][0] << " " << caras[i][1] << " " << caras[i][2] << endl;
    }
    
return 0;
}