//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // Starting node of list having even values.
    Node* evenStart = NULL;
    // Ending node of even values list.
    Node* evenEnd = NULL;
    // Starting node of odd values list.
    Node* oddStart = NULL;
    // Ending node of odd values list.
    Node* oddEnd = NULL;
    // Node to traverse the list.
    Node* currNode = head;
    int e,o=0;
 
    while (currNode != NULL) {
        int val = currNode->data;
 
        // If current value is even, add it to even values
        // list.
        if (val % 2 == 0) {
            if (evenStart == NULL) {
                evenStart = currNode;
                evenEnd = evenStart;
            }
            else {
                evenEnd->next = currNode;
                evenEnd = evenEnd->next;
            }
            e++;
        }
 
        // If current value is odd, add it to odd values
        // list.
        else {
            if (oddStart == NULL) {
                oddStart = currNode;
                oddEnd = oddStart;
            }
            else {
                oddEnd->next = currNode;
                oddEnd = oddEnd->next;
            }
            o++;
        }
 
        // Move head pointer one step in forward direction
        currNode = currNode->next;
    }
    
 
    // If either odd list or even list is empty, no change
    // is required as all elements are either even or odd.
    if (oddStart == NULL || evenStart == NULL)
        return head;
 
    // Add odd list after even list.
    evenEnd->next = oddStart;
    oddEnd->next = NULL;
 
    // Modify head pointer to starting of even list.
    head = evenStart;
    return head;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends