/* hello.cpp */
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

struct Exercise{
    string name;
    int sets;
    int day;
    Exercise(string name):name(name), sets(0){};
    
    void nameExercise(){
        cout << "Name of exercise: ";
        cin >> name;
    }
    void addSet(){
        sets++;
    }
    void status(){
        cout << name << ": " << sets << endl;
    }
    void reset(){
        sets = 0;
    }
};

class Person{
    string name;
    vector<Exercise> exercise;
    public:
    Person(string name):name(name){}
    void addExercise(){
        string exerciseName;
        cout << "What exercise? ";
        cin >> exerciseName;
        exercise.push_back(Exercise(exerciseName));
    }
    void finishedSet(){
        string exerciseName;
        int sets;
        cout << "Which exercise? ";
        cin >> exerciseName;
        cout << "How many sets? ";
        cin >> sets;
        for(int i; i <= exercise.capacity(); i++){
            if(exercise[i].name == exerciseName){
                exercise[i].sets = sets;
            }
            else{
                cout << "Exercise not found/n";
            }
        }
    }
    void dayReset(){
        for(int i; i <= exercise.capacity(); i++){
            exercise[i].reset();
        }
    }
    void status(){
        for(int i; i <= exercise.capacity(); i++){
            exercise[i].status();
        }
    }
};

void mainMenu(){
    cout << "1: Add person  2: Add exercise  3: Finish Set  4: Status   5: Day reset" << endl;
}

int main()
{   
    /*while(true){
        mainMenu();
    }
    */
   time_t day = time(0);
   tm *ltm = localtime(&day);
   cout << "Time: " << ltm->tm_wday << endl;
}