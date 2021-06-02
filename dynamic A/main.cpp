#include <iostream>
#include "DynamicArray.h"
#include "Estudiante.h"

using namespace std;

int main() {

    Estudiante e1("Jimena",20201235,18,'F',"Tercer");
    Estudiante e2("Juan", 20202345, 17,'M', "Segundo");
    Estudiante e3("Jorge", 20191234, 19,'M', "Quinto");


    Estudiante arr[] = {e1, e2, e3};
    int tam = sizeof(arr) / sizeof(arr[0]);

    DynamicArray<Estudiante> da(arr, tam);

    cout<<"sobrecarga del operador"<<"(<<)"<<"en la clase estudiante\n";
    cout<<e1<<"\n";
    cout<<"sobrecarga del operador"<<"(<<)"<<"en la clase DynamicArray\n";
    cout<<da<<"\n";
    da.print();
       

    return 0;
}
