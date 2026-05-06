#include <iostream>
using namespace std;

void usa(){
    cout<<"you are in usa"<<endl;
    return;
    cout<<"you are in usa2"<<endl;
}
void india(){
    cout<<"you are in india"<<endl;
    // best practice to put return even if not returns anything, it also tells func completed or atleast behjaves like fullstop
    
    // C++ return — Quick Summary
    // Required for non-void functions
    // → Must return a value (int, float, etc.)
    // Sends result back
    // → Passes output from function to caller
    // Early exit
    // → Stops function immediately when condition is met
    // In main()
    // → return 0; means program executed successfully
    // Cleaner code
    // → Avoids unnecessary else, improves readability
    // Multiple returns allowed
    // → Useful for handling different conditions easily

    return;
}
int main(){
    usa();
    cout<<"adhiraj"<<endl;
    india();

}