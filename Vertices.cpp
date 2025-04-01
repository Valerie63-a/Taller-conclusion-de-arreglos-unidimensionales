#include <iostream>
using namespace std;

int main() {
    int vertices;  
    cout << "Ingresa el numero de vertices: ";
    cin >> vertices;
    
    int x[100], y[100], z[100];
    
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

    int verticesf[100];  
    int caras[100][100];     

    for (int i = 0; i < faces; i++) {
        cout << "Ingresa el numero de vertices por cara " << i + 1 <<;
        cin >> verticesf[i];  
        cout << "Ingresa los indices de los " << verticesf[i] << " vertices de la cara " << i + 1 << " (entre 1 y " << vertices << "):" <<endl;
        for (int j = 0; j < verticesf[i]; j++) {
            cin >> caras[i][j];
        }
    }

    cout << "* Vértices:" <<endl;
    for (int i = 0; i < vertices; i++) {
        cout << "v " << x[i] << " " << y[i] << " " << z[i] <<endl;
    }

    cout << "* Caras:" <<endl;
    for (int i = 0; i < vertices; i++) {
        cout << "f";
        for (int j = 0; j < verticesf[i]; j++) {
            cout << " " << caras[i][j];
        }
        cout <<endl;
    }
    
    return 0;
}
