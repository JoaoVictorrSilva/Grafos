/*
 * Tarefa 04 - Desbravo Bros.
 *
 * GEN254 - Grafos - 2023/2
 *
 * Nome:      João Victor da Silva
 * Matricula: 2211100072
 */

#include <iostream>
#include "Digrafo.h"

Digrafo::Digrafo(int r){
  regioes = r;
  vida = 0;

  adj.resize(r);
  pai.resize(r);
  dp.resize(r);

  for(int i = 0; i < r; i++){
    adj[i].resize(r, 0);
    dp[i] = 1000; // 1000 --> "infinito"
    pai[i] = -1;
  }
}

void Digrafo::insert_edge(Aresta S, int vida_cano){
  if(adj[S.v1][S.v2] != 0)
    return;
  
  adj[S.v1][S.v2] = vida_cano;
}

void Digrafo::max_vidas(Aresta S, int maximo){
  if((vida + adj[S.v1][S.v2]) > maximo)
    return;
  else
    vida += adj[S.v1][S.v2];
}

bool Digrafo::Bellman_Ford(int s){
  for(int i = 0; i < regioes; i++)
    for(int j = 0; j < regioes; j++)
      if(dp[i] != 1000 && dp[j] > dp[i] + adj[i][j]){
        dp[j] = dp[i] + adj[i][j];
        pai[j] = i;
      }
  
  for(int i = 0; i < regioes; i++)
    for(int j = 0; j < regioes; j++)
      if(dp[i] != 1000 && dp[j] > dp[i] + adj[i][j])
        return false;

  return true;
}