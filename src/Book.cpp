#include "Book.h"

#include <string>
#include <iostream>

using namespace std;

//constructors

Book::Book(){}
Book::Book(const string title, const string author){

    this->title = title;
    this->author = author;
}
Book::Book(const string title, const string author, const int format, int pubYear, int numOfPages){

    this->title = title;
    this->author = author;
    setFormat(format); //Changing user int into a string using the switch function
    this->pubYear = pubYear;
    this->numOfPages = numOfPages;

}


//setters and getters

string Book::getTitle() const{

    return title;

}

string Book::getAuthor() const{

    return author;

}

string Book::getFormat() const{

    return format;

}

int Book::getPubYear() const{

    return pubYear;

}

int Book::getNumOfPages() const{

    return numOfPages;

}

void Book::setTitle(const string title){
    this->title = title;
}

void Book::setAuthor(const string author){
    this->author = author;
}

void Book::setFormat(const int userInput){

    // switch function, based on user input, it will changed the format
    // based on the int the user inputs
    switch(userInput){

        case 1:
            format = "Hardcover";
            break;

        case 2:
            format = "Paperback";
            break;

        case 3:
            format = "Audiobook";
            break;

        case 4:
            format = "EBook";
            break;

        default:
            format = "unknown";
            break;
    }
}

void Book::setPubYear(const int pubYear){
    this->pubYear = pubYear;
}
void Book::setNumOfPages(const int numOfPages){
    this->numOfPages = numOfPages;
}



//functions
void Book::displayBook() const{

    cout << "Title: " << getTitle() << endl;
    cout << "Author: " << getAuthor() << endl;
    cout << "Format: " << getFormat() << endl;
    cout << "Publication Year: " << getPubYear() << endl;
    cout << "Number of Pages: " << getNumOfPages() << endl;

}

float Book::estimatedBookWeight() const{

    float bookWeight;

    if(format == "Hardcover"){

        bookWeight = (0.176 * getNumOfPages()) + 2.1;

    }else if(format == "Paperback"){

        bookWeight = (0.176 * getNumOfPages()) + 0.4;

    }else{

        bookWeight = 0;
    }


    return bookWeight;

}



float estimatedReadingTime(){

return 0;

}
