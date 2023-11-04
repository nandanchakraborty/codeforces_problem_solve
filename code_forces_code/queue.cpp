#include<bits/stdc++.h>
using namespace std;
#define SIZE 5
class Queue {
    public :
    int queue[SIZE],frnt,rear;
  public:
    Queue() {
        frnt = -1;
        rear= -1;
    }
    int enqueue(int n) {
        if(frnt ==0 && rear == SIZE -1) {
            cout<<"The queue is full"<<endl;
        } else {
            if(frnt == -1)
                frnt = 0;
            rear++;
            queue[rear] = n;

        }
    }
    int dequeue() {
        int element ;

        if(frnt == -1)
            cout<<"The queue is empty"<<endl;

        else {
            element = queue[frnt];
            if(frnt >= rear) {
                frnt = -1;
                rear = -1;

            } else {
                frnt++;
            }

            cout<<"Deleted element = "<<element<<endl;
        }

    }
    void display() {

        cout<<"front index ="<<frnt<<endl;
        cout<<"item -> ";
        for(int i=frnt; i<=rear; i++) {
            cout<<queue[i]<<" ";

    }
        cout<<endl;

    }
};
int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(2);
    q.enqueue(5);
    q.display();

    q.dequeue();
    q.display();

}
