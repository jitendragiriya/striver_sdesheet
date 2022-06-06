#include<iostream>
using namespace std;

//codestudio code
class Queue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    Queue()
    {
        this->size = 100001;
        this->arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        if (qfront == rear)
            return true;
        else
            return false;
    }

    void enqueue(int data)
    {
        if (rear == size)
            return;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (isEmpty())
            return -1;
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if (isEmpty())
            return -1;
        else
            return arr[qfront];
    }
}; // codestudio code

int main()
{
    
    return 0;
}