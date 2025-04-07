#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - borra un arbol binario completo
 * @tree: puntero al nodo raiz del arbol a borrar
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
