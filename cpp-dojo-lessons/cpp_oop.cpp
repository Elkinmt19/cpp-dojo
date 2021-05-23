#include <iostream>

using namespace std;

// C++ class structure without a constructor
class Book
{
    public:
        string title;
        string author;
        int pages;
};

class SoccerTeams
{
    public:
        // The attributes must be define outside the constructor
        int numberleagues;
        string betterplayer;
        // Constructor structure in c++ (It must have the same name as the class)
        SoccerTeams(int numberleagues1, string betterplayer1)
        {
            numberleagues = numberleagues1;
            betterplayer = betterplayer1;
        }

        // Method structure in c++
        bool therearemultipleleagues()
        {
            if (numberleagues >= 5)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

class Movie
{
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        // Setter structure in c++
        void setRating(string aRating)
        {
            if (aRating == "G" || aRating == "PG-13")
            {
                rating = aRating;
            }
            else
            {
                rating = "NR";
            }
        }

        // Getter structure in c++
        string getRating()
        {
            return rating;
        }
};

class Chef
{
    public:
        void makechiken()
        {
            cout << "The chef makes chiken" << endl;
        }
        void makeSalad()
        {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish()
        {
            cout << "The chef makes bbq ribs" << endl;
        }
};

// Class created using inheritance 
class ItalianChef:public Chef
{
    public:
        void makePasta()
        {
            cout << "The chef makes Pasta" << endl;
        }

        // It's possible to overwrite a function
        void makeSpecialDish()
        {
            cout << "The chef makes chicken parm" << endl;
        }
};

int main()
{
    /**
     * This is a script to start working with OOP and more specific with classes and objects in c++
     * Classes & Objects
     * Constructor function
     * Object function(methods)
     * Getters & Setters
     * Inheritance
     */

    // Create an instance of Book class
    Book book1;
    Book book2;

    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << "Title of the first book created" << endl;
    cout << book1.title << endl;

    cout << "Title of the second book created" << endl;
    cout << book2.title << endl;

    SoccerTeams team1(5,"Leonel Messi");
    cout << "Better player for the first soccer team created" << endl;
    cout << team1.betterplayer << endl;
    cout << "This team has multiples leagues" << endl;
    cout << team1.therearemultipleleagues();

    cout << "The reating of the movie that has just been created" << endl;
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    cout << avengers.getRating();

    cout << "The dish made for the chef that has jus been created" << endl;
    Chef chef;
    chef.makechiken();

    cout << "The dish made for the italian chef that has just been created" << endl;
    ItalianChef italianchef;
    italianchef.makechiken();
    italianchef.makePasta();

    return 0;
}