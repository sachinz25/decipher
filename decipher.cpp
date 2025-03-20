#include<bits/stdc++.h>
using namespace std;


class code{
    public:

    string encode(string text){
        string res;
        for(auto ch:text){
            res+=char(int(ch)+3);
        }
        return res;
    }

    string decode(string text){
        string res;
        for(auto ch:text){
            res+=char(int(ch)-3);
        }
        return res;
    }
    
};

int main() {
    code c1;
    string text;int n=1;
    cout<<"which operation do you want to perform??\n1.encode\n2.decode\n\nEnter your choice:";
    cin>>n;
    cin.ignore();
    cout<<"enter your text : ";
    getline(cin,text);
    if(n==1){
        cout<<"\nencoded : ";
        cout<<c1.encode(text);
    }else{
        cout<<"\ndecode:";
        cout<<c1.decode(text);
    }       
}


  