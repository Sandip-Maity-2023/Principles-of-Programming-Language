//
// Created by 12san on 03-10-2024.
// 170 page 6.3

#include<iostream>
#include<cstring>
using namespace std;

class books{
    char *author,*title,*publisher;
    float price,cost;
    int stock;
    static int st;
    static int ut;
    void update(float nprice){
        price=nprice;
    }
public:
    books(char *a,char *t,char *pu,float p,int s){
        author=new char[strlen(a)+1];
        strcpy(author,a);
        title=new char[strlen(t)+1];
        strcpy(title,t);
        publisher=new char[strlen(pu)+1];
        strcpy(publisher,pu);
        price=p;
        stock=s;
    }
    ~books(){
        delete[] author;
        delete[] title;
        delete[] publisher;
    }
    void copies(int num){
        if(stock>=num){
            cout<<"\nAvailable in the stock:\n"<<"Total cost:" <<price*num<<endl;
            stock-=num;
            st++;
            cout<<"\nWanted copies: "<<num<<endl;
        }else{
            cout<<"Required copies not available.."<<endl;
            ut++;
        }
    }
    static void displayTrans(){
        cout<<"Successful Transactions: "<<st<<endl;
        cout<<"Unsuccessful Transactions: "<<ut<<endl;
    }
    void search(char *searchtitle,char *searchauthor){
        if(strcmp(title,searchtitle)==0 && strcmp(author,searchauthor)==0){
            cout<<"Book Available: \n"<<endl;
            display();
        }else{
            cout<<"Book not available"<<endl;
        }
    }
    void display(){
        cout<<"\nTitle: "<<title<<"\nAuthor: "<<author<<"\nPublisher: "<<publisher<<"Price: "<<price<<"\nStock: "<<stock<<endl;

    }
};
int books::st=0;
int books::ut=0;
int main(){
    books x("sukumar","tari","chaya",120.00,5);
    x.search("tari","sukumar");
    x.copies(4);
x.copies(1);
x.displayTrans();
    return 0;
}














