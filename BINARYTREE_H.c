#include "BinaryTree_template.h"

//Reservamos espacio en la memoria para poder crear un arbol (de un solo nodo)

BinaryTree* create_empty_tree() {

    BinaryTree *tree = (BinaryTree*) malloc(sizeof (BinaryTree));

    tree->left = NULL;
    tree->right = NULL;

    return tree;
}

//Des de aquí llamamos a la función create_empty_tree.Una vez tenemos el nodo procedemos a introducir datos (apuntamos a izquierda o derecha, contenido) al nodo.

BinaryTree* create_tree(BinaryTree* left, char* content, BinaryTree* right) {
    BinaryTree *tree;
    tree = create_empty_tree();
    tree->left = left;
    tree->right = right;
    tree->data = content;

    return tree;
}

//Implementación del primer arbol(comida).Fijamos el arbol.

BinaryTree* create_example1() {
    BinaryTree *root, *tree_left, *tree_right, *aux;
    char* test;


    tree_left = create_tree(NULL, TREE1_8, NULL);
    tree_right = create_tree(NULL, TREE1_9, NULL);
    root = create_tree(tree_left, TREE1_3, tree_right);
    tree_right = create_tree(NULL, TREE1_10, NULL);
    root = create_tree(root, TREE1_2, tree_right);
    aux = root;
    tree_left = create_tree(NULL, TREE1_11, NULL);
    tree_right = create_tree(NULL, TREE1_12, NULL);
    root = create_tree(tree_left, TREE1_5, tree_right);

    tree_left = create_tree(NULL, TREE1_13, NULL);
    tree_right = create_tree(NULL, TREE1_14, NULL);
    tree_right = create_tree(tree_left, TREE1_6, tree_right);

    root = create_tree(root, TREE1_4, tree_right);
    root = create_tree(aux, TREE1_1, root);

    return root;
}
//Implementación del segundo arbol(comida).Fijamos el arbol.                       

BinaryTree* create_example2() {
    BinaryTree *root, *tree_left, *tree_right, *aux;

    tree_left = create_tree(NULL, TREE2_10, NULL);
    tree_right = create_tree(NULL, TREE2_15, NULL);
    root = create_tree(tree_left, TREE2_8, tree_right);


    tree_left = create_tree(NULL, TREE2_9, NULL);
    root = create_tree(tree_left, TREE2_4, root);
    aux = root;


    tree_left = create_tree(NULL, TREE2_14, NULL);
    tree_right = create_tree(NULL, TREE2_12, NULL);
    tree_right = create_tree(tree_left, TREE2_4, tree_right);

    tree_left = create_tree(NULL, TREE2_11, NULL);
    root = create_tree(tree_left, TREE2_5, tree_right);



    tree_left = create_tree(NULL, TREE2_13, NULL);
    tree_right = create_tree(NULL, TREE2_14, NULL);
    tree_left = create_tree(tree_left, TREE2_3, tree_right);

    root = create_tree(tree_left, TREE2_2, root);

    root = create_tree(aux, TREE2_1, root);
    return root;
}

//Comprueba si el arbol(nodo)esta vacío devolviendo un booleano.Si estaba vacío devuelve TRUE(1) o FALSE(0), si está lleno.

int is_empty(BinaryTree* tree) {
    if (tree == NULL) {
        return TRUE;
    } else {
        return FALSE;
    }
}

char* get_content(BinaryTree* tree) {
    return tree->data;
}

//Devolvemos la parte izquierda del arbol

BinaryTree* left_tree(BinaryTree* tree) {
    return tree->left;
}

//DEvolvemos la parte derecha del arbol

BinaryTree* right_tree(BinaryTree* tree) {
    return tree->right;
}

//Tabulación para poder visualizar mejor las profunfidades del arbol

void tabular(int profundidad) {
    int i;
    for (i = 0; i < profundidad; i++) {
        printf("\t");
    }
}

//Muestra por pantalla el contenido del arbol con sus respectivas preguntas y respuestas sugeridas, de manera recursiva. 
//El caso base será el final del árbol donde hay hojas(las respuestas sugeridas), es decir, es el ultimo elemento. 



void print_content(BinaryTree* tree, int profundidad) {
    tabular(profundidad);
    if (tree->left == NULL && tree->right == NULL) {
        printf(" %s\n", tree->data);
        return;
    } else {
        profundidad++;
        printf("Respuesta a la pregunta %s = SI\n", tree->data);
        print_content(left_tree(tree), profundidad);
        profundidad--;
        tabular(profundidad);
        profundidad++;
        printf("Respuesta a la pregunta %s = NO\n", tree->data);
        print_content(right_tree(tree), profundidad);
    }
}

// Mostramos por pantalla el arbol con todo su contenido en el caso de que esté lleno; si no es así advetimos al usuario que no existe el arbol.
//Conseguimos que se muestre, accediendo a la función print_content(tree,0).
void print_tree(BinaryTree* tree) {
    if (is_empty(tree) == TRUE) {
        printf("No tenemos arbol que mostrar");
    } else {
        print_content(tree, 0);
    }
}

//En caso de que el árbol esté lleno, el usuario elige como recorrer el arbol a ambos lados .según las respuesta que ha introducido el usuario (Si o No)
void print_manual_tree(BinaryTree* tree){
    char opcion[MAXLENGTH];
    if (is_empty(tree) == FALSE) {
        while (tree->left != NULL && tree->right != NULL) {
            printf("%s\n", tree->data);
            while(1){
                printf("Si o No\n");
                scanf("%s", opcion);
              if(strcmp(opcion, "Si") == 0 || strcmp(opcion, "si") == 0 || strcmp(opcion, "No") == 0 || strcmp(opcion, "no") == 0){
                  break;
              }
              else{
                  printf("Opcion incorrecta, vuelva a intentarlo\n");
              }
            }
            if (strcmp(opcion, "Si") == 0 || strcmp(opcion, "si")) {
                tree = left_tree(tree);
            } else {
                tree = right_tree(tree);
            }
        }
        printf("%s\n", tree->data);
    }
    else {
        printf("El arbol esta vacío\n");
    }
}
