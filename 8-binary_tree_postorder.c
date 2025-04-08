#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - recorre un arbol binario en post-orden
 * @tree: puntero al nodo raiz del arbol
 * @func: puntero a una funcion a llamar para cada nodo
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
