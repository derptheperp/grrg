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
    string getTitle() const;
    void setTitle(const string title);

    string getAuthor() const;
    void setAuthor(const string author);

    string getFormat() const;
    void setFormat(const int userInput);

    int getPubYear() const;
    void setPubYear(const int pubYear);

    int getNumOfPages() const;
    void setNumOfPages(const int numOfPages);

    //functions
    void displayBook() const;
    float estimatedBookWeight() const;
    float estimatedReadingTime() const;

};


#endif