#include <bits/stdc++.h> 
using namespace std;
class Player{
private:    
    int health;
    int score;
    int age;
    bool alive;
public:
    //Getter
    int getHealth(){
        return health;
    }  

    int getScore(){
        return score;
    }

    int getAge(){
        return age;
    }

    bool getAlive(){
        return alive;
    } 

    //Setter
    void setHealth(int health){
        this->health = health;
    }  

    void setScore(int score){
        this->score = score;
    }

    void setAge(int age){
        this->age = age;
    }

    void setAlive(bool alive){
        this->alive = alive;
    } 
};

int addScore(Player a, Player b){
    return a.getScore() + b.getScore();
}

Player maxScore(Player a,Player b){
    if(a.getScore() > b.getScore()) return a;
    else return b;
}
int main(){
    Player harsh; //Static Type Object
    harsh.setAge(15);
    harsh.setScore(90);
    harsh.setHealth(80);
    harsh.setAlive(true);

    Player raghav;  //Static Type Object
    raghav.setAge(20);
    raghav.setScore(70);
    raghav.setHealth(100);
    raghav.setAlive(true);

    cout<<"Added Score : "<<addScore(harsh, raghav)<<endl;   

    Player sanket = maxScore(harsh,raghav);
    cout<<"Sanket Score : "<<sanket.getScore()<<endl;      
    cout<<"Sanket Health : "<<sanket.getHealth()<<endl;  

    cout<<endl;
    //Dynamic Allocation
    Player *anuv = new Player; //Dynamic Allocation
    Player anuvObject = *anuv; //Dynamic Allocation  
    anuvObject.setAge(30);
    cout<<"Anuv Age (Dynamic Object): "<<anuvObject.getAge()<<endl; 

    anuv->setAge(20);

}