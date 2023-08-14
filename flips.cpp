string s;
	    cin>>s;
	    int count=0;
	    for(int j=0; j<s.length()-1; j++)
	    {
	        if(s[j]!=s[j+1])
	        {
	            count++;
	        }
	    }
	    if(count%2==0){
	        cout<<count/2<<endl;
	    }
	    else{
	        cout<<(count/2)+1<<endl;

input:
UUDDDUUU

output:
1

description:
 A single line containing the minimum number of flips needed to make all crayons point to the same direction (Either all up or all down).
U------>up
D------>down
