#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include "trie.h"
#include <fstream>
#include<unordered_set>

#define ROWS 4
#define COLS 4

using namespace std;
using namespace Trie; 

unordered_set<string> elements;
vector<vector<bool>> visited;
vector<pair<int, int>> directions = { {1,0}, {0,1}, {-1,0}, {0,-1}, {1,1}, {-1,-1}, {1,-1}, {-1,1}};

void generateAllWords(vector<vector<char>> grid, int x, int y, TrieNode* crawl, string word){

    
    
    if(crawl->isLeaf){
        // elements.push_back(word);
        elements.insert(word);
    }

    if(x>=ROWS || x<0)
        return;
    
    if(y<0 || y>=COLS)
        return;
    
    if(visited[x][y])
        return;
    
    
    visited[x][y] = true;

    for(pair<int, int> direction : directions){

        int next_x = x+direction.first;
        int next_y = y+direction.second;

        

        if(next_x>=ROWS || next_x < 0)
            continue;
        if(next_y<0 || next_y>=COLS)
            continue;
        
        if(visited[next_x][next_y])
            continue;

        if(crawl->next.find(grid[next_x][next_y])==crawl->next.end()){
            // NO point going this direction!
            continue;
        }
        else{                        
            word.push_back(grid[next_x][next_y]);
            generateAllWords(grid, next_x, next_y, crawl->next[grid[next_x][next_y]],word);            
            word.pop_back();            
        }        
    }

    visited[x][y] = false;
    



}


void readFile(TrieParent* parent){
    std::ifstream infile("scrabbleWords.txt");
    for(string line; std::getline(infile, line);){
        line.pop_back();        
        // cout<<"word="<<line<<endl;
        // cout<<"word size="<<line.size()<<endl;
        insertWord(parent, line);
        // cout<<line<<endl;
    }
    infile.close();
}

bool isValidInput(string temp){

    if(temp.size()!=1)
        return false;
    
    
    return isalpha(temp[0]);
}

string convertToLowerCase(string input){

    string lowerCase = "";
    for(int index = 0; index<input.size(); index++){

        if(input[index]>=65 && input[index]<=91){
            lowerCase.push_back(input[index]);
        }

    }

}

char charToUpper(char letter){

    if((int) letter >=65 && (int) letter<=91)
        return letter;
    
    return (char)(letter-32);


}

void printBoard(vector<vector<char>> grid){

    for(int row = 0; row<ROWS; row++){
        for(int col = 0; col<COLS; col++){
            cout<<grid[row][col]<<"\t";
        }
        cout<<endl;
    }

}

int main(){

    TrieParent* parent = new TrieParent();
    visited = vector<vector<bool>>(ROWS, vector<bool>(COLS, false));
    
    cout<<"Do you want to enter the board as input ? Y/N ?"<<endl;
    string option;
    cin>>option;    

    transform(option.begin(),option.end(), option.begin(), ::tolower);
    vector<vector<char>> grid = vector<vector<char>>(ROWS, vector<char>(COLS, '\0')); // Initializing with NULL

    if(option[0]=='y' || option=="yes"){

        cout<<"Enter 16 elements of the board row after row, use space as seperator or next line\n";        
        for(int row_index = 0; row_index<ROWS; row_index++){
            for(int col_index = 0; col_index<COLS; col_index++){

                string temp;
                cin>>temp;
                if(!isValidInput(temp)){
                    cout<<"Invalid Input - "<<temp<<endl;
                    return 0;
                }
                else{                    
                    // grid[row_index][col_index] = temp[0];                                           
                    grid[row_index][col_index] = charToUpper(temp[0]);
                }

            }
        }


    }

    else{

        grid =                  {{'S','S','E','E'}, 
                                 {'H','P','R','D'}, 
                                 {'I','A','E','I'}, 
                                 {'S','D','Y','R'}};

    }
    

    printBoard(grid);
    
    readFile(parent);           

    for(int x = 0; x<ROWS; x++){

        for(int y=0; y<COLS; y++){
                                    
            visited = vector<vector<bool>>(ROWS, vector<bool>(COLS, false));
            string temp = "";
            temp.push_back(grid[x][y]);            
            generateAllWords(grid, x, y, parent->links[grid[x][y]], temp);
            temp.pop_back();

        }

    }

    cout<<"Total number of elements:"<<elements.size()<<endl;
   

    for(auto iterator = elements.begin(); iterator!=elements.end(); iterator++){
        cout<<*iterator<<"\t";
    }
    
    cout<<endl;

    return 0;
}