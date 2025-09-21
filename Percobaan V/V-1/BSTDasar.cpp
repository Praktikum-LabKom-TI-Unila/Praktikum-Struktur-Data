#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int k): key(k), left(nullptr), right(nullptr) {}
};

Node* insertNode(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->key) root->left = insertNode(root->left, key);
    else if (key > root->key) root->right = insertNode(root->right, key);
    return root;
}

bool searchNode(Node* root, int key) {
    if (!root) return false;
    if (root->key == key) return true;
    if (key < root->key) return searchNode(root->left, key);
    return searchNode(root->right, key);
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->key << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->key << " ";
}

int findMin(Node* root) {
    if (!root) return -1;
    while (root->left) root = root->left;
    return root->key;
}

int findMax(Node* root) {
    if (!root) return -1;
    while (root->right) root = root->right;
    return root->key;
}

int countNodes(Node* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

long long sumNodes(Node* root) {
    if (!root) return 0;
    return root->key + sumNodes(root->left) + sumNodes(root->right);
}

int main() {
    Node* root = nullptr;
    int pilih, x;

    do {
        cout << "\n=== BST (Dasar) ===\n";
        cout << "1. Insert\n2. Search\n3. Inorder\n4. Preorder\n5. Postorder\n";
        cout << "6. Min\n7. Max\n8. Count nodes\n9. Sum nodes\n10. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == 1) {
            cout << "Masukkan nilai: "; cin >> x;
            root = insertNode(root, x);
        } else if (pilih == 2) {
            cout << "Cari nilai: "; cin >> x;
            cout << (searchNode(root, x) ? "Ditemukan\n" : "Tidak ditemukan\n");
        } else if (pilih == 3) {
            inorder(root); cout << "\n";
        } else if (pilih == 4) {
            preorder(root); cout << "\n";
        } else if (pilih == 5) {
            postorder(root); cout << "\n";
        } else if (pilih == 6) {
            cout << "Min: " << findMin(root) << "\n";
        } else if (pilih == 7) {
            cout << "Max: " << findMax(root) << "\n";
        } else if (pilih == 8) {
            cout << "Jumlah node: " << countNodes(root) << "\n";
        } else if (pilih == 9) {
            cout << "Jumlah nilai: " << sumNodes(root) << "\n";
        }
    } while (pilih != 10);

    return 0;
}
