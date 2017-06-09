#include "BinaryTree_template.h"
#include "constantes.h"


BinaryTree* create_empty_tree(){
    
    BinaryTree *tree = (BinaryTree*) malloc(sizeof (BinaryTree));
    
    tree->left=NULL;
    tree->right = NULL;
    
    return tree;
}

BinaryTree* create_tree(BinaryTree* left, char* content, BinaryTree* right){
    BinaryTree *tree;
    tree = create_empty_tree();
    tree->left = left;
    tree->right = right;
    tree->data = content;
    
    return tree;
}

BinaryTree* create_example1(){
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
    root = create_tree(aux, TREE1_1,root);
    
    return root;
}
                       
BinaryTree* create_example2(){
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

int is_empty(BinaryTree* tree){
    if(tree == NULL){
        return 1;
    }
    else{
        return 0;
    }  
}
                       
char* get_content(BinaryTree* tree){
    return tree->data;
}                             

BinaryTree* left_tree(BinaryTree* tree){
        return tree->left; 
}
                       
BinaryTree* right_tree(BinaryTree* tree){
        return tree->right; 
}

void print_content(BinaryTree* tree, int profundidad){
    tabular(profundidad);
    if(tree->left == NULL && tree->right == NULL){
        printf("La respuesta es %s\n", tree->data);
        return;
    }
    else{
        profundidad++;
        printf("Si la respuesta a la pregunta %s: SI\n", tree->data);
        print_content(left_tree(tree), profundidad);
        profundidad--;
        tabular(profundidad);
        profundidad++;
        printf("Si la respuesta a la pregunta %s: NO\n", tree->data);
        print_content(right_tree(tree), profundidad);
    }  
}

void tabular(int profundidad){
    int i;
    for(i=0; i<profundidad; i++){
        printf("\t");
    } 
}
void print_tree(BinaryTree* tree){
    if(tree == NULL){
        printf("No tenemos arbol que mostrar");
        
    }
    else{
        print_content(tree, 0);
    }
}

void print_manual_tree(BinaryTree* tree) {
    char opcion[50];
    if (is_empty(tree) == 0) {
        while (tree->left != NULL && tree->right != NULL){
            printf("%s\n", tree->data);
            printf("Si / No\n");
            scanf("%s", opcion);
            if(opcion == 'Si'){
                tree = left_tree(tree);
            }
            else{
                tree = right_tree(tree);  
            }  
        }
        printf("%s\n", tree->data);
    } 
    else {
        printf("El arbol esta vacio\n");
    }
}
