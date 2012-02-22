// macros for comparison
#define greater(a,b) (a > b ? true:false)
#define between(a,b,c) ((a > b)&&(a < c) ? true:false)
 
// recursive function to which we pass root node and 
// the limits of the root node, if only positive numbers
// then we can pass 0 and +INFINITY
 
bool isBST(node* Node, int left_limit,int right_limit)
{
     // the node's value must be greater than its
     // left child
     if(!greater(Node->value,Node->left->value))
        return false;
 
     // the node's value must be smaller than its
     // right child
     if(!greater(Node->right->value,Node-> value))
        return false;
 
     // the node's value must be lie between it's
     // left and right limit
     if(!between(Node->value,left_limit,right_limit))
        return false;
      
     // to the left child pass the node's left limit as
     // as left limit and node's value as right limit
     isBST(Node-> left,left_limit,Node->value);
 
 
     // to the right child pass the node's value as left limit 
     // and node's right limit as right limit
     isBST(Node-> right,Node->value,right_limit);
 
}