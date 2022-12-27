//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

class cmp{
    public:
    bool operator()(Node*a,Node*b){
        return a->data > b->data;
    }
};

class Solution
{
	public:
	    void traverse(vector<string> &ans, string temp, Node* root){
	        if(root->left==NULL && root->right==NULL){
	            ans.push_back(temp);
	            return ;
	        }
	        traverse(ans,temp+'0',root->left);
	        traverse(ans,temp+'1', root->right);
	    }
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    priority_queue<Node*, vector<Node*>, cmp> pq;
		    for(int i=0;i<N;i++){
		        Node* node = new Node(f[i]);
		        pq.push(node);
		    }
		    
		    while(pq.size()>1){
		        Node* first = pq.top();
		        pq.pop();
		        
		        Node* second = pq.top();
		        pq.pop();
		        
		        int val = first->data+second->data;
		        Node* newNode = new Node(val);
		        newNode->left = first;
		        newNode->right = second;
		        pq.push(newNode);
		    }
		    Node* root = pq.top();
		    vector<string> ans;
		    string temp = "";
		    traverse(ans,temp,root);
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}
// } Driver Code Ends