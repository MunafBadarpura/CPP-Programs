#include<iostream>
using namespace std;
class Player{
private:
    string name;
    int health;
    int score;

public:
    //Setter
    void setName(string name){
        this->name = name;
    }
    void setHealth(int health){
        this->health = health;
    }
    void setScore(int score){
        this->score = score;
    }

    //Getter
    string getName(){
        return name;
    }
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
};
int main(){
    Player alok;
    alok.setName("Alok");
    alok.setHealth(70);
    alok.setScore(25);
    
    Player hayato;
    hayato.setName("Hayato");
    hayato.setHealth(45);
    hayato.setScore(40);

    cout<<alok.getName()<<"\n";
    cout<<alok.getHealth()<<"\n";
    cout<<alok.getScore()<<"\n";
cout<<endl;
    cout<<hayato.getName()<<"\n";
    cout<<hayato.getHealth()<<"\n";
    cout<<hayato.getScore()<<"\n";

    
}