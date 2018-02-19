
#include <iostream>
#include "GetInput.hpp"
#include<unistd.h>
#include "Command.hpp"
//#include "CommandExecute.hpp"

using namespace std;


int main() {
    // insert code here...
   
   // GetInput test;
  //  test.getData();
    
    
    //cout<<test.retrieveData()<<endl;
    
    Command ss;
    ss.parse("ls -a &&  cd arturo; comand 3 ||comand 4");
    
    ss.p();
    std::string command("./ls");
 
   // FILE* pipe = popen(command.c_str(), "r");
    
    cout<<endl;
    //cout<<"holis 1"<<endl;
    
    char *a="-a";
    
    cout<<a<<endl;
    
    pid_t PID;
    PID =fork();
    
    if (PID < 0) {     // fork a child process
        cout<<"~ERROR: forking child process failed"<<endl;
        exit(1);
        
    }
   
    
    else if (PID == 0) {          // for the child process:
        if (execvp("ls",&a) < 0) {     // execute the command
            cout<<"*** ERROR: exec failed"<<endl;
            exit(1);
        }
    }
        cout<<endl;
    cout<<"PID is "<<PID<<endl;
    cout<<"holis 1"<<endl;
    
    
    
    
    //cout<<endl;
    if (PID!=0) { cout<<"parent XD "<<endl;}
    else  { cout<<"SON "<<endl;}
    
    
    
    
    return 0;
}
