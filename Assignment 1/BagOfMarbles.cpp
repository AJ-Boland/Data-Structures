#include<iostream>

using std::cout;
using std::cin;
using std::endl;


//Data Types for a marble

struct Marble
{
    int id;
    char color;
};

//Prototypes:
Marble addMarble(struct Marble Bag[15]); //Adds marble to bag if there is room
Marble RemoveMarble(struct Marble Bag[15], int id); //Takes bag and Id and removes marble with id if it exists

//Global Id counter
int IdCounter = 0;

//main function
int main(){


//First run scenario

//initialize bag o' marbles here!
Marble Bag[15] = { };
int userInput = 1;

//User interaction loop
while(userInput != 0){
cout << "What would you like to do?" << endl << "1. Add a new marble to the bag, 2. Remove a marble from the bag, 0. To exit the Marble program"<< endl;
cin >> userInput;

if(userInput == 1){
    Bag[15] = addMarble(Bag);
}
if(userInput == 2){
    int id;
    cout<< "Enter the id of the marble you want removed"<< endl;
    cin >> id;
    Bag[15] = RemoveMarble(Bag,id);
}

//Display info:
cout << "The Bag of Marbles: "<< endl;
for(int i =0; i < 15; i++){
    cout << "ID: " << Bag[i].id << ", Color:" << Bag[i].color << endl;
}

//display code here

}
//End program, if the user is done interacting with the bag
return 0;
}

//Add marble into the bag
Marble addMarble(struct Marble Bag[15]){
    //Check if bag is full
for(int i =0; i <= 15; i++){
    cout<<i<<endl;
    if(i == 15){
        cout<<"The Bag is full!!!"<<endl;
        break;
    }

    if(Bag[i].id != 0){
        continue;
    }
    
    else{
        //Create new marble and add it
        IdCounter = IdCounter + 1;
        Bag[i] = {IdCounter,'B'};
        break;
    }
}
return Bag[15];
    
}


//Remove a marble from the bag
Marble RemoveMarble(struct Marble Bag[15], int id){
    //Check if bag is full
for(int i =0; i < 15; i++){
    if(i == 15){
        cout<<"Id not found :("<<endl;
        break;
    }
    if(Bag[i].id != id){
        continue;
    }
    else{
        //Create new marble and add it
        Bag[i] = { };
        break;
    }
}
return Bag[15];
    
}






