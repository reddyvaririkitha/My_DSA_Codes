// Ayush loves the characters ‘a’, ‘s’, and ‘p’. He got a string of lowercase letters and he wants to find out how many times characters ‘a’, ‘s’, and ‘p’ occurs in the string respectively. Help him find it out.
// Input:
// First line contains an integer denoting length of the string.
// Next line contains the string.
// Constraints:
// 1<=n<=10^5
// ‘a’<= each character of string <= ‘z’
// Output:
// Three space separated integers denoting the occurrence of letters ‘a’, ‘s’ and ‘p’ respectively.
// Sample Input:
// 6
// aabsas
// Sample output:
// 3 2 0

#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    string str;
    cin>>str;
    map<char , int> num_of_char;
    num_of_char.insert (pair<char, int>('a', 0));
    num_of_char.insert (pair<char, int>('p', 0));
    num_of_char.insert (pair<char, int>('s', 0));
    for(int i=0; i<n; i++){
        if((str[i] == 'a')||(str[i]=='p')||(str[i]=='s')){
            num_of_char[str[i]]++;
        }
    }
    cout<<num_of_char['a']<<' '<<num_of_char['s']<<' '<<num_of_char['p']<<endl;
    //cout<<str;
	return 0;
}
    /*int n,i,a=0,s=0,p=0;
    char c[100000];
    cin>>n;
    cout<<n;
    cin>>c;
    for(i=0;c[i]!='\0';i++){
      	//cout<<a<<" "<<s<<" "<<p<<endl;  
        if(c[i]=='a')
            a++;
        if(c[i]=='s')
            s++;
        if(c[i]=='p')
            p++;
      	//cout<<a<<" "<<s<<" "<<p<<endl;  
    }
    //cout<<"final ";
    cout<<a<<" "<<s<<" "<<p<<endl;*/
