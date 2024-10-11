#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 8;
int n, m;
vector<int> sequence(MAX_N);
vector<bool> is_used(MAX_N);

void printSequence(){
    for(int i=0; i<m; i++){
        cout << sequence[i] << " ";
    }
    cout << "\n";
    return;
}

void solution(int count){
    if(count == m){
        printSequence();
        return;
    }
    
    for(int i=1; i<=n; i++){
        if(is_used[i]) continue;
        
        sequence[count] = i;
        is_used[i] = true;
        solution(count + 1);
        is_used[i] = false;
    }
}

int main()
{
    cin >> n >> m;
    solution(0);

    return 0;
}