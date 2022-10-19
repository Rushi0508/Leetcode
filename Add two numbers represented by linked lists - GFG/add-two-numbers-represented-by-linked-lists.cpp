//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev =NULL;
        Node* next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=next;
        }
        return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node* num1 = reverse(first);
        Node* num2 = reverse(second);
        int carry=0;int ans=0;
        Node* res = new Node(0);
        Node* temp = res;
        while(num1 && num2){
            ans = num1->data + num2->data + carry;
            temp->next = new Node(ans%10);
            carry = ans/10;
            temp=temp->next;
            num1=num1->next;
            num2=num2->next;
        }
        while(num1){
            ans = num1->data  + carry;
            temp->next = new Node(ans%10);
            carry = ans/10;
            num1 = num1->next;
            temp=temp->next;
        }
        while(num2){
            ans = num2->data  + carry;
            temp->next = new Node(ans%10);
            carry = ans/10;
            num2 = num2->next;
            temp=temp->next;
        }
        while(carry!=0){
            ans = carry;
            temp->next = new Node(ans%10);
            carry = ans/10;
            temp=temp->next;
        }
        return reverse(res->next);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends