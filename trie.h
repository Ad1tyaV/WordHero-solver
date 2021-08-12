#include<unordered_map>

using namespace std;

namespace Trie{
    
    class TrieNode{

        public:
            char currentCharacter;
            unordered_map<char, TrieNode*> next;
            bool isLeaf;

            TrieNode(char letter){
                this->currentCharacter = letter;
                this->isLeaf = false;
            }
                        

    };

    class TrieParent{

        public:
            unordered_map<char, TrieNode*> links;                      

    };

    void insertWord(TrieParent *parent, string word){        
        int index = 0;
        TrieNode* crawl;
        char firstLetter = word[index];
        if(parent->links.find(firstLetter) == parent->links.end()){
            parent->links[firstLetter] = new TrieNode(firstLetter);                    
        }
        crawl = parent->links[firstLetter];
        index++;

        while(index<word.size()){

            if(crawl->next.find(word[index])==crawl->next.end()){
                crawl->next[word[index]] = new TrieNode(word[index]);                        
            }
            crawl = crawl->next[word[index++]];

        }

        crawl->isLeaf = true;

    }

    bool findWord(TrieParent* parent, string word){

        TrieNode* crawl;
        int index = 0;
        if(parent->links.find(word[index])==parent->links.end()){
            return false;
        }
        
        crawl = parent->links[word[index++]];

        while(index<word.size()){

            if(crawl->next.find(word[index])==crawl->next.end())
                return false;
            
            crawl = crawl->next[word[index++]];                    
        }
        
        if(crawl->isLeaf)
            return true;

        return false;
    }

}