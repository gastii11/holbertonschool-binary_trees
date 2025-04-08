#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - Verifica si un nodo es la raíz de un árbol binario
 * @node: Puntero al nodo a comprobar
 *
 * Return: 1 si el nodo es raíz, 0 en caso contrario o si el nodo es NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return (node->parent == NULL);
}
