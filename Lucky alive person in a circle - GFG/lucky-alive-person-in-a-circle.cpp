//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Solution{
public:
    int find(int N){
        // code here
        
        // Circular List Creation
        Node* head = new Node(1);
        Node* temp= head;
        for(int i=3;i<=N; i+=2){
            Node* n = new Node(i);
            temp->next = n;
            temp = temp->next;
        }
        if(N%2==0){
            temp->next = new Node(-1);
            temp->next->next = head;
        }else{
            temp->next = head;
        }
        
        Node* prev = temp;
        Node* curr = prev->next->next;
        int i=0;
        while(curr!=prev){
            prev->next = curr;
            prev = curr;
            curr = prev->next->next;
        }
        return prev->data;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends