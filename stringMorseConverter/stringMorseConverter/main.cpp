//Steven Silalahi

#include <iostream>
#include <string>
using namespace std;

//functions declared

void convertToMorse (string s);
void morseCondition(char c);
//******** MAIN *********************************

int main()
{
    string word;
    
    //String input
    cout<<"This program converts any word into morse code"<<endl;
    cout<<"Enter a word: ";
    cin >> word;
    
    //calls function for morse conversion.
    cout<<word<<" in morse is ";
    convertToMorse(word);
    cout<<""<<endl;
    cout<<""<<endl;
    
    return 0;
}

//***********************************************


//this function goes through the string letter by letter
//and convert them to morse code and put them together
void convertToMorse(string s)
{
    char theChar;
    //goes through the entire string
    for (int i=0; i<s.length(); i++)
    {
        theChar= s.at(i);
        //cout<< theChar<<endl;
        
        //at index i, the char gets
        //convertyed to morse
        morseCondition(theChar);
    }
}

//this function gives the morse code to every letter
void morseCondition (char c)
{
    //using switch statement for every condition in each letter
    switch(c)
    {
        case 'a': cout<<".-";
            break;
        case 'b': cout<<"-...";
            break;
        case 'c': cout<<"-.-.";
            break;
        case 'd': cout<<"-..";
            break;
        case 'e': cout<<".";
            break;
        case 'f': cout<<"..-.";
            break;
        case 'g': cout<<"--.";
            break;
        case 'h': cout<<"....";
            break;
        case 'i': cout<<"..";
            break;
        case 'j': cout<<".---";
            break;
        case 'k': cout<<"-.-";
            break;
        case 'l': cout<<".-..";
            break;
        case 'm': cout<<"--";
            break;
        case 'n': cout<<"-.";
            break;
        case 'o': cout<<"---";
            break;
        case 'p': cout<<".--.";
            break;
        case 'q': cout<<"--.-";
            break;
        case 'r': cout<<".-.";
            break;
        case 's': cout<<"...";
            break;
        case 't': cout<<"-";
            break;
        case 'u': cout<<"..-";
            break;
        case 'v': cout<<"...-";
            break;
        case 'w': cout<<".--";
            break;
        case 'x': cout<<"-..-";
            break;
        case 'y': cout<<"-.--";
            break;
        case 'z': cout<<"--..";
            break;
        case ' ': cout<< " ";
            break;
    }
}


