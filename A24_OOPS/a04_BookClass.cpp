#include<iostream>
using namespace std;
class Book{
public:
    string name;
    int price;
    int noOfPages;

    int priceBook(int p){
        if(price < p) return 1;
        else return 0;
    }

    void isBookPresent(string book){
        if(name==book) cout<<book<<" Available!";
        else if(name!=book) cout<<book<<" NOT Available!";
    }
};

int main(){
    Book harry;
    harry.name = "Harry";
    harry.price = 100;
    harry.noOfPages = 149;

    cout<<harry.priceBook(500)<<endl;
    harry.isBookPresent("Harry");
}