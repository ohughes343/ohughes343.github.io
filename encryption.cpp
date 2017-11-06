#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>


using namespace std;


//conver char to its ascii value (from 32 to 126) and adds a random number, then converts back to char
void encrypt(char m){ // encrypt message from user
   int ascii = (int) m;
   
   ascii+= rand()%95; //add the shift to the char
   
   if(ascii > 126){
   	ascii = ascii - 95;
   }
   char s = (char) ascii;
   cout << s;
   
   
}

void decrypt(char m){ // decrypt message
   int ascii = (int) m;
   
   ascii-= rand()%95; //add the shift to the char
   
   if (ascii < 0){
   	ascii = 126 - ascii;
   }
   if(ascii < 32){
   	ascii = ascii + 95;
   }
   char s = (char) ascii;
   cout << s;
   

}


int main() {
    
    string type;
    cout << "Encrypt or decrypt? (E/D)\n";
    cin >> type;
    
    int key;
    cout << "Please enter the key: ";
    cin >> key;
    srand(key);
    
    
    string message;
    cout << "Enter a string: \n";
    cin.ignore();
	getline(cin, message);    
	
	
    if(type == "encrypt" || type == "Encrypt" || type == "E" || type == "e"){
        
		cout << "Your encrypted message: " ;
		for (int i = 0; i < message.length(); i++){
            encrypt(message[i]);
            }
        }
        
    else if(type == "decrypt" || type == "decrypt" || type == "D" || type == "d"){
        for (int i = 0; i < message.length(); i++){
            decrypt(message[i]);
            }
        }
    
    
    return 0;
}

