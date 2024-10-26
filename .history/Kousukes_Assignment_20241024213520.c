#include <stdio.h>
#include <stdlib.h>

// Structure to represent a hashmap node
struct HashNode {
    int key;
    int value;
    struct HashNode* next;
};

// Hash function
int hashFunction(int key, int size) {
    return (key % size + size) % size;
}

// Insert key-value pair in the hashmap
void insert(struct HashNode** hashMap, int key, int value, int size) {
    int index = hashFunction(key, size);
    struct HashNode* newNode = (struct HashNode*)malloc(sizeof(struct HashNode));
    newNode->key = key;
    newNode->value = value;
    newNode->next = hashMap[index];
    hashMap[index] = newNode;
}

// Find value associated with a key
struct HashNode* find(struct HashNode** hashMap, int key, int size) {
    int index = hashFunction(key, size);
    struct HashNode* node = hashMap[index];
    while (node != NULL) {
        if (node->key == key) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

int init(int* a, int n) {
    // Create a hashmap of size larger than n to avoid collisions
    int hashMapSize = 2 * n + 1;
    struct HashNode** hashMap = (struct HashNode**)malloc(hashMapSize * sizeof(struct HashNode*));
    for (int i = 0; i < hashMapSize; i++) {
        hashMap[i] = NULL;
    }

    int ps = 0;
    int cnt = 0;
    int lastS = -1;

    insert(hashMap, 0, -1, hashMapSize);

    for (int i = 0; i < n; i++) {
        ps += a[i];
        struct HashNode* node = find(hashMap, ps, hashMapSize);
        if (node != NULL) {
            int prevIdx = node->value;
            if (prevIdx >= lastS) {
                cnt++;
                lastS = i;
            }
        }
        insert(hashMap, ps, i, hashMapSize);
    }
    for (int i = 0; i < hashMapSize; i++) {
        struct HashNode* node = hashMap[i];
        while (node != NULL) {
            struct HashNode* temp = node;
            node = node->next;
            free(temp);
        }
    }
    free(hashMap);
    
    return cnt;
}
void solution() {
    long long n;
    scanf("%lld", &n);

    int* a = (int*)malloc(n * sizeof(int));
    for (long long i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    long long ans = init(a, n);
    printf("%lld\n", ans);

    free(a);  // Free allocated memory
}
int main() {
    solution();
    return 0;
}
