#include <bits/stdc++.h>
#define MAX 26
#define hashChar(c) tolower(c) - 97
#define getChar(i) (char) (i + 97)

using namespace std;

typedef struct node* Trie;


struct node {
  Trie child[MAX];
  unsigned short int end;
};

Trie startNode() {
  Trie node = (Trie) malloc(sizeof(struct node));
  if (node) {
    for (size_t i = 0; i < MAX; i++)
      node->child[i] = NULL;
    node->end = 0;
  }
  return node;
}

Trie* criaTrie() {
  Trie* root = (Trie*) malloc(sizeof(Trie));
  if(root) {
    *root = startNode(); 
    if(!(*root)) {
      free(root);
      root = NULL;
    }
  }
  return root;
}

int insereTrie(Trie *tr, string str) {
  if (!tr)
    return 0;
  Trie node = *tr;
  char letter = str[0]; 
  if (letter == '\0') {
    node->end = 1;
    return 1;
  }
  if(isalpha(letter)) {
    int pos = hashChar(letter), noCriado = 0;
    if(!node->child[pos]) {
      Trie newNode = startNode();
      if(!newNode)
        return 0;
      node->child[pos] = newNode;
      noCriado = 1;
    }
    str.erase(0, 1);
    if(!insereTrie(&(node->child[pos]), str)) {
      if(noCriado) {
        free(node->child[pos]); 
        node->child[pos] = NULL;
      }
      return 0;
    }
    return 1;
  } else {
    str.erase(0, 1);
    return insereTrie(tr, str); 
  }
}

void imprimeSubTrie(Trie tr, char *word, int tam) {
  if(!tr || tam < 0) return;
  if(tr->end) {
    word[tam] = '\0';
    cout << word << endl;
  }
  for(size_t i = 0; i < MAX; i++) {
    if(tr->child[i]) {
      word[tam] = getChar(i);
      imprimeSubTrie(tr->child[i], word, tam + 1);
    }
  }
}


void imprimeTrie(Trie *tr) {
  if (!tr) return;
  char word[256];
  imprimeSubTrie(*tr, word, 0);
}

int main () {
  Trie* trie = criaTrie();
  string palavra;
  char carac;
  while(scanf("%c", &carac) != EOF) {
    if(isalpha(carac))
      palavra.push_back(carac);
    else {
      if(!palavra.empty())  
        insereTrie(trie, palavra);
      palavra.clear();
    }
  }
  imprimeTrie(trie);
  return 0;
}
