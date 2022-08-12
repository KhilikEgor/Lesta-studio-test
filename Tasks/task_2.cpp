/*На языке С++, написать минимум по 2 класса реализовывающих циклический
 * буфер. Объяснить плюсы и минусы каждой реализации.*/

#include <iostream>
#define SIZE 5

class circleQueue {
private:
    int items[SIZE];
    int front = -1;
    int rear = -1;
public:
    // Check if the queue is full
    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        if (front == rear + 1) {
            return true;
        }
        return false;
    }
    // Check if the queue is empty
    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }
    // Adding an element
    void enQueue(int element) {
        if (isFull()) {
            std::cout << "Queue is full";
        } else {
            if (front == -1) front = 0;
            rear = (rear + 1) % SIZE;
            items[rear] = element;
            std::cout << std::endl
                 << "Inserted " << element << std::endl;
        }
    }
    // Removing an element
    int deQueue() {
        int element;
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return (-1);
        } else {
            element = items[front];
            if (front == rear) {
                front = -1;
                rear = -1;
            }
                // Q has only one element,
                // so we reset the queue after deleting it.
            else {
                front = (front + 1) % SIZE;
            }
            return (element);
        }
    }

    void display() {
        // Function to display status of Circular Queue
        int i;
        if (isEmpty()) {
            std::cout << std::endl
                 << "Empty Queue" << std::endl;
        } else {
            std::cout << "Front -> " << front;
            std::cout << std::endl
                 << "Items -> ";
            for (i = front; i != rear; i = (i + 1) % SIZE)
                std::cout << items[i];
            std::cout << items[i];
            std::cout << std::endl
                 << "Rear -> " << rear;
        }
    }
};