#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

struct _arvore {
  struct _arvore *esquerda;
  struct _arvore *direita;
  Candidato cand;
};

Arvore* arvore_inserir(Arvore *a, Candidato cand) {
  //Implemente
}

Candidato* arvore_buscar(Arvore *a, int candNumero) {
  //Implemente
}

void arvore_imprime_em_ordem(Arvore *a) {
  //Implemente
}