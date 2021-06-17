/*Create a C++ program that uses Generic program/STL that read a sentence(may have any number of words) from the user and  convert the sentence to encrypted format: 
*Note: you are allow to use any pre-defined alogorithms/STL along with ASCII() and CHAR() functions.
Consider the Eg sentence: Dont give up
Find the ASCII value for each character of each word and calculate the sum.
Dont:
***
ASCII(D)=68
ASCII(o)=111
ASCII(n)=110
ASCII(t)=116
sum=68+111+110+116=405. 
Form the different sets(consider only two numbers) obtained from the value 405 are (40, 04), (45,54), (05,50), Then find the biggest value from each set and form the new set ie.(40, 54, 50).  Then obtain ASCII value for each number which has given below, if you get any value ranges from 1 to 32 then replace with $ and repeat the same process for the all the words in the sentence.
char(40)=( 
char(54)=6 
char(50)=2
give:
**
ASCII(g)=103
ASCII(i)=105
ASCII(v)=118
ASCII(e)=101
sum=103+105+118+101=427, The set are(42,24), (47,74),(27,72),The biggest value in each set are (42,74,72)
char(42)=*
char(74)=J
char(72)=H
up:
**
ASCII(u)=117
ASCII(p)=112
sum=117+112=229, The set are (22,22), (29,92), (29,92),The biggest value in each set are(22,92,92)
char(22)=$(Replaced with $)
char(92)=\
char(92)=\
The final output is given below:
(62  *JH  $\\
*/


#include<iostream>
#include<string>
#include <vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string word = "";
    vector <int> ans;
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            int a = 0;
            for(int j=0;j<word.length();j++){
                a+= word[j];
            }
            string s2 = to_string(a);
            for(int x=0;x<s2.length();x++){
                for(int y=x+1;y<s2.length();y++){
                    int a1,b1;
                    a1 = max(s2[x] - '0',s2[y] - '0');
                    b1 = min(s2[x] - '0',s2[y] - '0');
                    char x1 = a1*10 + b1;
                    cout<<x1;
                }
            }
            cout<<"  ";
            word = "";
        }
        else{
            word += s[i];
        }
    }
    int a = 0;
            for(int j=0;j<word.length();j++){
                a+= word[j];
            }
            string s2 = to_string(a);
            for(int x=0;x<s2.length();x++){
                for(int y=x+1;y<s2.length();y++){
                    int a1,b1;
                    a1 = max(s2[x] - '0',s2[y] - '0');
                    b1 = min(s2[x] - '0',s2[y] - '0');
                    char x1 = a1*10 + b1;
                    if(x1>=1 && x1<=32){
                        cout<<"$";
                    }
                    else{
                        cout<<x1;
                    }
                }
            }
}
