class Solution {
public:
vector<int> answerQueries(vector<int>& A, vector<int>& queries) {
    sort(A.begin(), A.end());
    for(int i=1; i<A.size(); ++i) 
        A[i] = A[i-1]+A[i];
    for(int& x : queries) 
        x = upper_bound(A.begin(), A.end(), x)-A.begin();
    return queries; 
}
};