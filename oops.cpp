#include<iostream>
using namespace std;

class Hero{

    // Properties or Data Members
    
    public: // It means u can access its data members inside or outside the class
    int health;
    int level;

    private: // It means you can access its data members only inside the class
    char color;

    void print(){ //accessing private
        cout << color << endl;
    } 
};

int main(){
    
    //creation of object
    Hero ramesh;

    ramesh.health = 70; //if not assigned it will give garbage values
    ramesh.level = 'A';

    cout << "Health is: " << ramesh.health << endl;
    cout << "Level is: " << ramesh.level << endl;
    // cout << "color is: " << ramesh.color << endl; // this wont work as color is a private data member u can only access inside the class

}

//-------------------------------------------------------------------------


include<iostream>
using namespace std;

class Hero{

    // Properties or Data Members
    private: 
    int health;

    public:
    int level;


    void print(){ //accessing private
        cout << color << endl;
    } 

    // we are going to use health outside the class now
    int getHealth() {
        return health;
    
    }

    char getLevel() {
        return level;
    
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }



}


int main(){
    
    //creation of object
    Hero ramesh;
    cout << " Ramesh Health is: " << ramesh.getHealth() << endl; //output:garbage value
    ramesh.setHealth(70) //if u dont want garbage value set ur health 


    ramesh.health = 70; //if not assigned it will give garbage values
    ramesh.level = 'A';

    cout << "Health is: " << ramesh.health << endl;
    cout << "Level is: " << ramesh.level << endl;
    // cout << "color is: " << ramesh.color << endl; // this wont work as color is a private data member u can only access inside the class

}

//-------------------------------------------------------------------------
// Note: If a class(Hero) has 2 data members(health(int) and level(char)) the size of class should be 5(4(int)+1(char))
// but wrong ans is 8, to know how study padding and greedy alignment 
//--------------------------------------------------------------------------


include<iostream>
using namespace std;

class Hero{

    // Properties or Data Members
    private: 
    int health;

    public:
    int level;


    void print(){ //accessing private
        cout << color << endl;
    } 

    // we are going to use health outside the class now
    int getHealth() {
        return health;
    
    }

    char getLevel() {
        return level;
    
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }



}


int main(){
    
    //static allocation
    hero a;
    a.setHealth(80)
    a.setLevel('A')
    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.getHealth()  << endl;

    //dynamic allocation

    Hero *b = new Hero;
    b->setHealth(80)
    b->setLevel('A')
    cout << "Level is: " << (*b).level << endl; //b is address. (dereferncing here, it means this (*b))
    cout << "Health is: " << (*b).getHealth()  << endl; // or You can write is as b->getHealth()


    //creation of object
  /*Hero ramesh;
    cout << " Ramesh Health is: " << ramesh.getHealth() << endl; //output:garbage value
    ramesh.setHealth(70) //if u dont want garbage value set ur health 


    ramesh.health = 70; //if not assigned it will give garbage values
    ramesh.level = 'A';

    cout << "Health is: " << ramesh.health << endl;
    cout << "Level is: " << ramesh.level << endl;
    // cout << "color is: " << ramesh.color << endl; // this wont work as color is a private data member u can only access inside the class*/

}


//---------------------------------------------------------------------------------------

include<iostream>
using namespace std;

class Hero{

    // Properties or Data Members
    private: 
    int health;

    public:
    int level;
 
    //Constructor
    Hero(){
        cout << "Contstructor Called" << endl;
    }

    //parameterized Constructor and using "this" keyword

    Hero(int health){
        this -> health = health; //(this -> health) is the one from private int health and (= health) is from above Hero(int health)

    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    void print(){ //accessing private
        cout << level << endl;
    } 

    // we are going to use health outside the class now
    int getHealth() {
        return health;
    
    }

    char getLevel() {
        return level;
    
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }



}


int main(){
    

    // object created staically 

    Hero ramesh(10);

    ramesh.getHealth();

    //dynamically

    Hero *h = new Hero()


    hero temp(22,'B')


/*    //static allocation
    hero a;
    a.setHealth(80)
    a.setLevel('A')
    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.getHealth()  << endl;

    //dynamic allocation

    Hero *b = new Hero;
    b->setHealth(80)
    b->setLevel('A')
    cout << "Level is: " << (*b).level << endl; //b is address. (dereferncing here, it means this (*b))
    cout << "Health is: " << (*b).getHealth()  << endl; // or You can write is as b->getHealth()


    //creation of object
  /*Hero ramesh;
    cout << " Ramesh Health is: " << ramesh.getHealth() << endl; //output:garbage value
    ramesh.setHealth(70) //if u dont want garbage value set ur health 


    ramesh.health = 70; //if not assigned it will give garbage values
    ramesh.level = 'A';

    cout << "Health is: " << ramesh.health << endl;
    cout << "Level is: " << ramesh.level << endl;
    // cout << "color is: " << ramesh.color << endl; // this wont work as color is a private data member u can only access inside the class*/
}

//--------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

class Hero{

