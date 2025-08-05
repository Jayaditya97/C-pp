#include <iostream>
using namespace std;

class Book{
    public:
    string title;
    int pages;
};

int main(){
    Book book1;
    book1.title = "savi";
    book1.pages = 100;

    cout << "Title: " << book1.title << endl;
    cout << "Pages: " << book1.pages << endl;

    return 0;
}

