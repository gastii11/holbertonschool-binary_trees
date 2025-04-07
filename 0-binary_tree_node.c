#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Crea un nuevo nodo en un árbol binario.
 * @parent: Puntero al nodo padre del nodo a crear.
 * @value: Valor que se asignará al nuevo nodo.
 *
 * Return: Puntero al nuevo nodo, o NULL si ocurre un error.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
