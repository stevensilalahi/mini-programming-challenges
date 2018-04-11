#include <iostream>
#include <string>
#include <stack>

using namespace std;

void evenLength(string e)
{
     stack<char>theStack;
    //divide string by half
    //compare first half, and second half
    //read first half forward,
    string forward;
    for(int i=0; i<(e.length()/2); i++)
    {
       
        //theStack.push(e.at(i));
        cout<<e.at(i);
        forward = e.at(i);
    }
    //read second half backwards.
    string back;
    for (int b= (e.length()-1); b >= (e.length()/2); b--)
    {
        cout<< e.at(b);
        
        back= e.at(b);
        /*
        if(e.at(b)== theStack.top())
        {
            theStack.pop();
        }*/
    }
    
    cout<<""<<endl;
    
    if(forward == back)
    {
        cout<<"The number is a palindrome"<<endl;
    }
    else
    {
        cout<<"The number is not a palindrome"<<endl;
    }
   
}

void oddLength(string e)
{
    //read: (length-1)/2
    //compare the first half and second half
    //read first half forward
    // read second half backwards.
    
    stack<char>theStack;

    for(int i=0; i<((e.length()-1)/2); i++)
    {
        
        theStack.push(e.at(i));
        cout<<"Pushed: "<<e.at(i)<<" to the stack"<<endl;
        //cout<<e.at(i);
    }
    for (int b= (e.length()-1); b >= ((e.length()+1)/2); b--)
    {
        //cout<< e.at(b);
        if(e.at(b)== theStack.top())
        {
            theStack.pop();
        }
    }
    
    cout<<""<<endl;
    
    if(theStack.empty())
    {
        cout<<"The number is a palindrome"<<endl;
    }
    else
    {
        cout<<"The number is not a palindrome"<<endl;
    }
    
    
}


void palindromeCheck(string s)
{
    for(int i=0; i<(s.length()/2); i++)
    {
        //stack<char>theStack;
        //theStack.push(s.at(i));
        cout<<s.at(i);
    }
    cout<<""<<endl;
    for (int b= s.length()-1; b >= 0; b--)
    {
        cout<< s.at(b);
        
    }
    cout<<""<<endl;
    
    
}
int main()
{
    string number;
    
    cout<<"This program checks whether a number is a Palindrome or not"<<endl;
    cout<<"Palindrome is a number that is the same when you reverse it"<<endl;
    cout<<""<<endl;
    
    cout<<"Enter your number: ";
    cin>> number;
    
    //palindromeCheck(number);
   evenLength(number);
    //oddLength(number);
    
    
    return 0;
    
}
