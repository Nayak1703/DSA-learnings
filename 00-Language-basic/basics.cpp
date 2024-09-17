/*
    ====>   IDE: Integrated Development Environment.


    ====>   C++ First-time setup:   <====
    make file-name.cpp (to write code), output.txt (to accept output of the
   code) and input.txt (to enter input our program required) files. then go the
   menu > terminal > configure-task > create task.json file > others > remove
   existing json-code > add window build-command and save it. now to execute you
   code enter: ctrl + shift + B. now you will see the output of your code inside
   output.txt.


    ====>   Basic Syntax:   <====
    In c++ programming we are going to use lots of features like: taking input,
   giving output, printing, solving complex math, etc... so c++ provide us many
   inbuilt libraries to use those features in our code. let use "iostream"
   library: it helps to take input from user and give output to user, to use
   this library in our code we have to import it from c++ like "#include
   <iostream>" it means: include iostream library in our code. suppose there are
   lot of libraries I want to use in my code, it will be hectic job to include
   all these libraries one by one. to solve this problem we have one library
   that have compilation of all the library present in c++. That is "#include
   <bits/stdc++.h>", but this library will take more time to compile the code
   (time is negligible).


    ====>   int main () {}:   <====
    main() function is always our entry point in c++ for compiler to execute the
   code. you can see we have wrote int before main() because we are expecting
   that this function will return something of int datatype. (int can be replace
   with other datatypes like: string, char, Boolean, etc...) if function is not
   returning anything then we can write void before main () function void main
   () {}


    ====>   using namespace std:   <====
    using namespace std; if we don't write this then we have to used std::
   everywhere when we use keyword like (cout, cin, endl, etc...) which is
   present inside the standard (std). to write std:: everywhere is annoying so
   to avoid that we can write "using namespace std" after importing the
   libraries.
*/

#include <bits/stdc++.h>
using namespace std;

//  ====>   1.  Basics skeleton     <====

/*
    int main() {
        // it takes, "Hello World" and give it to the cout and cout prints it.
        cout<<"Hello World";
        return 0;
    }
*/

// ====>    2.  Data-Type   <====

/*
    // There are various Data-Types, we will learn as we move forward :
    // Integer (int), String (str), Character (char), Boolean (true),
   Floating-point (float), etc...

    int main() {
        // Int only stores integers
        int num1 = 10;
        // Int have limited-range
        int intRange1 = INT_MIN;
        int intRange2 = INT_MAX;
        cout<<intRange1<<" to "<<intRange2<<endl;
        // if the integers is exceeding the range of the int, then use long or
   long-long long longNum = 100000000; long long longLongNum = 100000000000000;
        cout<<LONG_MIN<< " to "<<LONG_MAX<<endl;
        cout<<LONG_LONG_MIN<< " to "<<LONG_LONG_MAX<<endl;


        // If we want to store the decimal-number(num that have . in it)
        float num2 = 10.23f;
        double num3 = 10.51212311;  // use double when you have more than 7
   number after . cout<<num2<<" "<<num3<<endl;


        // If you want to store any of the 256 character then use char data-type
        char ch = 'a';
        cout<<ch<<endl;


        // If you want to store a word / sentence which is collection of
   character example: name, then use "string".
        // string is basically class which is present under std.
        string name = "yash nayak";
        cout<<"My name is "<<name<<endl;

        // if we dont use "namespace using std" we have to write std::
        // std::string name = "yash nayak";
        // std::cout<<"My name is "<<name<<std::endl;
        return 0;
    }
*/

// ====>    3.  Input/Output (IO)   <====
/*

    int main () {
        // here we are taking integer input from the user (we can take other
   data-type like double, float, long-long, etc... same way). int bDate, bMonth,
   bYear;
        // cin goes to the input file, find the number given by user and inseret
   that num
        // to the bDate. (it will only take one number if there are multiple num
   sperated with space / line) cin>>bDate; cout<<bDate<<endl;

        // to take multiple num
        cin>>bMonth>>bYear;
        cout<<bDate<<"-"<<bMonth<<"-"<<bYear<<endl;

        // if we dont give/assign any value to the variable then complier will
   assign
        // garbage-value (random) to the variable.

        // Char will take single character.
        char ch;
        cin>>ch;
        cout<<ch<<endl;


        // String will take onw word. if we want to take whole line we have to
   use
        // getline(cin, str).
        string str1, str2;
        cin>>str1;
        cout<<str1<<endl;
        getline(cin, str2);
        cout<<str2;

        return 0;
    }
*/

