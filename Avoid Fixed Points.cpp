Chef has a sequence of N integers A=[A1,A2,…,AN]. He can perform the following operation any number of times (possibly, zero):

Choose any positive integer K and insert it at any position of the sequence (possibly the beginning or end of the sequence, or in between any two elements).
For example, if A=[5,3,4] and Chef selects K=2, then after the operation he can obtain one of the sequences [2–,5,3,4],[5,2–,3,4],[5,3,2–,4], or [5,3,4,2–].

Chef wants this sequence to satisfy the following condition: for each 1≤i≤∣A∣, Ai≠i. Here, ∣A∣ denotes the length of A.
  
  Constraints
1≤T≤104
1≤N≤105
1≤Ai≤109
Sum of N over all test caes does not exceed 2⋅105.
Subtasks
Subtask #1 (100 points): Original constraints
//adding this line as desire
Sample Input 1 
3
3
2 4 5
3
4 1 3
4
3 2 4 2
Sample Output 1 
0
1
2
  code*****
  #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	   int arr[n];
	   for(int i=0;i<n;i++){
	       cin>>arr[i];
	   }
	   
	   int c=0;
	    for(int i=0;i<n;i++){
	        int b=1+i+c;
	         if(b==arr[i]){
	             c++;
	         }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
