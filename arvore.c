#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

struct _arvore {
  struct _arvore *esquerda;
  struct _arvore *direita;
  Candidato cand;
};

Arvore* arvore_inserir(Arvore *a, Candidato cand) {
	if(a == NULL) {
		Arvore *novo = (Arvore*) malloc(sizeof(Arvore));
		novo->cand = cand;
		novo->esquerda = NULL;
		novo->direita = NULL;
		return novo;
	}
	if(cand.numero < a->cand.numero) {
		a->esquerda = arvore_inserir(a->esquerda, cand);
	} else {
		a->direita = arvore_inserir(a->direita, cand);
}
return a;
}

Candidato* arvore_buscar(Arvore *a, int candNumero) {
	if(a == NULL) 
	{
		return NULL;
	}
	if(a->cand.numero == candNumero)
	{
		return &a->cand;
	}
	if(candNumero < a->cand.numero) 
	{
		return arvore_buscar(a->esquerda, candNumero);
	} 
	else 
	{
		return arvore_buscar(a->direita, candNumero);
	}
}

void arvore_imprime_em_ordem(Arvore *a) {
	if(a->esquerda != NULL) 
	{
		arvore_imprime_em_ordem(a->esquerda);
	}
	printf("%lf ", a->cand);
	if(a->direita != NULL) 
	{
		arvore_imprime_em_ordem(a->direita);
	}
}
