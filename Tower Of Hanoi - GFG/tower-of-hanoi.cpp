//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function
   long long toh(int N, int from, int to, int aux) {
    long long moves = 0;
    if (N >= 1) {
        moves += toh(N - 1, from, aux, to);
        printf( "move disk %d from rod %d to rod %d\n" , N, from, to);
        
        moves++;
        moves += toh(N - 1, aux, to, from);
    }
    return moves;
}

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.
// } Driver Code Ends