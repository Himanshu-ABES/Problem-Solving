#include<bits/stdc++.h>
using namespace std;

int main() {
    // string name;
    // int age;

    // cout << "Enter your name: ";
    // cin >> name;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "Hello " << name << " you are " << age << " years old." << endl;

    // Datatypes
    // int a = 10;
    // long b = 10;

    // float c = 10.5;
    // float c = 10;
    // double d = 10.5;

    // string name = "Striver";
    // string only picks the single word whereas getline picks up the whole line
    // string name;
    // cin >> name;
    // cout << name << endl;
    // usecase of getline
    // string str;
    // getline(cin, str);
    // cout << str << endl;


    // char ch = 'A';
    // cout << int(ch) << endl; // A
    // cout << sizeof(ch) << endl; // 1

    // // if-else (conditional statements)
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // if (age>=18){
    //     cout << "You are eligible to vote." << endl;
    // } else {
    //     cout << "You are not eligible to vote." << endl;
    // }

    // int marks;
    // cout << "Enter your marks: ";
    // cin >> marks;
    // if (marks>=90 && marks<=100){
    //     cout << "A+" << endl;
    // } else if (marks>=80 && marks<90){
    //     cout << "A" << endl;
    // } else if (marks>=70 && marks<80){
    //     cout << "B" << endl;
    // } else if (marks>=60 && marks<70){
    //     cout << "C" << endl;
    // } else if (marks>=50 && marks<60){
    //     cout << "D" << endl;
    // } else if (marks<50){
    //     cout << "F" << endl;
    // }

    // switch case statement
    // int day;
    // cout << "Enter the day: ";
    // cin >> day;
    // switch (day){
    //     case 1:
    //         cout << "Monday" << endl;
    //         break;
    //     case 2:
    //         cout << "Tuesday" << endl;
    //         break;
    //     case 3:
    //         cout << "Wednesday" << endl;
    //         break;
    //     case 4:
    //         cout << "Thursday" << endl;
    //         break;
    //     case 5:
    //         cout << "Friday" << endl;
    //         break;
    //     case 6:
    //         cout << "Saturday" << endl;
    //         break;
    //     case 7:
    //         cout << "Sunday" << endl;
    //         break;
    //     default:
    //         cout << "Invalid day" << endl;
    // }

    // arrays
    // int arr[5];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    // for (int i=0; i<=5; i++){
    //     cout << arr[i] << " "; //Note that the last element is garbage value
    // }
    // cout << endl;
    // Elements in an array are stored at contiguous memory locations
    
    // // 2D arrays
    // int arr[3][5]; // 3 rows and 5 columns
    // // taking input in 2D array
    // for (int i=0; i<3; i++){
    //     for (int j=0; j<5; j++){
    //         cin >> arr[i][j];
    //     }
    // }
    // // printing 2D array
    // for (int i=0; i<3; i++){
    //     for (int j=0; j<5; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // Strings
    // string s = "Striver";
    // cout << s << endl;
    // cout << s[0] << endl;
    // cout << s[3] << endl;
    // int len = s.length();
    // cout << s[len-1];

    // // for loop
    // for (int i=0; i<5; i++){
    //     cout << "Striver" <<endl;
    // }

    // // while loop
    // int i=5;
    // while (i>0){
    //     cout << "Striver" << endl;
    //     i--;
    // }

    // functions
    // void -> which does not return anything
        // void printHello(){
        //     cout << "Hello" << endl;
        // }
        // printHello();
    // return -> which returns something
        // int add(int a, int b){
        //     return a+b;
        // }
        // cout << add(10, 20) << endl;
    // parameterized -> which takes some arguments
        // int add(int a, int b){
        //     return a+b;
        // }
        // cout << add(10, 20) << endl;
    // non-parameterized -> which does not take any arguments
        // void printHello(){
        //     cout << "Hello" << endl;
        // }
        // printHello();

    // // pass by value
    // void doSomething(string s){
    //     s[0] = 'T';
    //     cout << s << endl;
    // }

    // string s = "Raj";
    // doSomething(s); // Taj
    // cout << s << endl; // Raj
    // // here in the above example, the value of s is not changed because we are passing the value of s to the function and not the reference of s

    // // pass by reference
    // void doSomething(string &s){
    //     s[0] = 'T';
    //     cout << s << endl;
    // }
    // string s = "Raj";
    // doSomething(s); // Taj
    // cout << s << endl; // Taj
    // // here in the above example, the value of s is changed because we are passing the reference of s to the function

    return 0;
}