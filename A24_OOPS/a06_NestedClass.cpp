#include <bits/stdc++.h> 
using namespace std;
class Gun{
private:
    int ammo;
    int damage;
    int scope;
public:
    //Setter
    void setAmmo(int ammo){
        this->ammo = ammo;
    }
    void setDamage(int damage){
        this->damage = damage;
    }
    void setScope(int scope){
        this->scope = scope;
    }

    //Getter
    int getAmmo(){
        return ammo;
    }
    int getScope(){
        return scope;
    }
    int getDamage(){
        return damage;
    }
};
class Player{
    class Helmet{
    private:
        int hp;
        int level;
    public:
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int hetLevel(){
            return level;
        }
    };
private:    
    int health;
    int score;
    int age;
    bool alive;
    Gun PlayerGun;  //Gun-->Class , PlayerGun-->Class Name
    Helmet helmet;

    //New Helmet Class
    
public:
    //For Gun
    void setPlayerGun(Gun PlayerGun){
        this->PlayerGun = PlayerGun;
    }
    Gun getPlayerGun(){
        return PlayerGun;
    }
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

    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health = 0;
        if(level == 1) health = 25;
        else if(level == 2) health = 50;
        else if(level == 3) health = 100;
        else cout<<"Error";
        helmet->setHp(health);
        this->helmet = *helmet;
    }
};

int main(){
    //Values For Gun Class
    Gun akm;
    akm.setAmmo(50);
    akm.setDamage(70);
    akm.setScope(2);

    Gun awm;
    awm.setAmmo(15);
    awm.setDamage(150);
    awm.setScope(8);

    Player harsh; 
    harsh.setAge(15);
    harsh.setScore(90);
    harsh.setHealth(80);
    harsh.setAlive(true);
    harsh.setPlayerGun(akm);
    harsh.setHelmet(2);

    Player raghav; 
    raghav.setAge(20);
    raghav.setScore(70);
    raghav.setHealth(100);
    raghav.setAlive(true);
    raghav.setPlayerGun(akm);
    raghav.setHelmet(3);

    Gun gun1 = harsh.getPlayerGun();
    cout<<gun1.getDamage()<<endl;
    cout<<gun1.getAmmo()<<endl;
    cout<<gun1.getScope()<<endl;

    

}