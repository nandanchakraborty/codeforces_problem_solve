#include<bits/stdc++.h>
using namespace std;
struct node {
    int data ;
    struct node* next;


};
struct node* head = NULL;
void create_node(int data) {
    struct node* new_node= new node();
    new_node ->data = data;
    new_node->next =  head;
    head = new_node;

}
void sort_linked_list() {
    int temp_2;
    struct node  *temp,*index =NULL;
    temp = head;
    if(temp == NULL) {
        return;
    } else {
        while(temp!= NULL) {
            index = temp->next;

            while(index != NULL) {
                if(temp->data > index->data) {
                    temp_2 = temp->data;
                    temp->data = index->data;
                    index->data = temp_2;
                }
                index = index->next;



            }
            temp = temp->next;



        }

    }



}

void display() {
    struct node *temp;
    temp = head;
    while(temp!= NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl<<endl;


}

int main() {
    create_node(4);
    create_node(5);
    create_node(1);
    create_node(3);
    create_node(8);
    cout<<"before sort :";
    display();
    sort_linked_list();
    cout<<"after sort :";
    display();
}
