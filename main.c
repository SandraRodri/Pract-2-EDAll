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
    
    
    
    
    BinaryTree tree;
    tree = create_empty_tree();
    
    return (EXIT_SUCCESS);
}



BinaryTree* create_empty_tree(){
    BinaryTree tree;
    tree.left=NULL;
    tree.right = NULL;
    tree.data = NULL;
    return tree;
}

int is_empty(BinaryTree* tree){
    if(tree == create_empty_tree()){
        return 1;
    }
    else{
        return 0;
    }  
}

BinaryTree* create_tree(BinaryTree* left, char* content, BinaryTree* right){
    BinaryTree tree;
    
    tree.left = left;
    tree.right = right;
    tree.data = content;
    return tree;
}

BinaryTree* left_tree(BinaryTree* tree){


    
       //BinaryTree.left= NULL; //Es una hoja, profundidad 4
       


}