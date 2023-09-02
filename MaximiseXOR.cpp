Chef can rearrange both the strings in any way. Find the maximum bitwise XOR he can achieve if he rearranges the strings optimally.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines:
The first line of each test case contains binary string A.
The second line of each test case contains binary string B.

INPUT:
4
0011
1011
100
100
11111
11101
1
0

OUTPUT:
1110
110
10000
1

Explanation:
Test case 
1
1: Rearranging string A as 0011
0011 and string B as 1101
the XOR of the strings is 
0011
⊕
1101
=
1110
0011⊕1101=1110. It can be shown that this is the maximum XOR that can be achieved by rearranging the strings.

Test case 
2
2: Rearranging string A as 010
010 and string B as 100
the XOR of the strings is 
010
⊕
100
=
110
010⊕100=110. It can be shown that this is the maximum XOR that can be achieved by rearranging the strings.

Test case 
3
3: Rearranging string A as 11111
11111 and string B as 01111
the XOR of the strings is 
11111
⊕
01111
=
10000
11111⊕01111=10000. It can be shown that this is the maximum XOR that can be achieved by rearranging the strings.

Test case 
4
4: Rearranging string A as 1
1 and string B as 0
the XOR of the strings is 
1
⊕
0
=
1
1⊕0=1. It can be shown that this is the maximum XOR that can be achieved by rearranging the strings.

CODE:Maximise XOR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s1;
	    cin>>s1;
	    string s2;
	    cin>>s2;
	    int n=s1.size();
	   
	   int zero=0;
	   int one=0;
	   for(int i=0; i<n; i++){
	       if(s1[i]=='0'){
	           zero++;
	       }
	       else{
	           one++;
	       }
	       if(s2[i]=='0'){
	           zero++;
	       }
	       else{
	           one++;
	       }
	   }
	   
	   //cout<<zero<<" "<<one;
	   
	   int minimum=min(zero,one);
	   //cout<<minimum;
	   
	   int arr[n];
	   
	   for(int j=0; j<n; j++){
	      if(j<=minimum-1){
	          arr[j]=1;
	      }
	      else{
	          arr[j]=0;
	      }
	      cout<<arr[j];
	   }
	   cout<<endl;	    
	}
	return 0;
}


OR string method:

	   string ans="";
	   
	   for(int j=0; j<n; j++){
	      if(j<=minimum-1){
	          ans+='1';
	      }
	      else{
	          ans+='0';
	      }
	      cout<<ans[j];
	   }
	   

