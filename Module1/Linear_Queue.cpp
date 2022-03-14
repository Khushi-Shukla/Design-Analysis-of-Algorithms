// #include <iostream>
// #include<queue>

// using namespace std;



// int main()
// {
//     queue<int> q;
//     int num;
    // while(1){
    //     cout<<"Enter 1 to insert in the queue 2 to delete and 0 to exit: ";
    //     cin>>num;
    //     if(num==0){
    //         break;
    //     }
    //     else if(num==1){
    //         int n;
    //         cout<<"Enter element to push: ";
    //         cin>>n;
    //         q.push(n);
    //     }
    //     else{
    //         if(q.empty()){
    //             cout<<"Empty queue!\n";
    //         }
    //         else{
    //             int temp=q.front();
    //             q.pop();
    //             cout<<"Element deleted form queue is: "<<temp<<endl;
    //         }
    //     }
    // }
    
    // while(!q.empty()){
    //     int t=q.front();
    //     q.pop();
    //     cout<<t<<" ";
    // }

//     return 0;
// }

#include<iostream>
#include<vector>
#define N 20
using namespace std;

void enqueue(vector<int> &queue, int &rear, int &front, int n, int item){
    if(rear==n-1){
        cout<<"Queue overflow. Cannot insert more elements\n";
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    }
    else{
        rear=rear+1;
    }
    queue[rear]=item;
}

void dequeue(vector<int> &queue, int &rear, int &front, int n){
    if(front==-1){
        cout<<"Queue underflow. Cannot delete any element\n";
        return;
    }
    int item=queue[front];
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front=front+1;
    }
    cout<<item<<" deleted from the queue\n";
}

void display(vector<int> &queue, int front, int rear){
    for(int i=front;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    vector<int> queue(N);
    int front=-1, rear=-1,num;

    while(1){
        cout<<"Enter 1 to insert in the queue 2 to delete 3 to display and 0 to exit: ";
        cin>>num;
        if(num==0){
            break;
        }
        else if(num==1){
            int item;
            cout<<"Enter element to be inserted in the queue: ";
            cin>>item;
            enqueue(queue, rear, front, N, item);
        }
        else if(num==2){
            dequeue(queue, rear, front, N);
        }
        else if(num==3){
            cout<<"The queue is\n";
            display(queue, front, rear);
        }
        else{
            cout<<"Invalid input\n";
        }
    }

    cout<<"The queue is\n";
    display(queue, front, rear);
   
    return 0;
}
