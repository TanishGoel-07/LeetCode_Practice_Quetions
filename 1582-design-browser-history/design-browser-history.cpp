class Node {
public:
    string url;
    Node* forward;
    Node* back;

    Node(string s) {
        url = s;
        forward = NULL;
        back = NULL;
    }
};
class BrowserHistory {
    Node* curr;
public:
    BrowserHistory(string homepage) {
        curr=new Node(homepage);
    }
    
    void visit(string url) {
        curr->forward=NULL;
        Node* temp=new Node(url);
        temp->back=curr;
        curr->forward=temp;
        curr=temp;
    }
    
    string back(int steps) {
        while(steps){
            if(curr->back) curr=curr->back;
            else break;
            steps--;
        }
        return curr->url;
    }
    
    string forward(int steps) {
        while(steps){
            if(curr->forward) curr=curr->forward;
            else break;
            steps--;
        }
        return curr->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */