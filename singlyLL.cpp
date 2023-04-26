#include <stdlib.h>
#include <iostream>
using namespace std; 
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  

void beginsert ();   
void lastinsert ();  
void randominsert();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display();  
void search(); 
void deleteduplicates();
void reverseList();
void  deleteduplicates()
{
	struct node *temp=head, *prev,*temp1;
	while(temp!=NULL)
	{	prev=temp;
		temp1=temp->next;
		while(temp1!=NULL)
		{
		if(temp->data==temp1->data)
		{
			prev->next=temp1->next;
		}
		else {
			prev=temp1;
		}
		temp1=temp1->next;
		}
		temp=temp->next;
	}
  display();
}
int main ()  
{  
    int choice =0;  
    while(choice != 10)   
    {  
        cout<<"\nChoose one option from below ...\n";  
        cout<<"\n===============================================\n";  
cout<<"\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n 7. search for an element\n8.display\n9.Exit\n";  
        cout<<"\nEnter your choice?\n";         
        cin>>choice;  
        switch(choice)  
        {  
            case 1:  
            beginsert();      
            break;  
            case 2:  
            lastinsert();         
            break;  
            case 3:  
            randominsert();       
            break;  
            case 4:  
            begin_delete();       
            break;  
            case 5:  
            last_delete();        
            break;  
            case 6:  
            random_delete();          
            break;  
            case 7:  
            search();         
            break;  
            case 8:  
            display();        
            break; 
          case 9:  
            reverseList();         
            break; 
          case 10:
          deleteduplicates();
          break;
            case 11:  
            exit(0);  
            break;  
            default:  
            cout<<"Please enter valid choice..";  
        }  
    }  
}  
void beginsert()  
{  
    struct node *nn; // new node is nn 
    nn = new node;  
    int item;  //item is for data part of new node
    if(nn == NULL)  
    {  
        cout<<"\nOVERFLOW";  
    }  
    else  
    {  
        cout<<"\nEnter value\n";    
        cin>>item;    
        nn->data = item;  
        nn->next = head;  
        head = nn;  
        cout<<"\nNode inserted";  
    }  
      
}  
void lastinsert()  
{  
    struct node *nn,*temp;  
    int item;     
    nn = new node;     
    if(nn == NULL)  
    {  
        cout<<"\nOVERFLOW";     
    }  
    else  
    {  
        cout<<"\nEnter value?\n";  
        cin>>item;  
        nn->data = item;  
        if(head == NULL)  
        {  
            nn -> next = NULL;  
            head = nn;  
            cout<<"\nNode inserted";  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = nn;  
            nn->next = NULL;  
            cout<<"\nNode inserted";  
          
        }  
    }  
}  
void randominsert()  
{  
    int i,loc,item;   
    struct node *nn, *temp;  
    nn =new node;
    if(nn == NULL)  
    {  
        cout<<"\nOVERFLOW";  
    }  
    else  
    {    
        cout<<"\nEnter the location after which you want to insert ";  
        cin>>loc;  
        temp=head;  
        if(loc==1)
        {
        	beginsert();
        }
        else
        {
        cout<<"\nEnter element value";  
        cin>>item;  
        nn->data = item;  
        for(i=1;i<loc-1;i++)  
        {   
            if(temp == NULL)  
            {  
                cout<<"\ncan't insert\n";  
                return;  
            } 
			else temp = temp->next;    
        }  
        nn ->next = temp ->next;   
        temp ->next = nn; 
		cout<<"\nNode inserted";   
		}	 
       
    }  
}  
void begin_delete()  
{  
    struct node *temp;  
    if(head == NULL)  
    {  
        cout<<"\nList is empty\n";  
    }  
    else   
    {  
        temp = head;  
        head = temp->next;  
        free(temp);  
        cout<<"\nNode deleted from the begining ...\n";  
    }  
}  
void last_delete()  
{  
    struct node *temp,*prev_temp;  
    if(head == NULL)  
    {  
        cout<<"\nlist is empty";  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        cout<<"\nOnly node of the list deleted ...\n";  
    }  
          
    else  
    {  
        temp = head;   
        while(temp->next != NULL)  
        {  
            prev_temp = temp;  
            temp = temp ->next;  
        }  
        prev_temp->next = NULL;  
        free(temp);  
        cout<<"\nDeleted Node from the last ...\n";  
    }     
}  
void random_delete()  
{  
    struct node *temp,*prev;  
    int loc,i;    
	cout<<"\n Enter the location of the node after which you want to perform deletion \n";  
    cin>>loc;  
    temp=head;  
    if(loc==1 )
    {
    	begin_delete();
    }
    else 
	{
    for(i=1;i<loc;i++)  
    {         
        if(temp == NULL)  
        {  
            cout<<"\nCan't delete";  
            return;  
        } 
		else
		{
		prev = temp;       
        temp = temp->next;  
		} 
    }  
    prev ->next = temp ->next;  
    free(temp);  
    cout<<"\nDeleted node"<<loc; 
	}
}  
void search()  
{  
    struct node *temp;  
    int item,i=0,flag;  
    temp = head;   
    if(temp == NULL)  
    {  
        cout<<"\nEmpty List\n";  
    }  
    else  
    {   
        cout<<"\nEnter item which you want to search?\n";   
        cin>>item;  
        while (temp!=NULL)  
        {  
            if(temp->data == item)  
            {  
                cout<<"item found at location "<<i+1;        
                return ;
            }  
            i++;  
            temp = temp -> next;  
        }         
            cout<<"Item not found\n";  
    }              
}  
  
void display()  
{  
    struct node *temp;  
    temp = head;   
    if(temp == NULL)  
    {  
        cout<<"SLL is empty";  
    }  
    else  
    {  
        cout<<"\nprinting values . . . . .\n";   
        while (temp!=NULL)  
        {  
            cout<<"\n"<<temp->data;  
            temp = temp -> next;  
        }  
    }  
}

void reverseList(){
		node *prev;
		node *temp = head;
		node *next;
		while(temp!=NULL){
			next = temp->next;
			temp->next = prev;
			prev=temp;
			temp=next;
		}
		head=prev;
  display();
	}
