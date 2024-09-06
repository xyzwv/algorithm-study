#include <iostream>
#include <algorithm>
using namespace std;

void findDwarf(int* data){
    int sum = 0;
    for(int i=0; i<9; i++) sum += data[i];
    
    for(int i=0; i<8; i++){
        sum -= data[i];
        for(int j=i+1; j<9; j++){
            sum -= data[j];
            if(sum == 100){
                data[i] = 0;
                data[j] = 0;
                return;
            }
            sum += data[j];
        }
        sum += data[i];
    }
}

int main()
{
    const int size = 9;
    int data[size];
    int sum = 0;
    for(int i=0; i<size; i++){
        int height;
        cin >> height;
        data[i] = height;
    }
    
    findDwarf(data);
    
    sort(data, data + size);
    
    for(int i=0; i<size; i++){
        if(data[i]) cout << data[i] << "\n";
    }

    return 0;
}