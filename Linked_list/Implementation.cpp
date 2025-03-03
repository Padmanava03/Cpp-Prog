#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class List{
    Node* head;
    Node* tail;

    public:
        List(){
            head = tail = NULL;
        }

        void push_front(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int data){
            Node* newNode = new Node(data);
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void pop_front(){
            if(head == NULL){
                cout << "List is empty" << endl;
            }else{
                Node* temp = head;
                head = head->next;
                temp->next = NULL;
                delete temp;
            }
        }

        void pop_back(){
            if(head == NULL){
                cout << "List is empty" << endl;
            }else{
                Node* temp = head;
                while(temp->next != tail){
                    temp = temp->next;
                }
                temp->next = NULL;
                delete tail;
                tail = temp;
            }
        }

        void insert(int pos, int val){
            Node* newNode = new Node(val);
            if(pos < 0) {
                cout << "Invalid position" << endl;
                return;
            }

            if(pos == 0){
                push_front(val);
                return;
            }else{
                Node* temp = head;
                for(int i=0; i<pos-1; i++){
                    if(temp == NULL){
                        cout << "Invalid position" << endl;
                        return;
                    }
                    
                    temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }

        void del_pos(int pos){
            if(pos < 0){
                cout << "Invalid position" << endl;
                return;
            }

            if(pos == 0){
                pop_front();
                return;
            }else{
                Node* temp = head;
                for(int i=0; i<pos-1; i++){
                    if(temp == NULL){
                        cout << "Invalid position" << endl;
                        return;
                    }

                    temp = temp->next;
                }

                Node* delNode = temp->next;
                temp->next = delNode->next;
                delNode->next = NULL;
                delete delNode;
            }
        }

        void del_val(int val){
            int pos = search(val);
            if(pos == -1){
                cout << "Value not found" << endl;
                return;
            }

            del_pos(pos);
        }

        int search(int val){
            Node* temp = head;
            int pos = 0;
            while(temp != NULL){
                if(temp->data == val){
                    return pos;
                }

                pos++;
                temp = temp->next;
            }

            return -1;
        }

        void display_ll(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){
    List ll;

    ll.push_front(5);
    ll.push_front(10);
    ll.push_front(15);

    ll.push_back(20);
    ll.push_back(25);
    ll.push_back(30);

    // ll.pop_front();
    // ll.pop_front();

    // ll.pop_back();

    ll.insert(2, 0);
    ll.insert(0, 5);

    ll.display_ll();

    // cout << ll.search(20)+1 << endl;

    ll.del_pos(2);
    ll.del_val(5);

    ll.display_ll();

    return 0;
}