#include <iostream>
#include <string>

using namespace std;

int main(){
    string sentence;

    getline(cin,sentence);
    
    int index = 0;

    for (int i = 0; i < sentence.length(); i++)
    {   
        index++;
        if(sentence[i] == ' '){
            for (int j = i-1; j >= (i-index)+1; j--)
            {
               cout << sentence[j];
               
               
            }
            cout << ' ';
            index = 0;
            
        }

        else if(i == sentence.length() - 1){
            for (int j = i; j >= sentence.length() - 1 - (index - 1)   ; j--)
            {
               cout << sentence[j];
            }
            
        }
        
    }
    cout << endl;
    return 0;
}
