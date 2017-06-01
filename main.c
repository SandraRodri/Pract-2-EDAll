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
    
                       
    return (EXIT_SUCCESS);
}

BinaryTree* create_example1();{
    BinaryTree root, tree_left, tree_right, aux;
    tree_left = create_tree(NULL, 8, NULL);
    tree_right = create_tree(NULL, 9, NULL);
    root = create_tree(&tree_left, 3, &tree_right);
    tree_right = create_tree(NULL, 10, NULL);
    tree_left = root;
    root = create_tree(&tree_left, 2, &tree_right);
    aux = root;
    tree_left = create_tree(NULL, 11, NULL);
    tree_right = create_tree(NULL, 12, NULL);
    root = create_tree(&tree_left, 5, &tree_right);
    
    tree_left = create_tree(NULL, 13, NULL);
    tree_right = create_tree(NULL, 14, NULL);
    root = create_tree(&root, 4, &create_tree(&tree_left, 6, &tree_right);
    root = create_tree(&aux,1,&root);
    return tree;
}
                       
BinaryTree* create_example2(){
    BinaryTree root, tree_left, tree_right, aux, aux2;
    tree_left = create_tree(NULL, 10, NULL);
    tree_right = create_tree(NULL, 15, NULL);
    root = create_tree(&tree_left, 8, &tree_right);
    
    
    tree_left = create_tree(NULL, 9, NULL);
    root = create_tree(&tree_left, 4, &root);
    aux = root;
    
    tree_left = create_tree(NULL, 14, NULL);
    tree_right = create_tree(NULL, 12, NULL);
     root = create_tree(&tree_left, 6, &tree_right);
    tree_left = create_tree(NULL, 11, NULL);
    root = create_tree(&tree_left, 5, &root);
    
    tree_left = create_tree(NULL, 13, NULL);
    tree_right = create_tree(NULL, 14, NULL);
    aux2 =root;
    root = create_tree(&tree_left, 3, &tree_right);
    
    root= create_tree(&root,2,&aux2);
    
    root = create_tree(&aux,1,&root);
    return tree;
}

BinaryTree* create_empty_tree(){
    BinaryTree* tree = (BinaryTree*) malloc(sizeof (BinaryTree));
    tree.left=NULL;
    tree.right = NULL;
    tree.data = NULL;
    return tree;
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
    return tree.data;
}
                       
BinaryTree* create_tree(BinaryTree* left, char* content, BinaryTree* right){
    BinaryTree tree;
    tree = create_empty_tree();
    tree.left = left;
    tree.right = right;
    tree.data = content;
    return tree;
}
}                 
                       
                       //Consultar arbol
BinaryTree* left_tree(BinaryTree* tree){
        return tree.left; 
}
                       
BinaryTree* right_tree(BinaryTree* tree){
        return tree.right; 
}
