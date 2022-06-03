#include <stdio.h>
#include <stdlib.h>

//struct utilizada para o encadeamento duplo de uma lista
struct lista2 {
    int info;
    struct lista2* ant;
    struct lista2* prox;
};
typedef struct lista2 Lista2;

//função de criação da Lista
Lista2* lista2_cria(){
    return NULL;
}

//função de inserção de elemento
Lista2* lista2_insere (Lista2* lista2, int valor){
    Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
    novo->info = valor;
    novo->prox = lista2;
    novo->ant = NULL;
 
    //verificação  se a lista é nula
    if (lista2 != NULL){
    lista2->ant = novo;
    return novo;
}

//função de busca do elemento para verificar a localização e existência do mesmo
Lista2* lista2_busca (Lista2* lista2, int valor){
    Lista2* p;
    for (p=lista2; p!=NULL; p=p->prox){
        if (p->info == valor){
        return p;}
    //caso o elemento não seja encontrado ele direciona para o fim da lista
    return NULL;}
    }
   
//Função para exibir a lista 
void Lista2_exibe(Lista2* lista2){
    Lista2* p;
    for(p=lista2; p!= NULL; p=p->prox){
        printf("%d",n->int);
    }
}

// Montagem da função para retirar o elemento
Lista2* lista2_retira (Lista2* lista2, int valor){
    Lista2* p = lista2_busca(lista2,valor);

    //se não achar o elemento ele retorna a lista normalmente e retira o elemento da lista
    if (p == NULL){
        return lista2;}

    //realiza o teste para verificar se o elemento procurado está no início
    if (lista2 == p){ 
      lista2 = p->prox;}

    else{
        p->ant->prox = p->prox;}
    
    //realiza o teste para verificar se o último elemento é o procurado
    if (p->prox != NULL) {  
       p->prox->ant = p->ant;}

    free(p);
    return lista2;
    }

void main(){
    Lista2* lista2;
    lista2= lista2_cria
    
    lista2 = lista2_insere(lista2,"0");
    lista2 = lista2_insere(lista2,"5");
    lista2 = lista2_insere(lista2,"7");
    lista2 = lista2_insere(lista2,"1");
    lista2 = lista2_insere(lista2,"50");
    lista2 = lista2_insere(lista2,"10");
    lista2 = lista2_insere(lista2,"0");
    lista2 = lista2_insere(lista2,"6");
    
    lista2 = lista2_retira(lista2,"50");
    Lista2_exibe(lista2);
    return 0;  
}
