//
// Created by 12san on 04-07-2025.
//
#include<iostream>
#include<fstream>
#include<string>
#include <unordered_map>

using namespace std;
unordered_map<string,string>load_credentials(const string& filename){
unordered_map<string,string>credentials;
ifstream file(filename);
string username,password;
while(file>>username>>password){
    credentials[username]=password;
}
return credentials;
}

void register_user(const string& filename){
    unordered_map<string,string>credentials= load_credentials(filename);
    string username,password;
    cout<<"Register\nEnter username:";
    cin>>username;
    if(credentials.find(username) !=credentials.end()){
        cout<<"username already exits.please try another one\n";
        return;
    }
    cout<<"Enter password: ";
    cin>>password;
     ofstream file(filename,ios::app);
     file<<username<<" "<<password<<endl;

     cout<<"Registration successful\n";
}

void login_user(const string& filename) {
    unordered_map<string, string> credentials = load_credentials(filename);

    string username, password;
    cout << "Login\nEnter username";
    cin >> username;
    cout << "Enter password";
    cin >> password;

    if (credentials.find(username) != credentials.end() && credentials[username]==password) {
        cout << "Login successful.Welcome" << username << "!\n";
    }else{
        cout<<"Invalid username or password\n";
        return;
    }
}
int main(){
    string filename="users.txt";
    int choice;

    cout<<"1. Register\n2.Login\nChoose an option: ";
    cin>>choice;
    if(choice==1) {
        register_user(filename);
    }else if(choice==2){
        login_user(filename);
    }else{
        cout<<"Invalid choice\n";
    }
    return 0;
}
