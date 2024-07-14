#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

typedef int Integer;

int sumRightLeft(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int& x, int& y, int ySig){

    int res = 0; 

    int a = matrix[x].size();
    bool visited2 = visited[x][y];

    for(; y < matrix[x].size() && !visited[x][y]; y += ySig){
        res += matrix[x][y] ;  
        visited[x][y] = true; 
    }

    return res;
}


int sumUpDown(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int& x, int& y, int xSig){

    int res = 0; 

    for(; x < matrix.size() && !visited[x][y]; x += xSig){
        res += matrix[x][y] ;  
        visited[x][y] = true; 
    }

    return res;
}

Integer main ()
{

    vector<vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<bool>> visited(matrix[0].size(), vector<bool>( matrix.size(), false ));;
    
    bool finish = false;
    int x = 0;
    int y = 0;
    int yRxUSig = 1;
    int yLxDSig = -1;
    int res = 0;

    while(x != matrix[0].size() && y != matrix[0].size()){

        res += sumRightLeft(matrix, visited, x, y, yRxUSig);
        x =+ 1;
        y += -1;
        res += sumUpDown(matrix, visited, x, y, yLxDSig);
        
        res += sumRightLeft(matrix, visited, x, y, yLxDSig);
        res += sumUpDown(matrix, visited, x, y, yRxUSig);
    }

    cout << res <<  endl;

    return 0;
}
