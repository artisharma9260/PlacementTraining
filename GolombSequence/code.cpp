// Golomb Sequence, defined recursively as:

// g(1) = 1

// g(n) = 1 + g(n - g(g(n-1)))

// This sequence is self-describing: the number k appears exactly g(k) times.

// Let's compute the first few terms.

// Given
// g(1) = 1
// Compute g(2)
// g(2)
// = 1 + g(2 - g(g(1)))

// g(1) = 1
// ⇒ g(g(1)) = g(1) = 1

// = 1 + g(2 - 1)
// = 1 + g(1)
// = 1 + 1
// = 2
// Compute g(3)
// g(3)
// = 1 + g(3 - g(g(2)))

// g(2) = 2
// ⇒ g(g(2)) = g(2) = 2

// = 1 + g(3 - 2)
// = 1 + g(1)
// = 2
// Compute g(4)
// g(4)
// = 1 + g(4 - g(g(3)))

// g(3) = 2
// ⇒ g(g(3)) = g(2) = 2

// = 1 + g(4 - 2)
// = 1 + g(2)
// = 3
// First Terms
// n     : 1 2 3 4 5 6 7 8 9 10
// g(n)  : 1 2 2 3 3 4 4 4 5 5
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int golomb(int n){
        if(n == 1) return 1;
        return 1 + golomb(n - golomb(golomb(n-1)));
    }
    vector<int> sequence(int n){
        vector<int>arr(n+1);
        arr[1] = 1;
        for(int i = 2; i <= n; i++){
            arr[i] = golomb(i);
        }
        return arr;
    }
};