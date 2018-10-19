#ifndef __ARVORE_H
#define __ARVORE_H

typedef struct _arvore Arvore;

typedef struct _candidato {
  int numero;
  char nome[200];
  char cargo[50];
} Candidato;

Arvore* arvore_inserir(Arvore *a, Candidato cand);
Candidato* arvore_buscar(Arvore *a, int candNumero);
void arvore_imprime_em_ordem(Arvore *a);

#endif