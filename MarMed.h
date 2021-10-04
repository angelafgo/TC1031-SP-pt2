#include "Node.h"

template <class T>
class MarMed
{
  public:
    MarMed();
    ~MarMed( ); // destructor
    MarMed( const MarMed<T> &otra);
    void addFirst(T data);
    void addLast(T data);
    bool add(T data, int pos);
    void deleteFirst();
    void deleteLast();
    int deleteAll();
    void del(int pos);
    bool isEmpty();
    int getSize();
    void change( int pos1, int pos2);
    T set(T data, int pos);
    T get(int pos);
    void print();
    void reverse(); // LinkedList_2_1
    void shift(int n);
    bool operator==(const LinkedList<T> &otra); //sobrecarga de operadores
    void operator+=(const LinkedList<T> &otra);
    void operator=(const LinkedList<T> &otra);

  private:
  Node<T> *head; // inicio
  int size;
}
