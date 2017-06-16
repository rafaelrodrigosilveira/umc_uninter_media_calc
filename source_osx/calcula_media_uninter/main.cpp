//
//  main.cpp
//  calcula_media_uninter
//
//  Created by Rafael Rodrigo Silveira on 05/06/17.
//  Copyright © 2017 Rafael Rodrigo Silveira. All rights reserved.
//  XCODE - OSX
//  Rafael Rodrigo Silveira - versão 1.0 - 05/06/2017 - Revisão: 05/06/2017

#include <iostream> // BIBLIOTECA PADRAO PARA OSX
#include <string.h> // Funções de Texto
#include <stdlib.h> // Funções padrão da linguagem
#include <math.h> // Funções de Matematica
#include <stdio.h> // Funções de Entrada e Saida I/O
//#include <conio.h> // BIBLIOTECA PARA USAR GETCHAR EM WINDOWS
//#include <curses.h> // BIBLIOTECA PARA LINUX OU OSX

//VARIAVEIS
int apol1, apol2, apol3, apol4, apol5, N1, N3, N4, PO, AP, PD, media;

// ----------------------------------------------------------------------------
//    FUNÇAO CABEÇALHO
// ----------------------------------------------------------------------------
void cabecalho(){
    //LIMPAR TELA
    system("clear");
    
    //CABEÇALHO
    printf("\n************************************");
    printf("\nCALCULADORA DE MEDIA - UNINTER");
    printf("\nProgramador: Rafael Rodrigo Silveira");
    printf("\nVersão: 1.2 - 16/06/2017");
    printf("\nrafaelrodrigosilveira@gmail.com");
    printf("\n************************************");
    printf("");
    printf("");
}

// ----------------------------------------------------------------------------
//    FUNÇAO CADASTRAR
// ----------------------------------------------------------------------------
void cadastrar(){
    
    
    //LER APOLS
    printf("\nInforme a nota da apol 1: ");
    scanf("%d", &apol1);
    printf("Informe a nota da apol 2: ");
    scanf("%d", &apol2);
    printf("Informe a nota da apol 3: ");
    scanf("%d", &apol3);
    printf("Informe a nota da apol 4: ");
    scanf("%d", &apol4);
    printf("Informe a nota da apol 5: ");
    scanf("%d", &apol5);
    
    //LER ATIVIDADES PRATICAS
    printf("Informe a nota da ATIVIDADE PRATICA: ");
    scanf("%d", &AP);
    
    //LER PROVA OBJETIVA
    printf("Informe a nota da PROVA OBJETIVA: ");
    scanf("%d", &PO);
    
    //LER PROVA OBJETIVA
    printf("Informe a nota da PROVA DISCURSIVA: ");
    scanf("%d", &PD);
}

// ----------------------------------------------------------------------------
//    FUNÇAO CALCULA MEDIA
// ----------------------------------------------------------------------------

void calc_media(){
    // PROCESSAR MEDIA
    N1=PO;
    N3 = (apol1 + apol2 + apol3 + apol4 + apol5) / 5;
    N4 = (AP * 0.4 + PD * 0.6);
    media = (N1 * 30 + N3 * 20 + N4 * 50) / 100;
}


// ----------------------------------------------------------------------------
//    FUNÇAO VERIFICA SE APROVADO/REPROVADO
// ----------------------------------------------------------------------------

void verifica_passou(){
    //VERIFICA SE PASSOU OU REPROVOU
    if(media>=70){
        printf("");
        printf("\n************************************");
        printf("\nParabéns, você está APROVADO!.");
        printf("\n************************************");
        printf("");
    }
    else {
        printf("");
        printf("\n***********************************************");
        printf("\nInfelizmente, você REPROVOU ou ficou em EXAME.");
        printf("\n***********************************************");
        printf("");
    }
}



// ----------------------------------------------------------------------------
//    FUNÇAO PRINCIPAL
// ----------------------------------------------------------------------------
int main(int argc, const char * argv[]) {
    
    
    cabecalho();
    
    cadastrar();
    
    calc_media();

    
    // APRESENTAR MEDIA
    printf(" ");
    printf("\nA sua média é: %d", media);
    
    verifica_passou();
    
    // PAUSA O PROGRAMA
    printf("\n");
    printf("\n");
    //system("pause"); // pausa programa em windows
    system( "read -n 1 -s -p \"\nAperte uma tecla para fechar o programa...\"" );// Pausa programa em OSX
    
    return 0;
}
