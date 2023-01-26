 

#include <iostream>
#include <map>
using namespace std;
string getDomain(string email){
    int i = 0;
    while(i<email.length()){
      if(email[i] == '@'){
            break;
        }
        i++;
    }
    return email.substr(i+1);
}



int solution(string emails[], int n) {
    map<string, string> m1;
    
    for(int i=0; i<n; i++){
        string email = emails[i];
        string domain = getDomain(email);
        if(m1.find(domain) == m1.end()){
            m1.insert({domain, email});
        }
        else{
            string oldemail = m1[domain];
            if(oldemail > email){
                m1[domain] = email;
            }
        }
    }
    
    for(auto x:m1){
        cout<<x.second<<endl;
    }
    
}

int main(){
    string emails[]={"ghi@hotmail.com", "def@yahoo.com", "ghi@gmail.com",
    "abc@channelier.com", "abc@hotmail.com", "def@hotmail.com", "abc@gmail.com", "abc@yahoo.com", 
    "def@channelier.com","jkl@hotmail.com", "ghi@yahoo.com", "def@gmail.com" } ;
    int n =sizeof(emails)/sizeof(emails[0]);
    solution(emails, n);
   
};
