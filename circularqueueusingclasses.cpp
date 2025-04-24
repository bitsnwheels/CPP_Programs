#include <iostream>
using namespace std;
#define INT16_MIN (-32768)
#define INT16_MAX 32767
class queue
{

    int *arr;
    int size;
    int front;
    int rear;

public:
    int isfull()
    {
        if ((rear + 1) % size == front)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isempty()
    {
        if ((rear + 1) % size == front && arr[front] == INT16_MIN)
        {
            return 1;
        }
        else
            return 0;
    }
    void enqueue(int data)
    {

        if (!isfull())
        {
            cout<<data<<" successfully enqueued "<<endl;
            rear = (rear + 1) % size;
            arr[rear] = data;
        }
        else
        {
            cout << "Queue is full so " <<data<<" can not be enqueued"<< endl;
        }

        if (front == -1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if (!isempty())
        {
            int temp = arr[front];
            arr[front] = INT16_MIN;
            front = (front + 1) % size;
            cout<<temp<<" successfully dequeued"<<endl;
        }
        else
        {
            cout << "Queue is empty" << endl;
        }
    }
    void initialize()
    {
        size = 5;
        front = -1;
        rear = -1;
        arr = new int[size];
        for (int i = 0; i < size; i++)  //intiliasing all the elements of the array with int max
        {
            arr[i]=INT16_MAX;
        }
        
    }
    void display(int index)
    {
        if (index >= size || index < 0 || arr[index] == INT16_MIN || arr[index]==INT16_MAX)
        {
            cout << "Invalid index provided to peek at." << endl;
        }
        else{
            cout<<"Element at index "<<index<<" is "<<arr[index]<<endl;
        }
    }
};
int main()
{
    queue q1;
    q1.initialize();
    q1.enqueue(5);
    q1.enqueue(7);
    q1.enqueue(3);
    q1.enqueue(11);
    q1.enqueue(25);
    q1.enqueue(30);
    q1.display(4);
    q1.dequeue();
    

    return 0;
}