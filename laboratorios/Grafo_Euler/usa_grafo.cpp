/*
 * Tarefa 01 - Grafo - Listas de Adjacencia
 *
 * GEN254 - Grafos - 2023/2
 *
 * Nome: João Victor da Silva
 * Matricula: 2211100072
*/

#include "Aresta.h"
#include "Grafo.h"
#include <iostream>

using namespace std;

int main() {
    
    Grafo g(6);
    g.insert_edge(Aresta(0, 2));
    g.insert_edge(Aresta(0, 5));
    g.insert_edge(Aresta(1, 2));
    g.insert_edge(Aresta(1, 5));

    if(g.busca_larg(0)){
        cout << "E Euleriano";
    }
    else{
        cout << "\nNao e Euleriano";
    }



    return 0;
}