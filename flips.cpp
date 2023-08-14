Thinking:
ek ek kr k check krenge jo character unequal ho usko count kr lenge.
phir agar count even hai to (count/2) flips se string ek direction me ho jayegi nhi to 
if odd count aata hai to count/2+1 flips needed hongi.

	
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
