#include <iostream>

using namespace std;

void palindrome (string word){
    int last = word.length()-1;
    bool isit=false;

    for(int x=0;x<word.length();x++){ 
        
        if(word[x]==' '){
            x++;
        }
        if(word[last]==' '){
            last--;
        }
        if(tolower(word[x])!= tolower(word[last])){
            isit = true;
            break;
        }
        last--;
    }

    if(isit == true){
        cout << "No es palindromo"<<endl;
    }else{
        cout << "Es un palindromo"<<endl;
    }
}

int main(){
    
    string word;
    cout << "Introduce la frase para saber si es un palindormo" << endl;
    cout << "Frase: ";
    getline(cin, word);
    palindrome(word);

    return 0;
}