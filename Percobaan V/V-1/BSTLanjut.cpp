#include <iostream>
#include <queue>
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

Node* findMinNode(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return nullptr;
    if (key < root->key) root->left = deleteNode(root->left, key);
    else if (key > root->key) root->right = deleteNode(root->right, key);
    else {
        if (!root->left && !root->right) {
            delete root; return nullptr;
        } else if (!root->left) {
            Node* t = root->right; delete root; return t;
        } else if (!root->right) {
            Node* t = root->left; delete root; return t;
        } else {
            Node* succ = findMinNode(root->right);
            root->key = succ->key;
            root->right = deleteNode(root->right, succ->key);
        }
    }
    return root;
}

int height(Node* root) {
    if (!root) return -1;
    int hl = height(root->left);
    int hr = height(root->right);
    return 1 + (hl > hr ? hl : hr);
}

void levelOrder(Node* root) {
    if (!root) { cout << "(kosong)\n"; return; }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* cur = q.front(); q.pop();
        cout << cur->key << " ";
        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
    cout << "\n";
}

bool findSuccessor(Node* root, int key, int &ans) {
    Node* cur = root;
    Node* succ = nullptr;
    while (cur) {
        if (key < cur->key) { succ = cur; cur = cur->left; }
        else if (key > cur->key) cur = cur->right;
        else break;
    }
    if (!cur) return false;
    if (cur->right) succ = findMinNode(cur->right);
    if (!succ) return false;
    ans = succ->key; return true;
}

bool findPredecessor(Node* root, int key, int &ans) {
    Node* cur = root;
    Node* pred = nullptr;
    while (cur) {
        if (key > cur->key) { pred = cur; cur = cur->right; }
        else if (key < cur->key) cur = cur->left;
        else break;
    }
    if (!cur) return false;
    if (cur->left) {
        Node* t = cur->left;
        while (t->right) t = t->right;
        pred = t;
    }
    if (!pred) return false;
    ans = pred->key; return true;
}

int main() {
    Node* root = nullptr;
    int pilih, x;

    do {
        cout << "\n=== BST (Lanjutan) ===\n";
        cout << "1. Insert\n2. Delete\n3. Level-order\n4. Height\n5. Successor\n6. Predecessor\n7. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == 1) {
            cout << "Masukkan nilai: "; cin >> x;
            root = insertNode(root, x);
        } else if (pilih == 2) {
            cout << "Hapus nilai: "; cin >> x;
            root = deleteNode(root, x);
        } else if (pilih == 3) {
            levelOrder(root);
        } else if (pilih == 4) {
            cout << "Tinggi pohon: " << height(root) << "\n";
        } else if (pilih == 5) {
            cout << "Cari successor dari: "; cin >> x;
            int ans; 
            if (findSuccessor(root, x, ans)) cout << "Successor: " << ans << "\n";
            else cout << "Tidak ada successor (mungkin kunci tidak ada atau yang terbesar)\n";
        } else if (pilih == 6) {
            cout << "Cari predecessor dari: "; cin >> x;
            int ans; 
            if (findPredecessor(root, x, ans)) cout << "Predecessor: " << ans << "\n";
            else cout << "Tidak ada predecessor (mungkin kunci tidak ada atau yang terkecil)\n";
        }
    } while (pilih != 7);

    return 0;
}
