// Section 14
// Challenge
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    
    cout << boolalpha << endl;
    Mystring a {"frank"};
    Mystring b {"frank"};
	
	
    cout << (a==b) << endl;         // true
    cout << (a!=b) << endl;          // false
    b = "george";
    cout << (a==b) << endl;         // false
    cout << (a!=b) << endl;          // true
	
	
	Mystring s1 {"FRANK"};
	s1 = s1 + "**__***";
    cout << s1 << endl;               // frank*****  
	
	Mystring t1 {"Anthony"};
	Mystring t2 {"Soprano"};
	t1 = t1 + " " + t2;
	std::cout << t1 << endl;	//Anthony Soprano
	
	t1 = t1 + " " + "has no respect for this thing!"; //Anthony Soprano has no respect for this thing!
	std::cout << t1 << endl;
	
	
	
	
	/*
	cout << (a<b) << endl;          // true
    cout << (a>b) << endl;           // false
    
    Mystring s1 {"FRANK"};
    s1 = -s1;       
    cout << s1 << endl;               // frank                   
    
    s1 += "-----";                        // frank*****-----
    cout << s1 << endl;
    
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;              // 123451234512345
    
    Mystring s3{"abcdef"};  
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
    
    Mystring s = "Frank";
    ++s;
    cout << s << endl;                  // FRANK
    
    s = -s; 
    cout << s << endl;                  // frank
    
    Mystring result;
    result = ++s;                           
    cout << s << endl;                  // FRANK
    cout << result << endl;           // FRANK
    
    s = "Frank";
    s++;
    cout << s << endl;                  // FRANK
    
    s = -s;
    cout << s << endl;                  // frank
    result = s++;
    cout << s << endl;                  // FRANK
    cout << result << endl;           // frank
    */

    return 0;
}

