#include "binary_trees.h"

/**
  * binary_tree_node - Create a new node of a Binary tree
  * @parent: node parent
  * @value: key to insert in the new node
  * Return: the address of the new node
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	return (new);
}
