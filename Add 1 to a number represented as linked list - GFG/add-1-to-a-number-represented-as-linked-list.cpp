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
        cout << node->data; 
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

class Solution
{
    public:
    Node* reverse(Node* head){
        Node* prev=NULL;
        Node* curr=head;
        Node* next = head;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        if(head->next==NULL && head->data!=9){
            head->data += 1;
            return head;
        }
        if(head->next==NULL && head->data==9){
            head->data = 10;
            return head;
        }
        Node* reversed_head = reverse(head);
        Node* temp = reversed_head;
        
        while(1){
            
            if(temp->data!=9){
                temp->data = temp->data + 1;
                return reverse(reversed_head);
            }
            
            else{
                temp->data = 0;
                if(temp->next->data==9){
                    temp = temp->next;
                    if(temp->next==NULL && temp->data==9){
                        temp->data = 10;
                        return reverse(reversed_head);
                    }
                }else{
                    temp->next->data +=1;
                    return reverse(reversed_head);
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends