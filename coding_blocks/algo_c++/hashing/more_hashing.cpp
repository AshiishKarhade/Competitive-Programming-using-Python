#include <iostream>
using namespace std;

template <typename T>
class Node{
    public:
        string key;
        T value;
        Node<T>* next;

    Node(string key, T val){
        this->key = key;
        value = val;
        next = NULL;
    }

    ~Node({
        if(next!=NULL){
            delete next;
        }
    })
};

template <typename T>
class Hashtable{

    Node<T>** table;
    int curr_size;
    int table_size;

    int hashFn(string key){
        int idx = 0;
        int p = 1;
        for(int j=0; j<key.length(), j++){
            idx = idx + (key[j]*p)%table_size;
            idx = idx % table_size;
            p = (p * 27)% table_size;
        }
        return idx;
    }

    public:
    Hastable(int ts=7){
        table_size = ts;
        table = new Node<T>**[table_size];
        curr_size = 0;

        for(int i=0; i<table_size; i++){
            table[i] = NULL;
        }
    }

    void insert(string key, T value){
        int idx = hashFn(string key);
        Node<T>* n = new Node<T> (key, val);
        n->next = table[idx];
        table[idx] = n;
        curr_size++;
    }


    T* search(string key){
        int idx = hashFn(key);
        Node<T>*  temp = table[idx];
        while(temp!=NULL){
            if(temp->key == key){
                return &temp->value;
            }
            temp = temp->next;
        }
        return NULL;
    }

    void erase(string key){


    }

};

int main(){
    
    
    
    return 0;
}
