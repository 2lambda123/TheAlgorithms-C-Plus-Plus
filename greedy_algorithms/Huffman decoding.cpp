// ���ڴ������������ֻ�����˲��ִ��룬����������ο���ؽ̳̻��鼮��
struct MinHeapNode {
    char data;
    unsigned freq;
    MinHeapNode* left, * right;
};

void decode_file(struct MinHeapNode* root, string s) {
    string ans = "";
    struct MinHeapNode* curr = root;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0')
            curr = curr->left;
        else
            curr = curr->right;

        if (curr->left == NULL and curr->right == NULL) {
            ans += curr->data;
            curr = root;
        }
    }
    cout << ans << endl;
}

int main() {
    // �����ʵ�������ӱߺͶ���
    return 0;
}
