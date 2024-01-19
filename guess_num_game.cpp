//04 Guess_the_num_GAme.....
#include<iostream>
//#include<cstdlib>
#include<bits/stdc++.h>
#include<random>
#include<ctime>
using namespace std;
void isYour_guessCorrect(int n,int a,string &result,int *count){
    if(n==a){
        result="found";
        *count+=1;
        return;
    }
    else if(a>n)cout<<"\ntoo high";
    else if(a<n)cout<<"\ntoo low";
    *count+=1;
}
int main(){
cout<<"JAI SRI RAM"<<endl;
string name;
cout<<"to continue enter your name: ";
cin>>name;
random_device rd;
    mt19937 gen(rd() + static_cast<unsigned int>(chrono::high_resolution_clock::now().time_since_epoch().count()));
    uniform_int_distribution<int> dist(1, 100);
cout<< "Welcome!!,"<<name<<" to Guess_The_Num game."
"\n It is a number guessing game in these the computer stores a number "
"and you have to guess it in 5 attempts,there will be a hint given to you in every attempt "
"and an indicaator will be there which reminds you of your attempt left.\n"
"TrY YoUr LuCk!!! ---->\n" ;
int n,count=0,a,command=1;
string result="";
while(command==1){
    n=dist(gen),result="",count=0;
do{
    if(result=="found")break;
    else{
    cout<<"\nGuess the number: ";
    cin>>a;
    isYour_guessCorrect(n,a,result,&count);
    cout<<"\t Attempt left: "<<5-count;
    }
}while(count<=4);
if(count==5 && result!="found"){
    cout<<"\nthe correct guess was:"<<n<<"\nSorry!! better luck next time: ";
}
if(result=="found")cout<<"\n Congrats!! "<<name<<"\nYou Won!!.\n Your Score="<<(6-count)*10;
cout<<"\n Press 1 to retry and 0 to exit: ";
cin>>command;
}
cout<<"Thanks for playing hope you enjoyed...\n"
"-->Made By @RBashutosh<--";
return 0;
}