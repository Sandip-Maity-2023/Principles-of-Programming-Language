//
// Created by 12san on 04-07-2025.
//
#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<fstream>
#include<unordered_map>

class transaction{
public:
    string type;
    double amount;
    transaction(string t,double a):type(t),amount(a){} //default constractor
};

class account{
private:
    double balance;
    vector<transaction>transactions;
    string filename;
public:
    account(string user):balance(0.0),filename(user+"_data.txt"){
        loadFromFile();
    }
    void deposit(double amount){
        balance+=amount;
        transactions.emplace_back("Deposit",amount);
        savetoFile();
    }
    bool withdraw(double amount) {
        if (balance < amount) {
            cout << "Insufficient funds" << endl;
            return false;
        }
        balance -= amount;
        transactions.emplace_back("withdrawal", amount);
        savetoFile();
        return true;
    }
    bool transfer(account &receiver,double amount){
         if(withdraw(amount)){
             receiver.deposit(amount);
             transactions.emplace_back("Transfer to "+receiver.get_username(),amount);
             savetoFile();
             return true;
        }
        return false;
    }
    void print_transactions(){
        cout<<"\n.....Transaction History.....\n";
        for(const auto& t:transactions){
            cout<<t.type<<": $"<<t.amount<<endl;
        }
        cout<<"Current balance: $"<<balance<<endl;
    }
    double get_balance(){
            return balance;
    }
    string get_username(){
        return filename.substr(0,filename.find("_"));  //substr
    }
private:
    void loadFromFile(){
        ifstream in(filename);
        if(!in) return;
        transactions.clear();
        in>>balance;
        string t;
        double amount;
        while(in>> ws && getline(in,t,' ')){
            in>>amount;
            transactions.emplace_back(t,amount);
        }
    }

    void savetoFile(){
        ofstream out(filename);
        cout<<balance<<endl;
        for(const auto& t:transactions){
            out<<t.type<<" "<<t.amount<<endl;
        }
    }
};


class customer{
public:
    string name;
    account ac;
    customer(string n):name(n),ac(n){}

    void showInfo(){
        cout<<"customer: "<<name<<endl;
        ac.print_transactions();
    }
};

void showMenu(){
    cout<<"===Banking Menu===\n";
    cout<<"1. create new user\n";
    cout<<"2. select user\n";
    cout<<"3. Deposit\n";
    cout<<"4. Withdraw\n";
    cout<<"5. Transfer\n";
    cout<<"6. showInfo\n";
    cout<<"7. Exit\n";
    cout<<"choice";
}
int main(){
    unordered_map<string,customer*>users;  //as class name of customer
    customer* curr_user= nullptr;

    int choice;
    double amount;
string username,target_user;
    do{
        showMenu();
        cin>>choice;
        switch (choice) {
            case 1:
                cout<<"Enter new username: ";
                cin>>username;
               if(users.count(username)) cout<<"user already exists\n";
               else{ users[username]=new customer(username);
               cout<<"user created successfully";
               }
               break;

            case 2:
                cout<<"Enter username to log in: ";
                cin>>username;
                if(!users.count(username)){
                    users[username]=new customer(username);
                }
                curr_user=users[username];
                cout<<"Logged in as"<<username<<endl;
                break;
            case 3:
                if(!curr_user) {
                    cout<<"no user selected\n";
                    break;
                }
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                curr_user->ac.deposit(amount);
                break;
            case 4:
                if(!curr_user){
                    cout<<"no user selected\n";
                    break;
                }
                curr_user->ac.withdraw(amount);
                break;
            case 5:
                if(!curr_user){
                    cout<<"no user selected\n";
                    break;
                }
                cout<<"Enter recipient username:";
                cin>>target_user;
                if(!users.count(target_user)){
                    users[target_user]=new customer(target_user);
                }
                cout<<"enter amount to transfer:";
                cin>>amount;
                curr_user->ac.transfer(users[target_user]->ac,amount);
                break;
            case 6:
                if(!curr_user){
                    cout<<"no user selected\n";
                    break;
                }
                curr_user->showInfo();
                break;
            case 7:
                cout<<"Existing..\n";
                break;
            default:
                cout<<" Invalid option\n";
        }
    }while(choice!=7);
    for(auto& pair:users){
        delete pair.second;
    }
    return 0;
}