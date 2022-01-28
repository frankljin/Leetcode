class Node {
public:
    int val;
    int min;
    Node *next;
    
    Node(int val, int min, Node *next) {
        this->val = val;
        this->min = min;
        this->next = next;
    }
};

class MinStack {
public:
    Node *topNode;
    
    MinStack() {
        topNode = nullptr;
    }
    
    void push(int val) {
        if (topNode) {
            topNode = new Node(val, min(val, topNode->min), topNode);
        } else {
            topNode = new Node(val, val, nullptr);
        }
    }
    
    void pop() {
        Node *temp = topNode;
        topNode = topNode->next;
        delete temp;
    }
    
    int top() {
        return topNode->val;
    }
    
    int getMin() {
        return topNode->min;
    }
};
