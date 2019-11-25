#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int main ()
{
    struct Node *head, *temp, *temp1, *x, *y, *z, *p;
    int choice, n, i, srch, value;
    while(1)
    {
        cout<<"Menu\n"<<endl;
        cout<<"1. Create a list\n2. Insert a node \n";
        cout<<"3. Show the list\n4. Search in the list\n5. Delete a node\n";

        cout<<"\nEnter your choice"<<endl;
        cin>>choice;
		if((choice == 2) || (choice == 3) || (choice == 4) || (choice == 5) || (head == NULL)){
			cout<<"Invalid selection create a list first !"<<endl;
			
		}
        else if(choice == 1)
        {
            cout<<"Welcome to linked list creation!"<<endl;
            cout<<"Let's create the head first"<<endl;
            head = new Node;
            cout<<"Enter head->data"<<endl;
            cin>>head->data;
            head->next = NULL;
            cout<<"Head is created"<<endl;

            cout<<"How many nodes you want to create?"<<endl;
            cin>>n;
            x = head;
            for(i=0; i<n-1; i++)
            {
                temp = new Node;
                cout<<"Enter node data: "<<endl;
                cin>>temp->data;
                temp->next = NULL;

                x->next = temp;
                x = x->next;
            }

            cout<<"Congrats! Your list is created!"<<endl;

        }
   
        
        else if(choice == 2)
        {
        
			while(1)	{
			
			cout<<"\n0. Exit to the main menu.\n1. Insert at the first.\n2. Insert at the end"<<endl;
            cout<<"3. Insert any of the middle node.\n4. Updated list."<<endl;
			cout<<"\nSelect..."<<endl;
           cin>>choice;
				if(choice == 1){
		   			temp1=new Node;
    				cout<<"\nEnter a data to add at first at the list:"<<endl;
    				cin>>temp1->data;
   					 temp1->next=head;
   					 head=temp1;
   					 z=head;
   					 cout<<"Data add succesfully!"<<endl;
   					 cout<<"\n";
   					n++;
					
						}
				else if(choice == 2)
				{ 
					temp1=new Node;
				    cout<<"\nEnter a data to add the end of the list:"<<endl;
				    cin>>temp1->data;
				    x->next=temp1;
				    x=x->next;
				    z=head;
				    cout<<"Data add succesfully!"<<endl;
				    cout<<"\n";
   			   	n++;
   			   	 
				}
				
				else if(choice == 3){
					while(1){
						cout<<"0. Exit to the previous menu.\n1. Insert after specific node.\n2. Insert before specific node.\n3. Updated list."<<endl;
                         cout<<"\nSelect..."<<endl;
						cin>>choice;
						if(choice == 1){
							
							temp1=new Node;
    cout<<"\nEnter data:"<<endl;
    cin>>temp1->data;

    y=head;
    cout<<"\nEnter the data after you want to insert new data:"<<endl;
    cin>>value;
    for(i=0; i<n+1; i++)
    {
        if(y->data==value)
        {
            p=y->next;
            y->next=temp1;
            temp1->next=p;
            break;
        }
        else
            y=y->next;
            
    }
				n++;
   			   	 cout<<"Data add succesfully!"<<endl;
   			   	 cout<<"\n";
							
						}
						else if(choice == 2){
							temp1=new Node; 
							
    cout<<"\nEnter data:"<<endl;
    cin>>temp1->data;

    y=head;
    cout<<"\nEnter the data before you want to insert new data:"<<endl;
    cin>>value;
    for(i=0; i<n+1; i++)
    {
        if(y->next->data==value)
        {
            p=y->next;
            y->next=temp1;
            temp1->next=p;
            break;
        }
        else
            y=y->next;
    }
				n++;
   			   	 cout<<"Data add succesfully!"<<endl;
   			   	 cout<<"\n";
				
						}
						
						
						else if(choice == 3)
        {
            cout<<"Updated list:"<<endl;
            y = head;
            for(i=0; i<n; i++)
            {
                cout<<y->data<<" ";
                y = y->next;
            }

            cout<<endl;
            
        }
					else if (choice == 0)
						break;
						else{
		    	cout<<"invalid option"<<endl;
			}
					}
				}
				
			else if(choice == 4)
        {
            cout<<"Updated list:"<<endl;
            y = head;
            for(i=0; i<n; i++)
            {
                cout<<y->data<<" ";
                y = y->next;
            }

            cout<<endl;
            
        }
				else  if(choice == 0){
					break;
				}
		    else{
		    	cout<<"invalid option"<<endl;
			}
			
			
  		
  			}
  		}
  		
        else if(choice == 3)
        {
            cout<<"Your List is here :"<<endl;
            y = head;
            for(i=0; i<n; i++)
            {
                cout<<y->data<<" ";
                y = y->next;
            }

            cout<<endl;
            
        }
        else if(choice == 4){
            x = head;
            cout<<"\nSearch your Data :"<<endl;
            cin>>srch;
            for(i=0;i<=n;i++){
                    if(x->data== srch){
                cout<<"\nYour data is in the list."<<endl;
                break;
                }
                    else if(x->data!= srch)
                    x = x->next;
            
                else {
                cout<<"\nYour data isn't in the list."<<endl;
                break;
            }
            }

        }
        else if(choice == 5)
        {
            while(1){
            cout<<"Which one do you want delete?"<<endl;
            cout<<"0. Exit to main menu\n1. 1st one\n2. Any of the middle\n3. Last one\n4. Updated list "<<endl;
            cout<<"\nSelect..."<<endl;
            cin>>choice;
            if(choice == 1){
            
                x = head -> next;
                delete (head);
                head = x;
                cout<<"\n1st data has been deleted successfully !"<<endl;
            	cout<<"\n";
            	n--;
                
                }
                
               else if (choice == 2){
                           y=head;
    cout<<"\nEnter data list which want to delete:"<<endl;
    cin>>value;
    for(i=0; i<n; i++)
    {
        if(y->next->data==value)
        {
            p=y->next;
            y->next=y->next->next;
            delete(p);
            cout<<"\nData deleted succesfully!"<<endl;
            cout<<"\n";
			n--;
            break;
        }
        else
        {
            y=y->next;
        }
    }
    
					   }
                        else if (choice == 3){
				y = head;
				if(y->next->next == NULL){
					y->next=NULL;
					delete(y->next->next);
					cout<<"\nData deleted succesfully!"<<endl;
					n--;
					cout<<"\n";
				
				}
				 
				else 
				y=y->next;
				
                }
                
                else if(choice == 4)
        {
            cout<<"Updated list:"<<endl;
            x = head;
            for(i=0; i<n; i++)
            {
                cout<<x->data<<" ";
                x = x->next;
            }

            cout<<endl;
            
        }
                else if(choice == 0){
				break;
               }
               else 
               cout<<"Invalid option"<<endl;
            }
            
    
    }

        else
        {
            cout<<"Sorry! Invalid option!"<<endl;
            
			
        }
        
        
    }
    
    return 0;
}

