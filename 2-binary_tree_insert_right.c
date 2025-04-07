#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserta un nodo como hijo derecho de otro nodo
 * @parent: puntero al nodo padre donde se insertara el hijo derecho
 * @value: valor a almacenar en el nuevo nodo
 *
 * Return: puntero al nodo creado, o NULL en caso de fallo o si parent es NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	new_node->parent = parent;
	parent->right = new_node;

	return (new_node);
}
