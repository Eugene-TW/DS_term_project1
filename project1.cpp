#include "project1.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void dropPieces(string s, int col, int m, int n, int** gameMatrix){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << gameMatrix[i][j];
        }
        cout << '\n';
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
        gameMatrix = new int *[m];
        for(int i=0; i<m; i++)
            gameMatrix[i] = new int[n];
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                gameMatrix[i][j] = 0;
        
        // read game pieces
        while(getline(file, s, ' ')){
            cout << s << '\n';
            getline(file, stringNum);
            // if End, break and write result
            if(s.compare(0, 3, "End") == 0)
                break;
            col = stoi(stringNum);
            cout << col << '\n';
            dropPieces(s, col, m, n, gameMatrix);
        }

        file.close();

        // wirte result
        ofstream result("tetris.final.txt");
        if(result.is_open()){
            for(int i=0; i<m; i++){
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