    // Properties or Data Members
    private: 
    int health;

    public:
    int level;
 
    //Constructor
    Hero(){
        cout << "Simple Contstructor Called" << endl;
    }

    //parameterized Constructor and using "this" keyword

    Hero(int health){
        this -> health = health; //(this -> health) is the one from private int health and (= health) is from above Hero(int health)

    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    //copy constructor
    Hero(Hero& temp){
        this-> health = temp.health;
        this-> level = temp.level;
    };


    void print(){ //accessing private
        cout << "health " <<this->health << endl;
        cout << "level " <<this->level << endl;
    } 

    // we are going to use health outside the class now
    int getHealth() {
        return health;
    
    }

    char getLevel() {
        return level;
    
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }



};


int main(){
    
    Hero S(70,'C'); //you can do the same with S.setHealth = 70 and all, but this is easy
    S.print();


    //copy constructor
    Hero R(S);
    R.print();


    /*
    // object created staically 

    Hero ramesh(10);

    ramesh.getHealth();

    //dynamically

    Hero *h = new Hero()


    hero temp(22,'B')


   //static allocation
    hero a;
    a.setHealth(80)
    a.setLevel('A')
    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.getHealth()  << endl;

    //dynamic allocation

    Hero *b = new Hero;
    b->setHealth(80)
    b->setLevel('A')
    cout << "Level is: " << (*b).level << endl; //b is address. (dereferncing here, it means this (*b))
    cout << "Health is: " << (*b).getHealth()  << endl; // or You can write is as b->getHealth()


    //creation of object
  /*Hero ramesh;
    cout << " Ramesh Health is: " << ramesh.getHealth() << endl; //output:garbage value
    ramesh.setHealth(70) //if u dont want garbage value set ur health 


    ramesh.health = 70; //if not assigned it will give garbage values
    ramesh.level = 'A';

    cout << "Health is: " << ramesh.health << endl;
    cout << "Level is: " << ramesh.level << endl;
    // cout << "color is: " << ramesh.color << endl; // this wont work as color is a private data member u can only access inside the class*/
}

//----------------------------------------------------------------------------------------------

#include<iostream>
#include <cstring>
using namespace std;

class Hero{

    // Properties or Data Members
    private: 
    int health;

    public:
    char *name;
    int level;
 
    //Constructor
    Hero(){
        cout << "Simple Contstructor Called" << endl;
        name = new char[100];

    }

    //parameterized Constructor and using "this" keyword

    Hero(int health){
        this -> health = health; //(this -> health) is the one from private int health and (= health) is from above Hero(int health)

    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    //copy constructor
    Hero(Hero& temp){
        this-> health = temp.health;
        this-> level = temp.level;
    };


    void print(){ //accessing private
        cout << endl;

        cout << "Name" << this->name << endl;
        cout << "level " << char(this->level) << endl;
        cout << "health " << this->health << endl;
    } 

    // we are going to use health outside the class now
    int getHealth() {
        return health;
    
    }

    char getLevel() {
        return level;
    
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

};


int main(){
    
    
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();



    
    
    
    
    
    
    
    
    /*
    Hero S(70,'C'); //you can do the same with S.setHealth = 70 and all, but this is easy
    S.print();


    //copy constructor
    Hero R(S);
    R.print();


    
    // object created staically 

    Hero ramesh(10);

    ramesh.getHealth();

    //dynamically

    Hero *h = new Hero()


    hero temp(22,'B')


   //static allocation
    hero a;
    a.setHealth(80)
    a.setLevel('A')
    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.getHealth()  << endl;

    //dynamic allocation

    Hero *b = new Hero;
    b->setHealth(80)
    b->setLevel('A')
    cout << "Level is: " << (*b).level << endl; //b is address. (dereferncing here, it means this (*b))
    cout << "Health is: " << (*b).getHealth()  << endl; // or You can write is as b->getHealth()


    //creation of object
  /*Hero ramesh;
    cout << " Ramesh Health is: " << ramesh.getHealth() << endl; //output:garbage value
    ramesh.setHealth(70) //if u dont want garbage value set ur health 


    ramesh.health = 70; //if not assigned it will give garbage values
    ramesh.level = 'A';

    cout << "Health is: " << ramesh.health << endl;
    cout << "Level is: " << ramesh.level << endl;
    // cout << "color is: " << ramesh.color << endl; // this wont work as color is a private data member u can only access inside the class*/
}