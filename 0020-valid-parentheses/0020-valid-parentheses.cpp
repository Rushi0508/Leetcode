class Solution {
public:
    bool isValid(string s) {
	    stack<char> st;
	
	    for(int i=0;i<s.length();i++){
            if(!st.empty()){
	            if((st.top() == '(' && s[i] == ')')
                 || (st.top() == '{' && s[i] == '}')
                 || (st.top() == '[' && s[i] == ']')){
	                st.pop();
	            }else{
                    st.push(s[i]);
                }
            }
	        else{
	            st.push(s[i]);
            }
        }
	        if(st.empty()){
	            return 1;
	        }
	        return 0;
	    }
};