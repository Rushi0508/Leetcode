//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}

// } Driver Code Ends
/*Linked list Node structure

struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node* merge(Node* a, Node *b){
        if(a==NULL) return b;
        if(b==NULL) return a;
        Node* temp = new Node(0);
        Node* res = temp;
        while(a!=NULL && b!=NULL){
            if(a->data < b->data){
                temp->next = a;
                temp = temp->next;
                a = a->next;
            }else{
                temp->next = b;
                temp = temp->next;
                b = b->next;
            }
        }
        if(a) temp->next = a; 
        else temp->next= b; 
    
    return res ->next; 
    }
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
        int last = K-1,i,j;
        while(last!=0){
             i=0,j=last;
             while(i<j){
                arr[i] = merge(arr[i], arr[j]);
                i++;j--;
                if(i>=j){
                  last = j;
                }
            }
        }
        return arr[0];
    }
};



//{ Driver Code Starts.
// Driver program to test above functions
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}

// } Driver Code Ends