// ====>    4.  If-else    <====

// int main() {
// Problem-1
/*
    int age;
    cin >> age;
    if (age >= 18)
        cout << "Adult";
    else
        cout << "Teen";
*/

// Problem-2
/*
    int age;
    cin>>age;

    if(age>=18)
        cout<<"Adult";
    else {
        if(age >= 10)
            cout<<"Teen";
        else
            cout<<"Child";
    }
*/

// Problem-3
/*
    int marks;
    cin >> marks;

    if (marks >= 90)
        cout << "Grade A";
    else if (marks >= 70)
        cout << "Grade B";
    else if (marks >= 50)
        cout << "Grade C";
    else if (marks >= 35)
        cout << "Grade D";
    else
        cout << "Fail";
*/

// Problem-4
/*
 int a, b, c;
cin >> a >> b >> c;

if (a > b) {
    if (a > c)
        cout << a;
    else
        cout << c;
} else if (b > c) {
    cout << b;
} else {
    cout << c;
}

return 0;
*/
// }

// ====>    5.  Switch-case    <====

/*
    int main() {
    int day;
    cin >> day;

    // switch is better than if-else, switch will directly goes to the case
    // based on the value provided and come out of the switch using break. and
    // if the value doesnot match the case provided then it will give default
    // output.

    switch (day) {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        case 4:
            cout << "Thurday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;

        default:
            cout << "Enter valied day from 1 to 7";
    }
}
*/

// ====>    6.  for-loop & while-loop    <====

/*
    int main() {
    // for (int i = 0; i <= 100; i += 5) {
    //     cout << i << endl;
    // }

    // int i = 5;
    // while (i <= 100) {
    //     cout << i << endl;
    //     i += 5;
    // }

    // first it will execute code inside do then check the condition.
    int i = 5;
    do {
        cout << i << endl;
        i += 5;
    } while (i < 6);
    return 0;
}
*/

// ====>    8. Arrays    <====
/*
    int main() {
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
*/

// ====>    9. Strings    <====
/*
    int main() {
    // in backend it is stored collection of the character of size string-length
    // + 1. it is taking extra space to store null-element so that it can tell
    // complier that string as ended.
    string str = "Yash nayak";
    cout << str[0] << endl;   // this will give first-char of the string.
    cout << str[10] << endl;  // this will give null-element
    cout << str.size() << endl;
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << endl;
    }
}
*/

// ====>    9. Functions    <====
// declaration of the function

/*
    void print() {
        cout << "I am void function, i dont return anything." << endl;
    }

    void addingNum() {
        int num1, num2;
        cin >> num1 >> num2;
        cout << num1 + num2 << endl;
    }

    int sum(int num1, int num2) {
        return num1 + num2;
    }

    int main() {
        // calling the function
        print();
        addingNum();
        addingNum();
        cout << sum(11, 11);
        return 0;
    }
*/

// ====>    10. pass by value and reference    <====
/*
void passByValue(int x) {
    x += 10;
    cout << "Inside passByValue " << x << endl;
}

// here we are making y alias of the passed argument. in other word we are
// refering a using y
void passByreference(int &y) {
    cout << &y << endl;
    y += 100;
    cout << "Inside passByReference " << y << endl;
}

// array by default passed as a reference, sp any changes done to the paramter
// it will directly affect the original array
void byDefaultPassByReference(int arr[5]) {
    arr[0] = 100000;
}

int main() {
    // here "a" is pointing to the value 10
    int a = 10;
    // it sends copy of the variable a;
    passByValue(a);
    cout << a << endl;
    // it send copy but, in this function we are accepting this argument using
    // & (refernce tag) it will act as alias (another name of same variable) of
    // the variabel a, now this function can change actual value of a.
    // this helps us to avoid creating new variable that help us to saves
    // memorys
    passByreference(a);
    cout << a << endl;

    // here arr points to the address of the first=element of the array.
    // so when we pass arr inside the function argument we are passing that
    // address. so when we do any changes to arr inside the function it will
    // directly affect the arr.
    int arr[5] = {100, 200, 300, 400, 500};
    cout << arr[0] << endl;
    byDefaultPassByReference(arr);
    cout << arr[0] << endl;
    return 0;
}
*/
