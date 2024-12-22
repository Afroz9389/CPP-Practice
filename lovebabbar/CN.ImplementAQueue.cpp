#include <bits/stdc++.h> 
class Queue {
    //data members
    int *arr;
    int qfront;
    int qrear;
    int size;
public:
    Queue() 
    {
        // Implement the Constructor
        size=1000001;
        arr=new int[size];
        qfront=0;
        qrear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() 
    {
        // Implement the isEmpty() function
        if(qfront==qrear)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

    void enqueue(int data) 
    {
        // Implement the enqueue() function
        if(qrear==size) //check if queue is full
        {
            cout<<"Queue is full"<<endl;
        }
        else
        {
            arr[qrear]=data;
            qrear++;
        }
    }

    int dequeue() 
    {
        // Implement the dequeue() function
        if(qfront==qrear) //check if queue is empty
        {
          return -1;
        }
        else
        {
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==qrear)  //space waste naa ho
            {
                qfront=0;
                qrear=0;
            }
            return ans;
        }
    }

    int front() 
    {
        // Implement the front() function
        if(qfront==qrear) //empty queue
        {
           return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};