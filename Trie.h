#ifndef HW4INC_TRIE_H
#define HW4INC_TRIE_H

#define NUM_LETTERS ((int)26)
#define TO_ADD 20
#define CHAR_TO_INDEX(ch) ((int)ch - (int)'a')

//structs
typedef enum {FALSE=0, TRUE=1} boolean;

typedef struct node {
    char letter;
    long unsigned int count;
    struct node* children[NUM_LETTERS];
    boolean isEndOfWord;
} node;

node* getNode();
void insert(node**,char*);
void print(node**,char*,int);
void printReverse(node**,char*,int);
void freeAllTrie(node**);

#endif //HW4INC_TRIE_H

