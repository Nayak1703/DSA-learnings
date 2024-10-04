#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    // when we want to add 2 value (maybe same or different datatype) as a pair,
    // to the single variable.

    pair<int, int> pr1 = {10, 20};
    cout << pr1.first << " " << pr1.second << endl;

    // we can also assign the value using make_pair()
    pair<char, int> pr2 = make_pair('a', 20);
    cout << pr2.first << " " << pr2.second << endl;

    pair<string, int> pr3 = make_pair("yash nayak", 20);
    cout << pr3.first << " " << pr3.second << endl;

    // we can do nested pair.
    pair<pair<string, int>, int> pr4 = {{"radha krishna", 100}, 20};
    // we can only access the value that we have assing, if we access the object
    // like pr4.first then it will throw a error.
    cout << pr4.first.first << " " << pr4.first.second << " " << pr4.second
         << " " << endl;
}

void explainVector() {
    // vector is a dynamic array that can automatically resize itself when
    // elements are added or removed. It provides the same functionalities as an
    // array but with additional features like dynamic resizing.

    // =====>  initialisation  <=====

    // empty container, it does not hold any value.
    vector<int> vec;

    // hold memory-space of 5 element and its default value is 0
    vector<int> vec1(5);
    for (auto i : vec1) {
        cout << i << " ";
    }
    cout << endl;

    // hold memory-space of 5 element and we have changed its default value to
    // 100
    vector<int> vec2(5, 100);
    for (auto i : vec2) {
        cout << i << " ";
    }
    cout << endl;

    // hold memory-space of 5 element because we have given only 5 elements
    vector<int> vec3 = {1, 2, 3, 4, 5};
    for (auto i : vec3) {
        cout << i << " ";
    }
    cout << endl;

    // =====>  push_back / emplace_back  <=====

    // this will add the element at the end of the vector.
    vec.push_back(10);
    vec.emplace_back(20);
    vec3.push_back(6);

    // =====>  front && back  <=====

    // return first-element from vector.
    cout << "first-element: " << vec3.front() << endl;
    // return last-element from vector.
    cout << "last-element: " << vec3.back() << endl;

    // =====>  size  <=====

    // return number of elements in vector.
    cout << "size: " << vec.size() << endl;

    // =====>  iterator  <=====

    // it helps us to travers through poniters of the elements inside the vector

    // begin(): it points to the first-element of the vector and returns an
    // address of the firs-element.
    vector<int>::iterator beginItr = vec.begin();

    // end(): it points after the last-element of the vector and returns an
    // address of the that.

    // since is it pointing address after last-element, so to access the last
    // element we have to do - 1
    vector<int>::iterator endItr = vec.end() - 1;

    // beginItr & endItr is the address of the element not actual element so to
    // access the element we have to add pointer * to it.
    // it will give error, if we print address cout<<beginItr;
    cout << *beginItr << " " << *endItr << endl;

    for (vector<int>::iterator i = beginItr; i <= endItr; i++) {
        cout << *i << " ";
    }
    cout << endl;

    // we can write "auto" keyword in place of "vector<int>::iterator",
    // it will automatically assign the vector<int>::iterator
    auto beginItr1 = vec.begin();
    auto endItr1 = vec.end() - 1;

    for (auto i = beginItr1; i <= endItr1; i++) {
        cout << *i << " ";
    }
    cout << endl;

    // =====>  for-each  <=====

    // The for_each loop in C++11 allows for a simpler way to iterate over
    // vectors. It simplifies the syntax and enhances code readability.
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // =====>  Reverse the travers  <=====

    // will store last value.
    auto reverseBegin = vec.rbegin();
    // will store first value. done "- 1" because rend() points before the
    // first-value
    auto reverseEnd = vec.rend() - 1;

    for (auto i = reverseBegin; i <= reverseEnd; i++) {
        cout << *i << " ";
    }
    cout << endl;

    // =====>  Duplicate the vector  <=====

    vector<int> dupVec(vec);
    for (auto i : dupVec) {
        cout << i << " ";
    }
    cout << endl;

    // suppose we want to duplicate only elements from between the vector.
    // second-argument is not inclusive.
    vector<int> dupVec1(vec.begin() + 1, vec.end() - 1);
    for (auto i : dupVec1) {
        cout << i << " ";
    }
    cout << endl;

    // =====>  erase  <=====

    // The erase function removes an element from the vector by a position
    // causing all subsequent elements to be shifted one position to the
    // left.This helps reduces the size of the vector by one.

    vec.erase(vec.begin() + 1, vec.end() - 1);
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // =====>  clear  <=====

    // to delete all the element inside the vector
    vec.clear();
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // =====>  swap  <=====

    // to swap elements between 2 vectors
    swap(vec2, vec3);
    for (int i : vec2) {
        cout << i << " ";
    }
    cout << endl;
    for (int i : vec3) {
        cout << i << " ";
    }
    cout << endl;

    // =====>  insert  <=====
    // if you want to insert element inside the vector.
    // this will insert 4 at third place and shift all the elements to the
    // right.
    vec3.insert(vec3.begin() + 2, 4);
    for (int i : vec3) {
        cout << i << " ";
    }
    cout << endl;

    // vector store the element just like array [10,20,30,40] (0th based index)
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
        cout << vec.at(i) << " ";
    }
    cout << endl;
}

int main() {
    // 1. Pair (utility library)
    // explainPair();

    // 2. Vectors
    explainVector();
    return 0;
}