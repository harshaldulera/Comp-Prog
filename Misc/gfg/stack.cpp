// find middle element and delete from stack.
/*
INPUT : ARR [ ] = [ 1 , 2 , 3 , 4 , 5 ] , N = 4
OUTPUT: ARR [ ] = [ 1 , 2 , 4,  5 ]
*/
#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

void solve(stack<int>&inputStack, int count, int size){
    if(count == size/2) {
        inputStack.pop();
        return ;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack, count + 1, size);
    inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
    int count = 0;
    solve(inputStack, count, N);
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}