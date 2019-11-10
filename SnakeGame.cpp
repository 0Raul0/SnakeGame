#include <iostream>
#include <cmath>
#include <string>
#include <Windows.h>
#include <conio.h>
using namespace std;

bool gameRunning;

const int width = 20;
const int height = 20;

int x,y, appleX, appleY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void SetUp(){
    gameRunning = true;
    appleX = rand() % 20;
    appleY = rand() % 20;
    if (appleX == 0){
        appleX++;
    }
    if (appleY == 0){
        appleY++;
    }
    x = 10;
    y = 10;
    score = 0;
    dir = STOP;
    
}

void Draw(){
    system("clr");
    for (int i = 0; i <= height; i++){
        for (int k = 0; k <= width; k++){
            if (i == 0 || i == 20){
                if (k == 20){
                    cout << "" << endl;
                }
                else{
                    cout << "--";
                }
                
            }
            else if (k == 0 ){
                cout << "|";
        
            }
            else if (k == 20 && i !=0){
                cout << "|" << endl;
            }
            else if (i == appleY && k == appleX){
                cout << ". ";
            }
            else{
                cout << "  ";
            }
            
        }
        
    }
    
}

void Logic(){

}

void Input(){

}


int main(){
    SetUp();
  //  while(gameRunning){
        Draw();
       // Input();
      //  Logic();
      //  Sleep(10);
    //}
}