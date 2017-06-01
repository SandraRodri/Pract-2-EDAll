#include <string.h>

#ifndef BINARYTREE_H
#define BINARYTREE_H

/*
 * Tarea 1
 * Especifique el tipo árbol de decisión binario
 */
typedef struct _BinaryTree {
char data[50];
struct _BinaryTree* left;
struct _BinaryTree* right;
} BinaryTree;

/*
 * Tarea 2
 * Implemente el árbol de decisión binario en C.
 */
BinaryTree* create_empty_tree();
BinaryTree* create_tree(BinaryTree* left, char* content, BinaryTree* right); //principal
BinaryTree* tree_names1();
BinaryTree* tree_names2();

BinaryTree* left_tree(BinaryTree* tree); 
BinaryTree* right_tree(BinaryTree* tree); 
char* get_content(BinaryTree* tree); 
int is_empty(BinaryTree* tree);


/*
 * Tarea 3
 * Implemente una función que dado un árbol de decisión binario imprima
 *  de forma apropiada el árbol.
 */
void print_tree(BinaryTree* tree);

/*
 * Tarea 4
 * Implemente un programa para leer, a partir de un fichero de texto,
 * la estructura de un árbol de decisión binario y retorne
 * el árbol instanciado apropiadamente.
 */
//Option A
BinaryTree* create_example1();
BinaryTree* create_example2();
//Option B
BinaryTree* create_tree_from_string(char* strTree);

#endif
