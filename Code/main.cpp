#include <iostream>
#include <string>

using namespace std;


int main() {
    string phrase1 = "I woz here. ";
    string phrase2 = "Here I woz. ";
    string phrase3 = "Woz I here?";
    string phrase4 = "Yes I woz! ";



    cout  << phrase1 + phrase2 + phrase3 + phrase4 << endl; //regular use of variable names

    cout << &phrase1 << endl; //address of phrase1 in memory

    //cout << *phrase1 << endl; //attempt to deref a non pointer var

    string *p1; //declarative use of *
    string *p2;
    string *p3;

    //p1 = phrase1; //attempt to assign value of a reg var to a pointer

    p1 = &phrase1;
    p2 = &phrase2;
    p3 = &phrase3;

    string *p4 = &phrase4; //Declare and assign location of phrase 4

    cout << p1 << endl; //value inside p1

    cout << *p1 + *p2 + *p3 + *p4 << endl; //deref used to get poem
    cout << *p1 << endl; // deref used to get poem line 1

    cout << p1 << endl;
    cout << &p1 << endl;


    //string x = p1 + p2; //error cannot add addresses together

    string y = *p1 + *p2; //concat
    cout << y << endl;



    cout << p1 << endl;
    cout << p2 << endl;

    p2 = p1; // assigns value of p2 to value of p1

    cout << p1 << endl;
    cout << p2 << endl;


    //how to make a nameless variable (aka a dynamic variable)
    int x = 3; //named variable
    int *pInt = &x; //int pointer to variable x

    int *pNless; //declare an int pointer
    pNless = new int; //pionter to a dynamic var (aka nameless)

    cout << pNless << endl; //outputting the garbage value assigned into pNless

    *pNless = 4; //assigned int value to a nameless mem loc

    cout << *pNless << endl;















    return 0;
}
