#include <bits/stdc++.h>
#include <string>
using namespace std;



void reverseString(string str){
    reverse(str.begin(),str.end());
    str.insert(str.end(),' ');
    int j =0;
    for(int i=0; i < str.length();i++){
        if(str[i] == ' '){
            reverse(str.begin()+j,str.begin()+i);
            j = i+1;
        }
        
    }
    str.pop_back();
    
    cout<<str<<endl;
}

int main() {
	string str = "rohit sharma hello";
	reverseString(str);
	return 0;
}
