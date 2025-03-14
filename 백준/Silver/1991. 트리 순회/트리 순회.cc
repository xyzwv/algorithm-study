#include <iostream>
#include <map>
using namespace std;

map<char, pair<char, char>> tree;

void preorder(char root) {
    if(root == '.') return;
    cout << root;
    preorder(tree[root].first);
    preorder(tree[root].second);
}

void inorder(char root) {
    if(root == '.') return;
    inorder(tree[root].first);
    cout << root;
    inorder(tree[root].second);
}

void postorder(char root) {
    if(root == '.') return;
    postorder(tree[root].first);
    postorder(tree[root].second);
    cout << root;
}

int main()
{
    int n;
    char parent, left, right;
    
    cin >> n;
    while(n--) {
        cin >> parent >> left >> right;
        tree[parent] = {left, right};
    }
    
    preorder('A');
    cout << "\n";
    inorder('A');
    cout << "\n";
    postorder('A');
    
    return 0;
}