#include <bits/stdc++.h>
#include <vector>
#include <iostream>

int vectorProblems(vector<int> A, int Val) {
    int answer, closest = INT_MAX;
    if(A[0] > Val) {
        answer = -1;
    } else {
        for(int x : A) {
            if(x == Val) {
                answer = x;
            } else {
                closest = min(abs(x-Val),closest);
                if(Val - closest == x) {
                    answer = x;
                } else {
                    continue;
                }
            }
        }

    }
    return answer;
}

int main() {
    vector<int> vect = {1,2,3,5,6};
    cout << vectorProblems(vect, 4);
}
