#include "NodoArbolBinario.h"
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <list>          // std::list
using namespace std;

//Devuelve la suma de todos los numeros del arbol con la raiz dada.
int suma(NodoArbolBinario* raiz)
{
    int nums = 0; // verifica si la variable nums es 0
    if(raiz == NULL)// verifica si la raiz es vacia
    {
        return 0; // esto retorna 0 si no hay variable en ella
    }
    if(raiz || NULL)// verifica si la raiz tiene elementos
    {
        nums += raiz->num;// suma los elementos de la raiz
        nums += suma(raiz->hijo_der) + suma(raiz->hijo_izq);//hacemos una llamada recursiva a los hijos de las raiz para luego sumarlo
    }
    return nums; // retorna 0 el total de la suma de los hijos de la raiz
}

//Devuelve la cantidad de nodos que tiene el arbol con la raiz dada.
int cantidadNodos(NodoArbolBinario* raiz)

{
    int canti = 0; // verifica si la variable nums es 0
    if(raiz != NULL)// verifica si la raiz es vacia
    {
        canti++;// la variable que inicilisamos le vamos a aumentando
        return canti += cantidadNodos(raiz->hijo_der) + cantidadNodos(raiz->hijo_izq);// retorna la cantidad total de la raiz y luego los suma
        }
}

//Devuelve el promedio de los numeros que tiene el arbol con la raiz dada.
int promedio(NodoArbolBinario* raiz)
{
    if(raiz==NULL) // aqui verificamos si la raiz es null
        return -1;
    return suma(raiz) / cantidadNodos(raiz);//se llama una funcion de sobre carga ya que esta una variable que se este utilizando

}

//Devuelve la cantidad de pasos que tiene que dar el algoritmo para llegar a un numero dado.
//Ejemplo: http://www.comp.nus.edu.sg/~stevenha/visualization/bst.html
//Para llegar al nodo 7 se ocupan 3 pasos (15,6,7)
//Para llegar al nodo 5 se ocupan 4 pasos (15,6,4,5)
//Para llegar al nodo 15 se ocupa 1 paso (15)
int cuantosPasos(NodoArbolBinario* raiz,int num)
{
    int conta=1;// se crea una variable para que valla guardando los paso
    if(raiz<=NULL)// vericamos si la raiz es menor o igual vacia
        return conta; // retornamos una la varaiable anterior
    else if(raiz->num==num) // en caso contrario raiz apunta al num y despues igualamos si es num
        return conta;
    else if(raiz->num<num) // en caso contrario raiz apunta num y vericamos sin num es menor
        conta+= cuantosPasos(raiz->hijo_der,num); // aqui verificamos cuanto paso hay en el hijo derecho y num
    else if(raiz->num>num) // en caso contrario apuntamos a num y vericamos si es mayor
        conta+= cuantosPasos(raiz->hijo_izq,num); // aqui verificamos cuanto paso hay desde la raiz hacia hijo izquierdo y num
    return conta; // retornamos a la variable que inicialisamos anterior


}

//Devuelve verdadero si el arbol dado esta ordenado estilo AVL, de lo contrario devuelve falso.
bool esAVL(NodoArbolBinario* raiz)
{
        return false;


}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 1;
}
