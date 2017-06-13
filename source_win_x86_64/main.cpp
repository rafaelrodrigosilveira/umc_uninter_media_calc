//
//  main.cpp
//  calcula_media_uninter
//
//  Created by Rafael Rodrigo Silveira on 05/06/17.
//  Copyright © 2017 Rafael Rodrigo Silveira. All rights reserved.
//  XCODE - OSX
//  Rafael Rodrigo Silveira - versão 1.0 - 05/06/2017 - Revisão: 05/06/2017

//#include <iostream> // BIBLIOTECA PADRAO PARA OSX
#include <string.h> // Funções de Texto
#include <stdlib.h> // Funções padrão da linguagem
#include <math.h> // Funções de Matematica
#include <stdio.h> // Funções de Entrada e Saida I/O
//#include <conio.h> // BIBLIOTECA PARA USAR GETCHAR EM WINDOWS
//#include <curses.h> // BIBLIOTECA PARA LINUX OU OSX

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//VARIAVEIS
    float apol1,apol2,apol3,apol4,apol5,ativ_prat,prov_obj, prov_disc;
    float peso_apols, peso_prov_obj,peso_prov_disc,media;
    
    //LIMPAR TELA
    //system("clear");
    system("cls");
    
    //CABEÇALHO
    printf("\n************************************");
    printf("\nCALCULADORA DE MEDIA - UNINTER");
    printf("\nProgramador: Rafael Rodrigo Silveira");
    printf("\nVersão: 1.0 - 05/06/2017");
    printf("\n************************************");
    printf("");
    printf("");
    
    
    //LER APOLS
    printf("\nInforme a nota da apol 1: ");
    scanf("%f", &apol1);
    printf("Informe a nota da apol 2: ");
    scanf("%f", &apol2);
    printf("Informe a nota da apol 3: ");
    scanf("%f", &apol3);
    printf("Informe a nota da apol 4: ");
    scanf("%f", &apol4);
    printf("Informe a nota da apol 5: ");
    scanf("%f", &apol5);
    
    //LER ATIVIDADES PRATICAS
    printf("Informe a nota da ATIVIDADE PRATICA: ");
    scanf("%f", &ativ_prat);
    
    //LER PROVA OBJETIVA
    printf("Informe a nota da PROVA OBJETIVA: ");
    scanf("%f", &prov_obj);
    
    //LER PROVA OBJETIVA
    printf("Informe a nota da PROVA DISCURSIVA: ");
    scanf("%f", &prov_disc);
    
    // PROCESSAR MEDIA
    peso_apols = (apol1*30+apol2*30+apol3*30+apol4*30+apol5*30)/5;
    peso_prov_obj = (prov_obj*20);
    peso_prov_disc = (prov_disc*50);
    media = (peso_apols+peso_prov_obj+peso_prov_disc)/100;
    
    // APRESENTAR MEDIA
    printf(" ");
    printf("\nA sua média é: %f", media);
    
    //VERIFICA SE PASSOU OU REPROVOU
    if(media>=70.000000){
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
    
    // PAUSA O PROGRAMA
    printf("");
    printf("");
    system("pause"); // pausa programa em windows
    //system( "read -n 1 -s -p \"\nAperte uma tecla para fechar o programa...\"" );// Pausa programa em OSX
	return 0;
}
