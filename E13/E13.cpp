#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

node* dugumEkle(node* liste, int veri){
    if(liste==NULL)
    {
        liste=new node;
        liste->data=veri;
        liste->next=NULL;
        liste->prev=NULL;
    }
    else
    {
        node* head=liste;
        while(head->next!=NULL)
            head=head->next;
        node* yeniDugum=new node;
        yeniDugum->data=veri;
        yeniDugum->next=NULL;
        yeniDugum->prev=head;
        head->next=yeniDugum;
    }
    return liste;
}

void terstenYazdir(node* liste){
    node* head=liste;
    while(head->next!=NULL)
        head=head->next;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->prev;
    }
}

int main()
{
    node* l=NULL;
    for (int i = 1; i < 11; i++)
        l=dugumEkle(l,5*i);
    terstenYazdir(l);
    system("pause");
    return 0;
}