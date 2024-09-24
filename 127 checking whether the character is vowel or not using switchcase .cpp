//
// Created by 12san on 24-09-2024.
//
#include<iostream>
using namespace std;
class vowel{
private:
    char ch;
public:
    void check(){
        cout<<"Enter the character: "<<endl;
        cin>>ch;
        switch(ch){
            case 'a':
                case 'A' :
                case 'e'  :
                    case 'E':
                    case 'o' :
                        case 'O' :
                        case 'u' :
                            case 'U':
                            case 'i' :
                                case'I':
                cout<<"It's a Vowel.";
                break;
            default:
                cout<<"Its' a Consonant."<<endl;
        }
    }
};

int main(){
    vowel x;
    x.check();
    return 0;
}