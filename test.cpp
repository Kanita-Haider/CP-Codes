#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct TrieNode {
    unordered_map<char, TrieNode*> children;
    int count; // Count of how many numbers include this substring
    TrieNode() : count(0) {}
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(const string& number) {
        for (int i = 0; i < number.size(); ++i) {
            TrieNode* current = root;
            for (int j = i; j < number.size(); ++j) {
                char c = number[j];
                if (!current->children.count(c)) {
                    current->children[c] = new TrieNode();
                }
                current = current->children[c];
                current->count++;
            }
        }
    }

    string findUniqueSubstring(const string& number) {
        for (int len = 1; len <= number.size(); ++len) {
            for (int i = 0; i + len <= number.size(); ++i) {
                string substring = number.substr(i, len);
                if (isUnique(substring)) {
                    return substring;
                }
            }
        }
        return number; // Fallback (should never reach here)
    }

private:
    bool isUnique(const string& substring) {
        TrieNode* current = root;
        for (char c : substring) {
            if (!current->children.count(c)) return false;
            current = current->children[c];
        }
        return current->count == 1;
    }
};

int main() {
    int n;
    cin >> n;

    vector<string> contacts(n);
    for (int i = 0; i < n; ++i) {
        cin >> contacts[i];
    }

    Trie trie;
    for (const string& contact : contacts) {
        trie.insert(contact);
    }

    for (const string& contact : contacts) {
        cout << trie.findUniqueSubstring(contact) << endl;
    }

    return 0;
}
