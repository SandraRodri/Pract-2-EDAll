/* 
 * File:   main.c
 * Author: U137651
 *
 * Created on 29 de mayo de 2017, 13:09
 */

#include <stdio.h>
#include <stdlib.h>

#include "BinaryTree_template.h"

/*
 * 
 */
int main(int argc, char** argv) {
    BinaryTree* tree;
   
    tree = tree_names;
    int op;
    do{
    printf("(1)Mostrar arbol 1\n");
    printf("(2)Mostrar arbol 2\n");
    printf("(3)Interactuar con arbol 1\n");
    printf("(4)Interactuar con arbol 2\n");
    printf("(0)Exit\n");
    printf("Que desea hacer?:");
    scanf("%d",&op);
    
    switch(op){        
        case 1: printf("Se muestra el arbol 1\n");
        break;
        case 2: printf("Se muestra el arbol 2\n");
        break;
        case 3: printf("Se interactua con el arbol 1\n");
        break;
        case 4: printf("Se interactua con el arbol 1\n");
        break;
        case 0: printf("\nAdios (╯°□°）╯︵ ┻━┻ \n");
        break;
        default: printf("El numero ingresado es erroneo\n");
    }
                       
    }while(op > 0 && op < 5 );
    
                       
    return (EXIT_SUCCESS);
}
