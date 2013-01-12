#include "../include/imap.h"

using namespace std;
/*
 *Constructor
 */
imap::imap()
{
// q = new LogoutCommand();
}

/*
 *Destructor
 */
imap::~imap()
{

}

void waitForEnter() {
    string s;
    cin.clear();
    cin>>s;
}
/*
 *readCommand - Displays the email of the header with the number 1- 10
 *@input emailNum - the email number to read
 */
void readCommand(int emailNum){
    cout<<"reading email #"<<emailNum<<":\n";
    waitForEnter();
}

/*
 *nextCommand - Displays the headers of the next 10 emails
 */
void nextCommand(){

    cout<<"displaying next 10 emails:\n";

}

void previousCommand(){
    cout<<"displaying last 10 emails:\n";
}

void logoutCommand(){
    cout<<"logging out";
   // q.execute();
}

void helpCommand(){
    cout<<"Commands:\n";
    cout<<"r# - Read a message where # is the number from 1-10\n";
    cout<<"n - Display the next 10 message headers\n";
    cout<<"p - Display the previous 10 message headers\n";
    cout<<"h - Display this command list again\n";
    cout<<"q - logout\n";
}


int main(){
    string input;
    bool done = false;
    imap();

    cout<<"Login STUFF HERE\n";
    cout<<"First TEN\n";
    helpCommand();

    while(!done){
        cout<<">";
        cin>>input;
        cout<<"\n";
        if(input[0] == 'r'){
                if(input.size() > 1 && input.size() < 4){
                    string inputNumToRead = input.substr(1,input.size());
                    int numToRead;
                    try{
                        numToRead = atoi(inputNumToRead.c_str());
                        readCommand(numToRead);
                    }catch(exception){
                        cout<<""<<input<<"Invalid Command\n";
                    }
                }else{
                    cout<<""<<input<<" Invalid Command\n";
                }
        }else if(input == "n"){
            nextCommand();
        }else if(input == "p"){
            previousCommand();
        }else if(input == "h"){
            helpCommand();
        }else if(input == "q"){
            logoutCommand();
            done = true;
        }else{
            cout<<""<<input<<"Invalid Command\n";
        }
    }//while loop
}

