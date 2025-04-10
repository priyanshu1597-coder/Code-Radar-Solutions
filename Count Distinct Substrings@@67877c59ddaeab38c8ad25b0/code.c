#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

// Trie node structure
struct TrieNode {
    struct TrieNode *children[26];
    int isEndOfWord;
};

// Create a new Trie node
struct TrieNode* createNode() {
    struct TrieNode *node = (struct TrieNode*)malloc(sizeof(struct TrieNode));
    for (int i = 0; i < 26; i++)
        node->children[i] = NULL;
    node->isEndOfWord = 0;
    return node;
}

// Insert all substrings into the Trie and count distinct ones
int insertSubstrings(struct TrieNode *root, char *str) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        struct TrieNode *current = root;
        for (int j = i; j < len; j++) {
            int index = str[j] - 'a';
            if (current->children[index] == NULL) {
                current->children[index] = createNode();
                count++; // New substring found
            }
            current = current->children[index];
        }
    }
    return count;
}

int main() {
    char str[MAX];
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline if any

    struct TrieNode *root = createNode();
    int result = insertSubstrings(root, str);
    printf("%d\n", result);

    return 0;
}
