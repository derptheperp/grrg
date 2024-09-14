include "Book.h"

#include <string>
#include <iostream>

using namespace std;

//constructors

Book::Book(){

    title = "";
    author = "";
    format = "";
    pubYear = 0;
    numOfPages = 0;

}

Book::Book(string title, string author){

    this->title = title;
    this->author = author;
    format = "";
    pubYear = 0;
    numOfPages = 0;

}

Book::Book(string title,  string author,  int format, int pubYear, int numOfPages){

    this->title = title;
    this->author = author;
    setFormat(format); //Changing user int into a string using the switch function
    this->pubYear = pubYear;
    this->numOfPages = numOfPages;

}


//setters and getters

string Book::getTitle(){

    return title;

}

string Book::getAuthor() {

    return author;

}

string Book::getFormat() {

    return format;

}

int Book::getPubYear() {

    return pubYear;

}

int Book::getNumOfPages() {

    return numOfPages;

}

void Book::setTitle( string title){
    this->title = title;
}

void Book::setAuthor( string author){
    this->author = author;
}

void Book::setFormat( int userInput){

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

void Book::setPubYear( int pubYear){
    this->pubYear = pubYear;
}
void Book::setNumOfPages( int numOfPages){
    this->numOfPages = numOfPages;
}



//functions
void Book::displayBook() {

    cout << "Title: " << getTitle() << endl;
    cout << "Author: " << getAuthor() << endl;
    cout << "Format: " << getFormat() << endl;
    cout << "Publication Year: " << getPubYear() << endl;
    cout << "Number of Pages: " << getNumOfPages() << endl;

}

float Book::estimatedBookWeight() {

    float bookWeight;
    int pages = (static_cast<float>(numOfPages/2.0) + .5);

    if(format == "Hardcover"){

        bookWeight = (0.176 * pages) + 2.1;

    }else if(format == "Paperback"){

        bookWeight = (0.176 * pages) + 0.4;

    }else{

        bookWeight = 0;
    }


    return bookWeight;

}



float Book::estimatedReadingTime() {

    int userReadingSpeed;

    float pages = numOfPages;

    cout << "Enter your reading speed / narrator's reading speed per min: ";

    cin >> userReadingSpeed;

    cout << "The book will take you about " << numOfPages / userReadingSpeed << " min" << endl;

    return numOfPages / userReadingSpeed;

}