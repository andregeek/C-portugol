/*
    C-Portugol
    Usando o pre-processador ANSI C para camuflar a linguagem
    e criar um novo portugol adaptado para as necessidades
    de aprendizagem na disciplina

  como usar, coloque esse arquivo na mesma pasta do seu codigo
  digite antes de começar a programar : include "portugol.h" <enter>
  
*/

/* bibliotecas auxiliares */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* declaracao de variaveis */
#define declare 
#define variavel

/* tipos */

typedef int inteiro
typedef long longo
typedef short curto
typedef signed sinal
typedef unsigned sem_sinal

typedef float real
typedef double real_duplo

typedef int booleano
#define verdadeiro 1
#define falso 0

typedef char caractere

typedef void vazio

/* constantes */

/* vetores e matrizes */

/* strings */

/* operadores */

/* blocos de instrucao */
#define inicio {
#define fim }

/* sintaxe if */

#define se if(
#define entao ){
#define senao }else{
#define fim_se }

/* sintaxe for */
#define para for(
#define de =
#define ate ;
#define passo ;
#define faca ){
#define fim_para }

/* sintaxe while */
#define enquanto while(
#define faca ){
#define fim_enquanto }

/* sintaxe do */
#define fazer do{
#define fim_fazer );

/* sintaxe switch case */

/* funcao e procedimento */
#define funcao 
#define tipo
#define fim_funcao {

#define procedimento void

#define retorne return

/* registro */
#define registro struct
#define fim_registro }

/* ponteiros */
#define ponteiro *
#define endereco_de &
#define aponta_para = &
#define conteudo_de *

/* alocacao dinamica de memoria */
#define alocarmemoria(tam,tipo) (tipo) malloc(tam * sizeof(tipo))

/* funcoes de entrada e saida */

/* funcoes matematicas */

/* funcoes auxiliares */

/* arquivos */
