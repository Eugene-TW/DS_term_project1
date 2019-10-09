//#include "project1.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void dropPieces(string s, int col, int m, int n, int** gameMatrix){
    if(s.compare("T1") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i-1][col] == 1 || gameMatrix[i][col+1] == 1 || gameMatrix[i-1][col+2] == 1){
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-2][col+1] = 1;
                gameMatrix[i-2][col+2] = 1;
                gameMatrix[i-1][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("T2") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i-1][col] == 1 || gameMatrix[i][col+1] == 1){
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                gameMatrix[i-2][col+1] = 1;
                gameMatrix[i-3][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("T3") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i][col+1] == 1 || gameMatrix[i][col+2] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                gameMatrix[i-1][col+2] = 1;
                gameMatrix[i-2][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("T4") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i-1][col+1] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-3][col] = 1;
                gameMatrix[i-2][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("L1") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i][col+1] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-3][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("L2") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i-1][col+1] == 1 || gameMatrix[i-1][col+2] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-2][col+1] = 1;
                gameMatrix[i-2][col+2] = 1;
                break;
            }
        }
    }else if(s.compare("L3") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i-2][col] == 1 || gameMatrix[i][col+1] == 1){
                gameMatrix[i-3][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                gameMatrix[i-2][col+1] = 1;
                gameMatrix[i-3][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("L4") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i][col+1] == 1 || gameMatrix[i][col+2] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                gameMatrix[i-1][col+2] = 1;
                gameMatrix[i-2][col+2] = 1;
                break;
            }
        }
    }else if(s.compare("J1") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i][col+1] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                gameMatrix[i-2][col+1] = 1;
                gameMatrix[i-3][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("J2") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i][col+1] == 1 || gameMatrix[i][col+2] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                gameMatrix[i-1][col+2] = 1;
                gameMatrix[i-2][col] = 1;
                break;
            }
        }
    }else if(s.compare("J3") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i-2][col+1] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-3][col] = 1;
                gameMatrix[i-3][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("J4") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i-1][col] == 1 || gameMatrix[i-1][col+1] == 1 || gameMatrix[i][col+2] == 1){
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-2][col+1] = 1;
                gameMatrix[i-2][col+2] = 1;
                gameMatrix[i-1][col+2] = 1;
                break;
            }
        }
    }else if(s.compare("S1") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i][col+1] == 1 || gameMatrix[i-1][col+2] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                gameMatrix[i-2][col+1] = 1;
                gameMatrix[i-2][col+2] = 1;
                break;
            }
        }
    }else if(s.compare("S2") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i-1][col] == 1 || gameMatrix[i][col+1] == 1){
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-3][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                gameMatrix[i-2][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("Z1") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i-1][col] == 1 || gameMatrix[i][col+1] == 1 || gameMatrix[i][col+2] == 1){
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-2][col+1] = 1;
                gameMatrix[i-1][col+2] = 1;
                gameMatrix[i-1][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("Z2") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i-1][col+1] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-2][col+1] = 1;
                gameMatrix[i-2][col+1] = 1;
                break;
            }
        }
    }else if(s.compare("I1") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-3][col] = 1;
                gameMatrix[i-4][col] = 1;
                break;
            }
        }
    }else if(s.compare("I2") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i][col+1] == 1 || gameMatrix[i][col+2] == 1 || gameMatrix[i][col+3] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                gameMatrix[i-1][col+2] = 1;
                gameMatrix[i-1][col+3] = 1;
                break;
            }
        }
    }else if(s.compare("O") == 0){
        for(int i=4; i<m+5; i++){
            if(gameMatrix[i][col] == 1 || gameMatrix[i][col+1] == 1){
                gameMatrix[i-1][col] = 1;
                gameMatrix[i-2][col] = 1;
                gameMatrix[i-1][col+1] = 1;
                gameMatrix[i-2][col+1] = 1;
                break;
            }
        }
    }
}



int main(){
    int col, m, n;
    int **gameMatrix;
    string s, stringNum;
    ifstream file("tetris.data.txt");
    if (file.is_open()){
        // read game matrix size
        getline(file, s, ' ');
        m = stoi(s);
        getline(file, s);
        n = stoi(s);
        gameMatrix = new int *[m+4];
        for(int i=0; i<m+5; i++)
            gameMatrix[i] = new int[n];
        for(int i=0; i<m+4; i++)
            for(int j=0; j<n; j++)
                gameMatrix[i][j] = 0;
        for(int j=0; j<n; j++)
            gameMatrix[m+4][j] = 1;

        // read game pieces
        while(getline(file, s, ' ')){
            cout << s << '\n';
            getline(file, stringNum);
            // if End, break and write result
            if(s.compare(0, 3, "End") == 0)
                break;
            col = stoi(stringNum) - 1;
            cout << col << '\n';
            dropPieces(s, col, m, n, gameMatrix);
        }
        file.close();

        // wirte result
        ofstream result("tetris.final.txt");
        if(result.is_open()){
            for(int i=4; i<m+4; i++){
                for(int j=0; j<n; j++){
                    result << gameMatrix[i][j];
                }
                result << '\n';
            }
            result.close();
        }
        else 
            cout << "Fail to write file";
    }
    else 
        cout << "Fail to open file QQ.";

    return 0;
}