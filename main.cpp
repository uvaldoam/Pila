#include <iostream>
#include <exception>
#include<ctime>
#include<cstdlib>
using namespace std;

template<class T>
struct Nodo{
   T dato;
   Nodo * siguiente;
   Nodo(const T& valor):dato(valor), siguiente(nullptr){}
};
Nodo N1,N2;
N1(10);
N1.dato=10
N1.siguiente=nullptr;
N2.dato=
N2.siguiente=
class EPilaVacia : public exception{
public:
   const char* what() const throw(){
   return "Error: Pila Vacia ";
   }
};
template<class T>
class Pila{
private:
   Nodo<T>* tope;

public:
   Pila():tope(nullptr){}
   ~Pila(){
      while(!estaVacia())
         pop();
    }
    bool estaVacia()const {
     return  tope==nullptr;
    }
    void push(const T& valor){
      Nodo<T>* nuevoNodo =new Nodo<T>(valor);
      nuevoNodo->siguiente = tope;
      tope=nuevoNodo;
    }
    void pop(){
      if(!estaVacia()){
         Nodo<T>* nodoEliminar=tope;
         tope = tope ->siguiente;
         delete nodoEliminar;
       }
    }
    T top() const throw(EPilaVacia) {
      if(!estaVacia()){
          return tope->dato;
       }else throw EPilaVacia();
     }
};
class animal
{
 public:
 int d=100;
};
int main()
{
    animal a1, a2, a3;
    Pila<int> p1;
    p1.push(10);
    p1.push('a');
    p1.push(12);
    p1.push('b');
    p1.pop();
   cout <<"Dato :"<<p1.top()<< endl;
   return 0;
}
