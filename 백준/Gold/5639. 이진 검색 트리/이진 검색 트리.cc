#include <iostream>
#include <vector>
using namespace std;

vector<int> tree;

void postOrder(int left, int right) {
    if(left > right) return;
    
    int root = tree[left];
    
    int greater = left+1;
    for(int i=left+1; i<=right; i++) {
        if(tree[i] > root) {
            greater = i;
            break;
        }
    }
    
    postOrder(left+1, greater-1);
    postOrder(greater, right);
    cout << root << "\n";
    
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int value;
    while(cin >> value) {
        tree.push_back(value);
    }
    
    postOrder(0, tree.size()-1);
    
    return 0;
}