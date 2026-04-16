#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;


string add_to_list(string parameter){ //vector<string> command_list){
        return 0;
}


string check_command(string command, string parameter, vector<string> &command_list){
    cout << "Command you entered is: " << command << endl;
    if (command == "add"){
        cout << "This is a valid command" << endl;
        command_list.push_back(parameter);

        for (const auto& element : command_list){
            cout << element << " ";
        }
    }
    else if (command == "update"){
        cout << "This is a valid command" << endl;
        cout << "command you entered is: " << command << endl;
    }
    else if (command == "delete"){
        cout << "This is a valid command" << endl;
        cout << "command you entered is: " << command << endl;
    }
    else{
        cout << "This is not a valid command";
    }

    
    return command;
}

        

int main(){
    vector<string> command_list;
    while (true){
        string command_line;
        cout << "\nEnter a command: ";
        getline(cin, command_line);
        size_t pos = command_line.find(" ");

        if (pos != string::npos){
            string first = command_line.substr(0, pos);
            string remainder = command_line.substr(pos + 1);

            cout << "First: " << first << " Remainder: " << remainder << endl;

            check_command(first, remainder, command_list);
            }
        }
    
    
}