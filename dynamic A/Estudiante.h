#ifndef __ESTUDIANTE_H__
#define __ESTUDIANTE_H__

#include <iostream>
#include <string>

class Estudiante {

    std::string nombre;
    int cui;
    int edad;
    char sexo;
    std::string semestre;
public:
    Estudiante();
    Estudiante(std::string, int, int, char, std::string);
    void setCui(int);
    int getCui()const;
    void setEdad(int);
    int getEdad()const;
    void setNombre(std::string);
    std::string getNombre()const;
    char getSexo()const;
    void setSexo(char);
    void setSemestre(std::string);
    std::string getSemestre()const;
    friend std::ostream& operator << (std::ostream &out, const Estudiante &p);
};


Estudiante::Estudiante(){
    this->nombre = "";
    this->cui = 0;
    this->edad = 0;
    this->sexo = NULL;
    this->semestre = "";
}

Estudiante::Estudiante(std::string nombre, int cui, int edad, char sexo, std::string semestre){
    this->nombre = nombre;
    this->cui = cui;
    this->edad = edad;
    this->sexo = sexo;
    this->semestre = semestre;
}
//edad
int Estudiante::getEdad()const{
    return edad;
}
void Estudiante::setEdad(int edad){
    this->edad=edad;
}
//cui
void Estudiante::setCui(int cui){
    this->cui=cui;
}
int Estudiante::getCui()const{
    return cui;
}
//nombre
void Estudiante::setNombre(std::string nombre){
    this->nombre = nombre;
}
std::string Estudiante::getNombre()const{
    return nombre;
}
//sexo
void Estudiante::setSexo(char sexo){
    this-> sexo= sexo;
}
char Estudiante::getSexo()const{
    return sexo;
}
//Semestre
void Estudiante::setSemestre(std::string semestre){
    this->semestre=semestre;
}
std::string Estudiante::getSemestre()const{
    return semestre;
}

std::ostream& operator << (std::ostream &out, const Estudiante &o){
    out<<"Nombre del alumno: "<<o.getNombre()<<",";
    out<<" su edad es: "<<o.getEdad()<<" anhos,";
    out<<" su sexo es: "<<o.getSexo()<<",";
    out<<" su CIU es: "<<o.getCui()<<",";
    out<<" cursa el: "<<o.getSemestre()<<" semestre,";
    return out;
}
#endif

