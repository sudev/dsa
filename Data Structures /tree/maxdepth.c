// A program to find the maximum depth in a graph 

int maxdepth(struct node * cur ){

    if(cur == NULL )
    {
        return 0;
    }

    int l = maxdepth(cur->left);
    int r = maxdepth(cur->right);
    if( l > r)
    {
        return (l + 1);
    }
    else 
    {
        return (r + 1);
    }
}


