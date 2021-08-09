// In Little Flowers Public School, there are many students with same first names. You are given a task to find the students with same names. You will be given a string comprising of all the names of students and you have to tell the name and count of those students having same. If all the names are unique, print -1 instead.
// Note: We don't have to mention names whose frequency is 1.
// Input Format:
// The only line of input will have a string ‘str’ with space separated first names of students.
// Output Format:
// Print the names of students along with their count if they are repeating. If no name is repeating, print -1
// Constraints:
// 1 <= |str| <= 10^5
// Time Limit: 1 second
// Sample Input 1:
// Abhishek harshit Ayush harshit Ayush Iti Deepak Ayush Iti
// Sample Output 1:
// harshit 2
// Ayush 3
// Iti 2
// Sample Input 2:
// Abhishek Harshit Ayush Iti
// Sample Output:
// -1

#include <bits/stdc++.h>

using namespace std;

int main() {
    // Write your code here
    string all_names;
    int i;
    getline(cin, all_names);  //take input so that it also considers spaces in betwe
    map < string, int> name_list;
    int start=0, end=0,single_count=0;
    
    for(i =0; i<all_names.length(); i++){
        if(all_names.substr(i,1)==" "){
            end = i-1;
            name_list[all_names.substr(start, end-start+1)]++;	
            //printf("start = %d,end = %d, all_names.substr(%d,%d)=%s \n",start, end, start+1)
            start = i+1;
        }
    }
    name_list[all_names.substr(start,all_names.length()-start+1)]++;
    //cout<<"string length = "<<all_names.length()<<"and start="<<start<<endl;
    map <string, int>:: iterator it;
    for(it = name_list.begin(); it!= name_list.end(); it++){
        if(it->second == 1){
            single_count ++;
        }
        else{
        	cout<<it->first<<" "<<it->second<<endl;
       }
    }
    
    if(single_count == name_list.size())
        printf("-1");
    
    return 0;
} 
