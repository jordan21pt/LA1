
/**
@file lista.h
Definição de lista e das funções que manipulam listas
*/
#ifndef PROJETO_LISTA_H
#define PROJETO_LISTA_H
/**
\brief Tipo de dados para a lista.\n
*/
typedef struct lista
{
    /** Apontador para o dado guardado na lista */
    void * dado;
    /** Apontador para o nodo seguinte */
    struct lista  *prox;
}Nodo, *LISTA;

/**
\brief Cria uma lista.\n
@return Uma lista vazia, isto é, a apontar para NULL.
*/
LISTA criar_lista();

/**
\brief Insere um nodo no inicio da lista.\n
@param L A lista.
@param valor Apontador para o elemento que vai ser inserido na lista.\n
@return A lista l com o valor inserido na  cabeça.\n
*/
LISTA insere_cabeca(LISTA L, void *valor);

/**
\brief Devolve o elemento que esta na cabeça da lista.\n
@param L A lista.\n
@return o elemento que esta na cabeça da lista.\n
*/
void *devolve_cabeca(LISTA L);

/**
\brief Devolve a cauda da lista.\n
@param L A lista.\n
@return A cauda da lista.\n
*/
LISTA proximo(LISTA L);

/**
\brief Remove a cabeça da lista (libertando o espaço ocupado) e devolve a cauda.\n
@param L A lista.\n
@return A cauda da lista.\n
*/
LISTA remove_cabeca(LISTA L);

/**
\brief Verifica se a lista está vazia.\n
@param L A lista.\n
@return 1 se a lista está vazia e 0 se não está vazia.\n
*/
int lista_esta_vazia(LISTA L);

/**
\brief Devolve o cumprimento da lista.\n
@param L A lista.\n
@return O número de elementos da lista.\n
*/
int comprimento_lista (LISTA L);
/**
\brief Liberta o espaço ocupado pela lista.\n
@param L Apontador para a  lista.\n
*/
void limpa_lista(LISTA *L);

#endif //PROJETO_LISTA_H