#include "BINARYTREE_H.h"

BinaryTree* create_example1(){
    BinaryTree *root, *tree_left, *tree_right, *aux;
    
    tree_left = create_tree(NULL, TREE1.8, NULL);
    tree_right = create_tree(NULL, TREE1.9, NULL);
    root = create_tree(tree_left, TREE1.3, tree_right);
    tree_right = create_tree(NULL, TREE1.10, NULL);
    root = create_tree(root, TREE1.2, tree_right);
    aux = root;
    
    tree_left = create_tree(NULL, TREE1.11, NULL);
    tree_right = create_tree(NULL, TREE1.12, NULL);
    root = create_tree(tree_left, TREE1.5, tree_right);
    
    tree_left = create_tree(NULL, TREE1.13, NULL);
    tree_right = create_tree(NULL, TREE1.14, NULL);
    tree_right = create_tree(tree_left, TREE1.6, tree_right);
    
    root = create_tree(root, TREE1.4, tree_right);
    root = create_tree(aux, TREE1.1,root);
    
    return root;
}
                       
BinaryTree* create_example2(){
    BinaryTree *root, *tree_left, *tree_right, *aux;
    
    tree_left = create_tree(NULL, TREE2.10, NULL);
    tree_right = create_tree(NULL, TREE2.15, NULL);
    root = create_tree(tree_left, TREE2.8, tree_right);
    
    
    tree_left = create_tree(NULL, TREE2.9, NULL);
    root = create_tree(tree_left, TREE2.4, root);
    aux = root;
    
    
    tree_left = create_tree(NULL, TREE2.14, NULL);
    tree_right = create_tree(NULL, TREE2.12, NULL);
    tree_right = create_tree(tree_left, TREE2.4, tree_right);
  
    tree_left = create_tree(NULL, TREE2.11, NULL);
    root = create_tree(tree_left, TREE2.5, tree_right);
    
    
    
    tree_left = create_tree(NULL, TREE2.13, NULL);
    tree_right = create_tree(NULL, TREE2.14, NULL);
    tree_left = create_tree(tree_left, TREE2.3, tree_right);
    
    root = create_tree(tree_left, TREE2.2, root);
    
    root = create_tree(aux, TREE2.1, root);
    return root;
}

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
    strcpy(tree->data, content);
    
    return tree;
}

int is_empty(BinaryTree* tree){
    if(tree == NULL){
        printf("No tenemos arbol\n");
        return 1;
    }
    else{
        printf("Tenemos arbol\n");
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
