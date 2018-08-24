/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 23 de agosto de 2018, 09:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    printf("Hola usuario\n ¿Cuál es tu edad?");
    int edad;
    scanf ("%d",&edad);
    if (edad>=18){
        printf("Puedes entrar al bar");
    }else{
        printf("Es más pertinente que practiques tus sumas, pequeño");
    }
    return 0;
}

