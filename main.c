#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree_template.h"

int main(int argc, char** argv) {
    BinaryTree* tree;
    char buffer[200];
    int op;
    while (1) {
        //do{
        op = -1;
        printf("Elija una de las siguientes opciones\n");
        printf("(1)Mostrar arbol 1\n");
        printf("(2)Mostrar arbol 2\n");
        printf("(3)Interactuar con arbol 1\n");
        printf("(4)Interactuar con arbol 2\n");
        printf("(0)Exit\n");
        if (scanf("%d", &op) != 1) { //Error en el scanf
            scanf("%s", buffer); //Cogemos los valores de más que haya introducido el usuario
        }
        switch (op) {
            case 1:
                tree = create_example1();
                print_tree(tree);
                sleep(5);
                printf("\n\n\n");
                break;
            case 2:
                tree = create_example2();
                print_tree(tree);
                sleep(5);
                printf("\n\n\n");
                break;
            case 3:
                tree = create_example1();
                print_manual_tree(tree);
                sleep(5);
                printf("\n\n\n");
                break;
            case 4:
                tree = create_example2();
                print_manual_tree(tree);
                sleep(5);
                printf("\n\n\n");
                break;
            case 0:
                printf("Gracias por utilizar el programa\n");
                exit(0);
                break;
            default:
                printf("El numero ingresado es erroneo\n");
                sleep(5);
                printf("\n\n\n");
        }
    }
    return (EXIT_SUCCESS);
}
