#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - funcion para preordenar
 * @tree: es un puntero al nodo de la raiz del arbol binario que queremos recorrer
 * @func: es un puntero a una función que se ejecutará en cada nodo dearbol
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
