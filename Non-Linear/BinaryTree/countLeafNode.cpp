// this problem is solved easily with the help of recursion in (inorder traversal)
// time complexity = O(n) and space complexity = O(n)

***********************************************************/
void inOrder(BinaryTreeNode<int> * root, int & count){
    if(root == NULL) return;
    inOrder(root->left , count);
    if(root->left == NULL & root->right==NULL) count ++;
    inOrder(root->right , count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int count = 0;
    inOrder(root , count );
    return count;
}
