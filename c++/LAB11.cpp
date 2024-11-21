// #include <iostream>
// using namespace std;

// class Queue {
// private:
//     int front, rear, capacity;
//     int* queue;

// public:
//     Queue(int size) {
//         front = rear = -1;
//         capacity = size;
//         queue = new int[size];
//     }

//     ~Queue() {
//         delete[] queue;
//     }

//     bool isFull() {
//         return rear == capacity - 1;
//     }

//     bool isEmpty() {
//         return front == -1 || front > rear;
//     }

//     void enqueue(int data) {
//         if (isFull()) {
//             cout << "Queue is full. Cannot enqueue " << data << endl;
//             return;
//         }
//         if (front == -1) front = 0;  // First element to be inserted
//         queue[++rear] = data;
//         cout << data << " enqueued to the queue." << endl;
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is empty. Cannot dequeue." << endl;
//             return;
//         }
//         cout << queue[front] << " dequeued from the queue." << endl;
//         front++;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is empty." << endl;
//             return;
//         }
//         cout << "Queue: ";
//         for (int i = front; i <= rear; i++) {
//             cout << queue[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {

//      system("CLS");
//   cout<<"23CS036"<<endl;
//     Queue q(5); // Queue with capacity of 5

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);

//     q.display();

//     q.dequeue();
//     q.dequeue();

//     q.display();

//     q.enqueue(60);
//     q.enqueue(70);  // This will fail since the queue is full after enqueueing 60

//     q.display();

//     return 0;
// }





// #include <iostream>
// using namespace std;

// class CircularQueue {
// private:
//     int *queue;
//     int front;
//     int rear;
//     int capacity;
//     int size;

// public:
//     CircularQueue(int cap) {
//         capacity = cap;
//         queue = new int[capacity];
//         front = 0;
//         rear = -1;
//         size = 0;
//     }

//     void ENQUEUE(int value) {
//         if (size == capacity) {
//             cout << "Queue is full. Cannot enqueue " << value << endl;
//             return;
//         }
//         rear = (rear + 1) % capacity;
//         queue[rear] = value;
//         size++;
//         cout << "Enqueued: " << value << endl;
//     }

//     int DEQUEUE() {
//         if (size == 0) {
//             cout << "Queue is empty. Cannot dequeue." << endl;
//             return -1;
//         }
//         int value = queue[front];
//         front = (front + 1) % capacity;
//         size--;
//         cout << "Dequeued: " << value << endl;
//         return value;
//     }
//     void display() {
//         if (size == 0) {
//             cout << "Queue is empty." << endl;
//             return;
//         }
//         cout << "Queue elements: ";
//         for (int i = 0; i < size; i++) {
//             cout << queue[(front + i) % capacity] << " ";
//         }
//         cout << endl;
//     }

//     ~CircularQueue() {
//         delete[] queue;
//     }
// };

// int main() {
//       system("CLS");
//   cout<<"23CS036"<<endl;

//     CircularQueue cq(5);

//     cq.ENQUEUE(10);
//     cq.ENQUEUE(20);
//     cq.ENQUEUE(30);
//     cq.ENQUEUE(40);
//     cq.ENQUEUE(50);
//     cq.ENQUEUE(60);

//     cq.display();

//     cq.DEQUEUE();
//     cq.DEQUEUE();

//     cq.display();

//     cq.ENQUEUE(60);
//     cq.display();

//     return 0;
// }



 
// #include<iostream>
// using namespace std;

// struct Node {
//     string info;
//     int prn;
//     int link;
// };

// Node queue[12] = {
//     {"", 0, 0}, {"", 0, 0}, {"XXX", 2, 10}, {"DDD", 4, 9}, {"EEE", 4, 0},
//     {"CCC", 2, 12}, {"hammad", 3, 3}, {"GGG", 5, 0}, {"FFF", 4, 8}, {"ZZZ", 2, 7},
//     {"", 0, 0}, {"", 0, 0}
// };

// void deleteElements(int start, int &avail, int count) {
//     for (int i = 0; i < count; ++i) {
//         int next = queue[start].link;
//         queue[start].link = avail;
//         avail = start;
//         start = next;
//     }
// }

// void insertElement(int &start, int &avail, string info, int prn) {
//     if (avail != 0) {
//         int newNode = avail;
//         avail = queue[avail].link;

//         queue[newNode].info = info;
//         queue[newNode].prn = prn;
//         queue[newNode].link = 0;

//         int prev = 0;
//         int curr = start;
//         while (curr != 0 && queue[curr].prn <= prn) {
//             prev = curr;
//             curr = queue[curr].link;
//         }

//         if (prev == 0) {
//             queue[newNode].link = start;
//             start = newNode;
//         } else {
//             queue[newNode].link = queue[prev].link;
//             queue[prev].link = newNode;
//         }
//     }
// }

// void displayQueue(int start) {
//     while (start != 0) {
//         cout << queue[start].info << " ";
//         start = queue[start].link;
//     }
//     cout << endl;
// }

// int main() {

//         system("CLS");
//   cout<<"23CS036"<<endl;


//     int start = 6;
//     int avail = 1;

//     deleteElements(start, avail, 2);
//     displayQueue(start);

//     insertElement(start, avail, "hammad", 3);
//     insertElement(start, avail, "affaf", 1);
//     insertElement(start, avail, "ZAID", 3);
//     insertElement(start, avail, "uuu", 2);
//     displayQueue(start);

//     deleteElements(start, avail, 3);
//     displayQueue(start);

//     return 0;
// }



#include<iostream>
using namespace std;

class CircularQueue {
private:
    int front, rear, size;
    char *queue;
    int N;

public:
    CircularQueue(int n) {
        N = n;
        queue = new char[N];
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == N - 1) || (front == rear + 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(char element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % N;
        queue[rear] = element;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % N;
        }
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = front;
        while (i != rear) {
            cout << queue[i] << " ";
            i = (i + 1) % N;
        }
        cout << queue[rear] << endl;
    }
};

int main() {

    system("CLS"?.);
  cout<<"23CS036"<<endl;
    CircularQueue q(6);
    
    q.enqueue('A');
    q.enqueue('C');
    q.enqueue('D');
    
    q.enqueue('F');
    q.displayQueue();
    
    q.dequeue();
    q.dequeue();
    q.displayQueue();
    
    q.enqueue('K');
    q.enqueue('L');
    q.enqueue('M');
    q.displayQueue();
    
    q.dequeue();
    q.dequeue();
    q.displayQueue();
    
    q.enqueue('R');
    q.displayQueue();
    
    q.dequeue();
    q.dequeue();
    q.displayQueue();
    
    q.enqueue('S');
    q.displayQueue();
    
    q.dequeue();
    q.dequeue();
    q.displayQueue();
    
    q.dequeue();
    q.displayQueue();
    
    q.dequeue();
    q.displayQueue();
    
    return 0;
}
