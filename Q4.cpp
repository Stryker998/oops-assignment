#include <cstring>
#include <iostream>
using namespace std;

class BOOK {
private:

    char BOOK_TYPE[20];
    int BOOK_NO;
    char BOOK_TITLE[20];
    float PRICE;

    float TOTAL_COST(int N) {
        return N * PRICE;
    }


public:
    void INPUT() {
        cout << "Enter book number: ";
        cin >> BOOK_NO;
        cout << "Enter book title: ";
        cin >> BOOK_TITLE;
        cout << "Enter book type: ";
        cin >> BOOK_TYPE;
        cout << "Enter book price: ";
        cin >> PRICE;
        cout << endl;
    }

    void PURCHASE() {
        int N;
        cout << "Enter the number of copies to be purchased: ";
        cin >> N;
        cout << "Total cost: " << TOTAL_COST(N) << endl;
    }

    void PRINT(int NUM_BOOKS, char BOOK_TYPE[20]) {
                if (strcmp(this -> BOOK_TYPE, BOOK_TYPE) == 0) {
                    cout << "Book number: " << this -> BOOK_NO << endl;
                    cout << "Book title: " << this -> BOOK_TITLE << endl;
                    cout << "Book type: " << this -> BOOK_TYPE << endl;
                    cout << "Book price: " << this -> PRICE << endl;
                    cout << endl;
                }
            }
};

int main() {
    const int NUM_BOOKS = 2;
    BOOK books[NUM_BOOKS];

    for (int i = 0; i < NUM_BOOKS; i++) {
        cout << "Enter details of book " << i + 1 << ":" << endl;
        books[i].INPUT();
    }

    char BOOK_TYPE[20] = "Comedy";

    for (int i = 0; i < NUM_BOOKS; i++) {
        books[i].PRINT(NUM_BOOKS, BOOK_TYPE);
    }


    return 0;
}





