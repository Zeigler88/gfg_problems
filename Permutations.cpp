#include<bits/stdc++.h>
using namespace std;

/* 
The basic idea is to swap the first character with the remaining characters in the string.
Then fix the first charcater and find the permutations of the remaining characters using recursion.
The base case of the recursion will be when the string is left with only one unprocessed element.
*/

void permut(string str, int start, int end){
    //start is 0 and end is the length of the string

    //base case
    if(start == end-1){
        cout<<str<<endl;
        return;
    }

    for(int i=start; i<end; i++){
        //do
        // swap character at index `start` with the current character
        swap(str[start], str[i]);

        //recur
        // recur for substring `str[start+1, end-1]`
        permut(str, start+1, end);

        //undo
        // backtrack (restore the string to its original state)
        swap(str[start], str[i]);
    }

} 

int main(){
    string s;
    cin>>s;
    permut(s, 0, s.length());
    return 0;
}
