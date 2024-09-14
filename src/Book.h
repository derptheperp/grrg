#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book{
private:

    string title;
    string author;
    string format;
    int pubYear;
    int numOfPages;

public:

    //constructor
    Book();
    Book(string title, string author);
    Book(string title, string author, int format, int pubYear, int numOfPages);

    //getters and setters
    string getTitle();
    void setTitle(string title);

    string getAuthor();
    void setAuthor(string author);

    string getFormat();
    void setFormat(int userInput);

    int getPubYear();
    void setPubYear(int pubYear);

    int getNumOfPages();
    void setNumOfPages(int numOfPages);

    //functions
    void displayBook();
    float estimatedBookWeight();
    float estimatedReadingTime();

};


#endif