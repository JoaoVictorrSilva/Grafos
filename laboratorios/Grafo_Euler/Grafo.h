/*
 * Tarefa 02 - Potenciais Comparsas
 *
 * GEN254 - Grafos - 2023/2
 *
 * Nome:      João Victor da Silva
 * Matricula: 2211100072
 */

#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include "Aresta.h"
#include "vector"
#include "queue"

class Grafo{

private:
    std::vector<std::vector<int>> adj;
    int vertices_number_; //vertices
    int arestas_number_; //edges

public:
    Grafo(int v);
    void insert_edge(Aresta e); 
    bool busca_larg(int v);
    //bool graus();
};

#endif