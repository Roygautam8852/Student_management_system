# include<iostream>
using namespace std;
struct Node{
    int roll_num;
    string name;
    string email_id;
    string course_name;
    Node* next;
    Node(int roll_num,string name,string email_id,string course_name){
        this->roll_num = roll_num;
        this->name = name;
        this->email_id = email_id;
        this->course_name = course_name;
    }
};
void add_student(Node*&head,int roll_num,string name,string email_id,string course_name){
    if(head == nullptr){
        head = new Node(roll_num,name,email_id,course_name);
        return ;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new Node(roll_num,name,email_id,course_name);
}
void view_records(Node* head){
    if(head == nullptr){
        cout<<"Record list is empty.";
        return ;
    }
    cout<<"|||||||--------------------------------------------------------------->"<<endl;
    Node* temp = head;
    while(temp != nullptr){
            cout<<"Roll Number: "<<temp->roll_num<<endl;
            cout<<"Name :       "<<temp->name<<endl;
            cout<<"Email ID:    "<<temp->email_id<<endl;
            cout<<"Enrolled Course Name: "<<temp->course_name<<endl<<endl<<endl;
        temp = temp->next;
    }
}

void search_student(Node*head,int roll_num){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->roll_num == roll_num){
            cout<<"<----------------Data is present in records--------------->"<<endl;
            cout<<"Roll Number: "<<temp->roll_num<<endl;
            cout<<"Name :       "<<temp->name<<endl;
            cout<<"Email ID:    "<<temp->email_id<<endl;
            cout<<"Enrolled Course Name: "<<temp->course_name<<endl;
            return ;
        }
        temp = temp->next;
    }
    if(temp == nullptr){
        cout<<"Record is not found !"<<endl;
    }
}
void delete_student(Node* & head,int roll_num){
    if(head == nullptr){
        cout<<"Record list is empty.";
        return ;
    }
    Node* prev_node = nullptr;
    int node_position = 0;
    Node* temp = head;
    while(temp != nullptr){
        node_position = node_position + 1;
        if(temp->roll_num == roll_num){
           if(node_position == 1){
               Node* dead = head;
               head = dead->next;
               delete dead;
               cout<<"Record was present at head and it is deleted successfuly.";
               return ;
           }
           if(node_position != 1){
               Node* dead = temp;
               prev_node->next = dead->next;
               delete dead;
               cout<<"Record was present either in between in the list or at last and it is deleted successfuly.";
               return ;
           }
        }
        
        prev_node = temp;
        temp = temp->next;
    }
    
    if(temp == nullptr){
        cout<<"Record is not found so how can I delete it"<<endl;
    }
}
void bubble_sort(Node* head){
    if(head == nullptr || head->next == nullptr){
        cout<<"No need to sort 1 or 0 node.";
        return ;
    }
    int size = 0;
    Node* temp = head;
    while(temp != nullptr){
        size++;
        temp = temp->next;
    }
    Node* arr[size];
    temp = head;
    for(int i = 0;i<size;i++){
        arr[i] = temp;
        temp = temp->next;
    }
    for(int i = 0;i<size - 1;i++){
        for(int j = 0;j<size - 1 - i;j++){
            if(arr[j]->roll_num > arr[j+ 1]->roll_num){
                swap(arr[j]->roll_num,arr[j+ 1]->roll_num);
                swap(arr[j]->name,arr[j+ 1]->name);
                swap(arr[j]->email_id,arr[j+ 1]->email_id);
                swap(arr[j]->course_name,arr[j+ 1]->course_name);
            }
        }
    }
}


int main(){
    Node* head = nullptr;
    cout<<"how many record do you want to add: ";
    int len;
    cin>>len;
    
    int roll_num;
    string name;
    string email_id;
    string course_name;
    for(int i = 0;i<len;i++){
        cout<<"Enter "<<i+1<<"th record: "<<endl;
        cout<<"Enter roll number: ";
        cin>>roll_num;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter email id: ";
        cin>>email_id;
        cout<<"Enter enrolled course name: ";
        cin>>course_name;
        add_student(head,roll_num,name,email_id,course_name);
        cin.clear();
        cout<<endl;
    }
    cout<<"View records:"<<endl;
    view_records(head);
    
    cout<<"Enter roll number that you want to search: ";
    int r_num;
    cin>>r_num;
    search_student(head,r_num);
    
    cout<<"Enter roll number that you want to delete from records: ";
    cin>>r_num;
    delete_student(head,r_num);
    cout<<"Updated records: "<<endl;
    view_records(head);
    
    cout<<"Have look at 'sorted' records: "<<endl;
    bubble_sort(head);
    view_records(head);
    
    
    return 0;
}