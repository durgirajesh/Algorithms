#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

class Test{
    public:

    void add(int *a, int *b){
        cout << "Pass by reference ";
        cout << (*a + *b) << endl;
    }

    void add(int a, int b){
        cout << "Pass by value :";
        cout << (a + b) << endl;
    }
};



int main(){

    int c;
    c = 5;

    cout << c << endl;

    int* ptr = &c;
    cout << "Address of the variable " << ptr << endl;
    cout << "Value at " << ptr << ":" << *ptr << endl;

    int** tmp = &ptr;
    cout << "Address of " << ptr << ":" << tmp << endl;
    cout << "Value at " << tmp << ":" << **tmp << endl;

    // "&" -> access to address of the variable 
    // "*" -> access to value of the variable

    /*Pass by reference and pass by value*/
    Test t;
    int a=2, b=3;

    t.add(&a, &b);
    t.add(a,b);

    /*
    Container classes in C++ :
    1. Vector (arrays)
    2. String 
    3. Stack & Queue
    4. List (Linked List)
    5. Set (unordered & ordered)
    6. Map (Hashing -> Unordered map, orderered map, multimap, unordered multimap, ordered multimap)
    */


    /*
    To access members of objects of the container classes we use, 
    
    --------> Dot operator 
    -> used to access members of an object when we have direct instance of that object
    -> "." is used to access the members of the object

    map<int, int> mp; --> creates object "mp" of container class "map";
    mp.insert({1,2}); --> assign key of "1" to variable "first" and value of the key, "2", to variable "second" of map class.

    for(auto i : mp){
        cout << i.first << " " << i.second << " " << end; --> Dot operator is used to access the values
    }

    -------> Arrow operator 
    -> used to access members of an object when we have pointer to that object.
    -> "->" is used to access the members of the object.

    //Map
    map<int, int> :: iterator it;
    cout << it->first << " " << it->second << " " << endl;
    //iterators are typically implemented as pointers. 


    // Linked List
    Node* head = NULL;
    Node* tmp = new Node();
    tmp -> data = 5;
    tmp -> next = head;
    */

    /*Iterator and auto*/
    vector<char> ch = {'r','a','j','e','s','h'};
    vector<char> :: iterator it; /*creating a pointer to vector*/

    for(it=ch.begin(); it!=ch.end(); it++){
        cout << *it << endl;
    }

    for(auto t : ch){
        cout << t << endl;
    }

    set<char> s(ch.begin(), ch.end()); //Order Changes -> sets to alphabetical order. 
    cout << "SET"<< endl; 
    
    set<char> ::iterator p; /*creating a pointer to set*/
    for(p=s.begin(); p!=s.end(); p++){
        cout << *p << endl;
    }
    for(auto x : s){
        cout << x << endl;
    }

    map<char, int> mp;
    mp.insert(pair<char, int>('a', 1));
    mp.insert({'b', 2});

    map<char, int> :: iterator pr; /* creating a pointer to map*/
    for(pr=mp.begin(); pr!=mp.end(); pr++){
        cout << pr->first << " " << pr->second << " " << endl;
    }
    for(auto i : mp){
        cout << i.first << " " << i.second << " " << endl;
    }
}

