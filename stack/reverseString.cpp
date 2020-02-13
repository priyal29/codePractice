/*
 * Given a string S, reverse the string using stack.

Example :

Input : "abc"
Return "cba"
*/

string Solution::reverseString(string A) {
    stack<char> st;
    for(int i=0; i<A.length(); i++){
        st.push(A[i]);
    }

    int i =0;
    while(!st.empty()){
        A[i] = st.top();
        st.pop();
        i++;
    }
    return A;
}

