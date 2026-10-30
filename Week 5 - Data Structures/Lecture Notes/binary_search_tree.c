// This code illustrates how binary search tree is implemented
// The program return true/false if a number is present in the list

bool search(node *tree, int number)
{
    //sanity check
    if (tree == NULL)
    {
        return 1;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
     else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else
    {
        return true;
    }
}

/*
Binary search tree is essentially a data structure
which starts from a root(parent) that has 2 branches (children)
the left branch is less than the parent while 
the right branch is greater than the parent.
The branches have their own left/right brances called leaves(children)
where the same pattern repeats. leaves are the bottom of the tree
This allows recursion to happen in binary search tree
where a function can be called on itself.
*/