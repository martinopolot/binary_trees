#include "binary_trees.h"
/**
 * binary_tree_delete - freeing the node recursively
 * when both left & right nodes are NULL
 * @tree: freeing memory
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
