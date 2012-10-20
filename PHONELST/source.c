#include <stdio.h>
#include <stdlib.h>

typedef struct TrieNode {
  char c;
  int leaf;
  struct TrieNode *next[10];
} TrieNode;

TrieNode *create_node() {
    TrieNode *new_node = (TrieNode *)malloc(sizeof(TrieNode));
    new_node->leaf = 0;
    int i;
    for(i = 0; i < 10; ++i) {
      new_node->next[i] = NULL;
    }
    return new_node;
}

int flag = 1;

void insert_string(TrieNode *root, char *s) {
  TrieNode *current = root;
  flag = 0;
  while(*s != '\0') {
    if(current->next[*s - '0'] == NULL) {
      current->next[*s - '0'] = create_node(); 
      flag = 1;
    } else if(current->next[*s - '0']->leaf == 1) {
      flag = 0;
      break;
    }
    current = current->next[*s - '0'];
    s++;
  }
  current->leaf = 1;
}

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {

    int n;
    scanf("%d", &n);
    TrieNode *root = create_node();

    int i;

    for(i = 0; i < n; ++i) {
      char number[20];
      scanf("%s", number);
      insert_string(root, number);
      if(flag != 1) {
        break;
      }
    }
    if(flag) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}
